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
#include "label.h"
using namespace std;

// this function starts level2 
void nextlevel1() {
	n=3;	
	level=12;
	snake.RenderRectangle(Position(0,0), Position(16.0,16.0),
               White, false);
	q='u';
	//draw the maze:-
       int createmaze2();
	createmaze2();
	startgame();
	for(first_index=0;first_index<160;first_index+=1)
      {
       for(second_index=0;second_index<160;second_index+=1)
       {
         if(maze2[first_index][second_index]==1)		
         {
      
           x=first_index/10.0;
           y=second_index/10.0;

		wall.Load("wall.xpm");
		assert(wall.GetStatus() == BitMapOkay);
		wall.SetPosition(Position(x, y));              
		wall.Draw();

             }
          }
        }		// to make a seperate area for display
		snake.RenderLine(Position(0.0,16.1), Position(16.1,16.1), Black, 0.1);
       		snake.RenderLine(Position(16.1,0.0), Position(16.1,16.1), Black, 0.1);		

		snake.RenderText(Position(33.0,4.0),(35.5,6.0),"Your Score :", Red);
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);		
		snake.RenderText(Position(35.0,2.0),(37.5,4.0),"Your Level :", Red);
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),tw, Blue);	

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
// to start level3
void nextlevel2(){
	
	n=3;
	level=13;
	snake.RenderRectangle(Position(0,0), Position(16.0,16.0),
               White, false);

	q='u';

       int createmaze3();
       createmaze3();
	startgame();
       for(first_index=0;first_index<160;first_index+=4)
        {
          for(second_index=0;second_index<160;second_index+=4)
          {
             if(maze3[first_index][second_index]==1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);		
		snake.RenderText(Position(35.0,2.0),(37.5,4.0),"Your Level :", Red);
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),thre, Blue);		

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

// to start level4
void nextlevel3(){
	
	n=3;	
	level=14;
	snake.RenderRectangle(Position(0,0), Position(16.0,16.0),
               White, false);

	q='u';

       int createmaze4();
      createmaze4();
	startgame();
      for(first_index=0;first_index<160;first_index+=1)
       {
        for(second_index=0;second_index<160;second_index+=1)
         {
           if(maze4[first_index][second_index]==1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);		
		snake.RenderText(Position(35.0,2.0),(37.5,4.0),"Your Level :", Red);
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),fou, Blue);		

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
//to start level 5
void nextlevel4(){
	
	n=3;	
	level=15;
	snake.RenderRectangle(Position(0,0), Position(16.0,16.0),
               White, false);

	q='u';

      int createmaze5();
      createmaze5();
	startgame();
        for(first_index=0;first_index<160;first_index+=4)
         {
          for(second_index=0;second_index<160;second_index+=4)
           {
            if(maze5[first_index][second_index]==1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);		
		snake.RenderText(Position(35.0,2.0),(37.5,4.0),"Your Level :", Red);
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),fiv, Blue);	

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
// to start level 6
void nextlevel5(){
	
	n=3;	
	level=16;
	snake.RenderRectangle(Position(0,0), Position(16.0,16.0),
               White, false);

	q='u';

      int createmaze6();
     createmaze6();
     startgame();
     for(first_index=0;first_index<160;first_index+=1)
      {
       for(second_index=0;second_index<160;second_index+=1)
       {
         if(maze6[first_index][second_index]==1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);		
		snake.RenderText(Position(35.0,2.0),(37.5,4.0),"Your Level :", Red);
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),si, Blue);		

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
// to start level 7
void nextlevel6(){
	
	n=3;	
	level=17;
	snake.RenderRectangle(Position(0,0), Position(16.0,16.0),
               White, false);

	q='u';

      int createmaze7();
     createmaze7();
     startgame();
     for(first_index=0;first_index<160;first_index+=1)
      {
       for(second_index=0;second_index<160;second_index+=1)
       {
         if(maze7[first_index][second_index]==1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);		
		snake.RenderText(Position(35.0,2.0),(37.5,4.0),"Your Level :", Red);
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),seve, Blue);		

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
// to start level8
void nextlevel7(){
	
	n=3;	
	level=18;
	snake.RenderRectangle(Position(0,0), Position(16.0,16.0),
               White, false);

	q='u';

      int createmaze8();
     createmaze8();
     startgame();
     for(first_index=0;first_index<160;first_index+=1)
      {
       for(second_index=0;second_index<160;second_index+=1)
       {
         if(maze8[first_index][second_index]==1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);		
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
//to start level 9
void nextlevel8(){
	
	n=3;	
	level=19;
	snake.RenderRectangle(Position(0,0), Position(16.0,16.0),
               White, false);

	q='u';

        int createmaze9();
	createmaze9();
	startgame();
	for(first_index=0;first_index<160;first_index+=1)
      {
       for(second_index=0;second_index<160;second_index+=1)
       {
         if(maze9[first_index][second_index]==1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);		
		snake.RenderText(Position(35.0,2.0),(37.5,4.0),"Your Level :", Red);
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),nin, Blue);	

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
// to start level 10
void nextlevel9(){
	
	n=3;	
	level=20;
	snake.RenderRectangle(Position(0,0), Position(16.0,16.0),
               White, false);

	q='l';
	
        int createmaze10();
	createmaze10();
	startgame();
	for(first_index=0;first_index<160;first_index+=1)
      {
       for(second_index=0;second_index<160;second_index+=1)
       {
         if(maze10[first_index][second_index]==1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);		
		snake.RenderText(Position(35.0,2.0),(37.5,4.0),"Your Level :", Red);
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),te, Blue);	

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

