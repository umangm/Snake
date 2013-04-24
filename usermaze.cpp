#include <assert.h>
#include "bitmap.h"
#include <cstring>
#include<iostream>
#include"position.h"
#include"rect.h"
#include "circle.h"
#include "triangle.h"
#include "square.h"
#include "wobject.h"
#include "shape.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include "label.h"
using namespace std;

BitMap W1Bmp(UserWindow);

BitMap wall1(UserWindow);

BitMap W2Bmp(option);

BitMap W3Bmp(option);

BitMap W4Bmp(UserWindow);

BitMap W5Bmp(UserWindow);



//int i,j;



//declaring character array to store maze before transferring it to text file
char mazeuserc[40][41];

//variables to calculate and store relevant mouse click positions.Also used to store coordinates in centimeters
//float x,y;


//function which calls back another function on mouse click
void createmazeuser();


//function to display a small rectangle at a particular position
int renderboundary(float x2,float y2){

						wall1.Load("wall.xpm");
        					assert(wall1.GetStatus() == BitMapOkay);
        					wall1.SetPosition(Position(x, y));              
        					wall1.Draw();

return 0;
}



//function to read from a text file to  a character array.
int readfile(){
  //read from the file
  FILE *rFile;
  rFile=fopen("maze.txt","r");

  for(int i=0;i<40;i++)
  {
   for(int j=0;j<41;j++)
   {
    mazeuserc[i][j]=fgetc(rFile);
   }
  }
  for(int i=0;i<40;i++)
  {
   for(int j=0;j<40;j++)
   {
    if(mazeuserc[i][j]=='|')
    {
     maze_user[(4*j)][(4*i)]=1;
    }

    else
    {
     maze_user[(4*j)][(4*i)]=0;
    }
   }
  }

  fclose(rFile);//file closed

return 0;
}

//function to write to the file
int writefile(){
  //code to write to the file
  FILE *wFile;
  wFile=fopen("maze.txt","w");

  for(int i=0;i<40;i++)
  {
  mazeuserc[i][40]='\n';
  for(int j=0;j<40;j++)
  {
   if(maze_user[(4*j)][(4*i)]==1)
   {
    mazeuserc[i][j]='|';
   }

   else
   {
   mazeuserc[i][j]='o';
   }
  }
  }

  for(int i=0;i<40;i++)
  {
   for(int j=0;j<41;j++)
   {
   fputc(mazeuserc[i][j],wFile);
   }
  }

  fclose(wFile);
}

int options(const Position &p2)
{
 if(W2Bmp.IsInside(p2))
 {
  option.Close();
  UserWindow.Open();
  assert(UserWindow.GetStatus() == WindowOpen);
  W1Bmp.Load("Save11.xpm");
  assert(W1Bmp.GetStatus() == BitMapOkay);
  W1Bmp.SetPosition(Position(16.5, 2.5));
  W1Bmp.Draw();

  W5Bmp.Load("Playuser.xpm");
  assert(W5Bmp.GetStatus() == BitMapOkay);
  W5Bmp.SetPosition(Position(16.5, 5.5));
  W5Bmp.Draw(); 

  W4Bmp.Load("Exit_User.xpm");
  assert(W4Bmp.GetStatus() == BitMapOkay);
  W4Bmp.SetPosition(Position(16.5, 8.5));
  W4Bmp.Draw();


  UserWindow.RenderLine(Position(0.0,16.1), Position(16.1,16.1),
               Black, 0.1);
  UserWindow.RenderLine(Position(16.1,0.0), Position(16.1,16.1),
               Black, 0.1);
UserWindow.RenderRectangle(Position(6.8,8.0), Position(8.4,10.8),
               Black, false);

  for( int i=0;i<160;i+=1)
      {
       for(int j=0;j<160;j+=1)
       {
          maze_user[i][j]=0;
       }
     }
  
  
  readfile();
  /*for(i=0;i<40;i++)
  {
   for(j=0;j<41;j++)
   {
    cout<<mazeuserc[i][j];
   }
  }*/
      
   for(int i=0;i<160;i+=1)
   {
     for(int j=0;j<160;j+=1)
     {
         if(maze_user[i][j]==1)
         { 
       
           x=i/10.0;
           y=j/10.0;

           renderboundary(x,y);
             
         }
       }
     }
   createmazeuser();
}

 if(W3Bmp.IsInside(p2))
 {  
  option.Close();
  UserWindow.Open();
  assert(UserWindow.GetStatus() == WindowOpen);
 
  W1Bmp.Load("Save11.xpm");
  assert(W1Bmp.GetStatus() == BitMapOkay);
  W1Bmp.SetPosition(Position(16.5, 2.5));
  W1Bmp.Draw();

  W5Bmp.Load("Playuser.xpm");
  assert(W5Bmp.GetStatus() == BitMapOkay);
  W5Bmp.SetPosition(Position(16.5, 5.5));
  W5Bmp.Draw(); 

  W4Bmp.Load("Exit_User.xpm");
  assert(W4Bmp.GetStatus() == BitMapOkay);
  W4Bmp.SetPosition(Position(16.5, 8.5));
  W4Bmp.Draw();

  UserWindow.RenderLine(Position(0.0,16.1), Position(16.1,16.1),
               Black, 0.1);
  UserWindow.RenderLine(Position(16.1,0.0), Position(16.1,16.1),
               Black, 0.1);
UserWindow.RenderRectangle(Position(6.8,8.0), Position(8.4,10.8),
               Black, false);
  createmazeuser();
 }

return 0;

}
//end of options function

int user(const Position &p1)
{
 
 int x1,y1;
 
  x=p1.GetXDistance();
  y=p1.GetYDistance();

int snakecheck=0;

 if(x>=6.4&&x<=8.4&&y>=8.0&&y<=10.4)
 {
 snakecheck=1;
 } 
  if(W1Bmp.IsInside(p1))
  {

  W1Bmp.Erase();
  
  writefile();
  
  
  
  }
  
 if(W4Bmp.IsInside(p1))
 {
  UserWindow.Close();
  /*open another(previous) window here*/

 }

 if( W5Bmp.IsInside(p1))
  { void playusermaze();

     playusermaze();

  }
  
 if(x<16.0&&y<16.0&&snakecheck!=1)
 {
  W1Bmp.Draw();
  x=10*x;
  y=10*y;
  
  x1=(int)x;
  y1=(int)y;
  
  x1=x1-(x1%4);
  y1=y1-(y1%4);
 

  x=x1/10.0;
  y=y1/10.0;
  
  if(maze_user[x1][y1]==0)
  { 
   maze_user[x1][y1]=1;        
   renderboundary(x,y);
   createmazeuser();
  }
   else
   {
    maze_user[x1][y1]=0;
       
             UserWindow.RenderRectangle(Position(x,y), Position(x+0.4,y+0.4),
               White, false);

     createmazeuser();       
   }
   }

   return 0;
   }
  
   
   

   void createmazeuser()
   {
     UserWindow.SetMouseClickCallback(user);
    }

   void playusermaze()
	{ 
	  snake.Open();
	  q='u';
	  n=3;
	  score1=0;  bonusscore=0;
 	  level=21;    
 	    assert(snake.GetStatus()==WindowOpen);	
		int createmazeuser();
		createmazeuser();
		int startgame();
		startgame();
			for(first_index=0;first_index<160;first_index+=1)
			 {
				for(second_index=0;second_index<160;second_index+=1)
        			 {
         				 if(maze_user[first_index][second_index]==1)
          				 {
      						x=first_index/10.0;
           					y=second_index/10.0;
        					wall.Load("wall.xpm");
        					assert(wall.GetStatus() == BitMapOkay);
        					wall.SetPosition(Position(x, y));              
        					wall.Draw();
        				 }
       				 }
     			}
		snake.RenderLine(Position(0.0,16.1), Position(16.1,16.1), Black, 0.1);
       		snake.RenderLine(Position(16.1,0.0), Position(16.1,16.1), Black, 0.1);		

		snake.RenderText(Position(33.0,4.0),(35.5,6.0),"Your Score :", Red);
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),zero, Blue);		
		snake.RenderText(Position(35.0,2.0),(37.5,4.0),"Your Level :", Red);
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),eigh, Blue);	

		Up.Load("Up.xpm");
        	assert(Up.GetStatus() == BitMapOkay);
       		Up.SetPosition(Position(19.0,4.0 ));              
       	 	Up.Draw();

       	 	Down.Load("Down.xpm");
        	assert(Down.GetStatus() == BitMapOkay);
       		Down.SetPosition(Position(19.0, 7.0));              
        	Down.Draw();

        	Right.Load("Right.xpm");
        	assert(Right.GetStatus() == BitMapOkay);
        	Right.SetPosition(Position(21.0, 5.5));              
        	Right.Draw();

        	Left.Load("Left.xpm");
        	assert(Left.GetStatus() == BitMapOkay);
        	Left.SetPosition(Position(17.0, 5.5));              
        	Left.Draw();		

		images.Load("images.xpm");
		assert(images.GetStatus() == BitMapOkay);
        	images.SetPosition(Position(17, 10));              
        	images.Draw();

		forward.Load("continue.xpm");
		assert(forward.GetStatus() == BitMapOkay);
        	forward.SetPosition(Position(21, 10));              
        	forward.Draw();
  			}

void usermaze()
   {
    W3.Close();
    option.Open();
    assert(option.GetStatus() == WindowOpen);


    
 
 
    W2Bmp.Load("Load_Previous.xpm");
    assert(W2Bmp.GetStatus() == BitMapOkay);
    W2Bmp.SetPosition(Position(4.7, 5.0));
    W2Bmp.Draw();


    W3Bmp.Load("Create_New.xpm");
    assert(W3Bmp.GetStatus() == BitMapOkay);
    W3Bmp.SetPosition(Position(5.2, 7.0));
    W3Bmp.Draw();
    
    option.SetMouseClickCallback(options);
   }
   

