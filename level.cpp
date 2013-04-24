#include <assert.h>
#include "bitmap.h"
#include <cstring>
#include<iostream>
#include"position.h"
#include"rect.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include "label.h"
using namespace std;

BitMap Level(W3);
BitMap one(W3);
BitMap two(W3);
BitMap three(W3);
BitMap four(W3);
BitMap five(W3);
BitMap six(W3);
BitMap seven(W3);
BitMap eight(W3);
BitMap nine(W3);
BitMap ten(W3);
BitMap bcck(W3);
BitMap Createmaze(W3);

// Function to open W3( which displays the levels you can play)
void W3Open () {
	W3.Open();
	assert(W3.GetStatus() == WindowOpen);
	advnture=2;

	Level.Load("level.xpm");
	assert(Level.GetStatus() == BitMapOkay);
	Level.SetPosition(Position(0, 0));
	Level.Draw();

	one.Load("1.xpm");
        assert(one.GetStatus() == BitMapOkay);
        one.SetPosition(Position(3.5, 3));              
        one.Draw();
	
	two.Load("2.xpm");
        assert(two.GetStatus() == BitMapOkay);
        two.SetPosition(Position(3.5, 5));              
        two.Draw();

	three.Load("3.xpm");
        assert(three.GetStatus() == BitMapOkay);
        three.SetPosition(Position(3.5, 7));              
        three.Draw();

	four.Load("4.xpm");
        assert(four.GetStatus() == BitMapOkay);
        four.SetPosition(Position(3.5, 9));              
        four.Draw();

	five.Load("5.xpm");
        assert(five.GetStatus() == BitMapOkay);
        five.SetPosition(Position(3.5, 11));              
        five.Draw();

	six.Load("6.xpm");
        assert(six.GetStatus() == BitMapOkay);
        six.SetPosition(Position(6.5, 3));              
        six.Draw();

	seven.Load("7.xpm");
        assert(seven.GetStatus() == BitMapOkay);
        seven.SetPosition(Position(6.5, 5));              
        seven.Draw();

	eight.Load("8.xpm");
        assert(eight.GetStatus() == BitMapOkay);
        eight.SetPosition(Position(6.5, 7));              
        eight.Draw();

	nine.Load("9.xpm");
        assert(nine.GetStatus() == BitMapOkay);
        nine.SetPosition(Position(6.5, 9));              
        nine.Draw();

	ten.Load("10.xpm");
        assert(ten.GetStatus() == BitMapOkay);
        ten.SetPosition(Position(6.5, 11));              
        ten.Draw();

	Createmaze.Load("createmaze.xpm");
        assert(Createmaze.GetStatus() == BitMapOkay);
        Createmaze.SetPosition(Position(9.0, 6.8));              
        Createmaze.Draw();

	bcck.Load("Back.xpm");
        assert(bcck.GetStatus() == BitMapOkay);
        bcck.SetPosition(Position(6, 13));              
        bcck.Draw();

	int W3MouseClick(const Position &p3);	
	W3.SetMouseClickCallback(W3MouseClick);
	}

// function to start the game
void startgame(){
	srand((unsigned int) time(0));
	
	void generateData(float food[][2]);	
	generateData(data);
	foodcheck();	

	void displayData(SimpleWindow &z, float g[][2]);	
	displayData(snake, data);

	snakepos[0][0]=7.2; snakepos[0][1]=8.8;     //snakepos represents the upperleft coordinates of each unit cell of the snake
        
	for(i=1;i<n;i++) {
		snakepos[i][0]=snakepos[0][0];          //x coordinate
		snakepos[i][1]=snakepos[i-1][1]+0.4;  //y coordinate ..initial position
			 }
	
        for(i=0;i<n;i++) {
	Snake.Load("snake.xpm");
	assert(Snake.GetStatus() == BitMapOkay);
	Snake.SetPosition(Position(snakepos[i][0],snakepos[i][1]));
	Snake.Draw();
	   		 }
	
	int snakeTimerEvent();
	snake.SetTimerCallback(snakeTimerEvent);
        snake.StartTimer(100);
	}

// Function which detects mouse click in W8 and opens W4
int W3MouseClick(const Position &p3) {
	int a; 
	float x,y;
	q='u';
	n=3;	

	if (one.IsInside(p3)) {		//i.e. level is one.
        	level=1;  
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
		int createmaze1();
		createmaze1();
		startgame();						//drawing the maze
			for(first_index=0;first_index<160;first_index+=1)
			 {
				for(second_index=0;second_index<160;second_index+=1)
        			 {
         				 if(maze1[first_index][second_index]==1)
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
                snake.RenderText(Position(38.5,2.0),(39.0,4.0),on, Blue);
		// creating the virtual keyboard
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

	else if (two.IsInside(p3)) {		//if level is two.
        	level=2; 
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
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
     			}
		snake.RenderLine(Position(0.0,16.1), Position(16.1,16.1), Black, 0.1);
       		snake.RenderLine(Position(16.1,0.0), Position(16.1,16.1), Black, 0.1);		

		snake.RenderText(Position(33.0,4.0),(35.5,6.0),"Your Score :", Red);
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),zero, Blue);		
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



	else if (three.IsInside(p3)) {		//if level is three
        	level=3;  
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
		int createmaze3();
		createmaze3();
		startgame();
			for(first_index=0;first_index<160;first_index+=1)
			 {
				for(second_index=0;second_index<160;second_index+=1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),zero, Blue);		
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



	else if (four.IsInside(p3)) {		//if level is four
        	level=4;  
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),zero, Blue);		
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



	else if (five.IsInside(p3)) {		//if level is five
        	level=5;  
		q='l';		
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
		int createmaze5();
		createmaze5();
		startgame();
			for(first_index=0;first_index<160;first_index+=1)
			 {
				for(second_index=0;second_index<160;second_index+=1)
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),zero, Blue);		
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
	
	else if (six.IsInside(p3)) {	//if level is six
        	level=6;  
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),zero, Blue);		
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

	else if (seven.IsInside(p3)) {		//if level is seven
        	level=7;  
		q='r';		
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),zero, Blue);		
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

	else if (eight.IsInside(p3)) {		//if level is eight
        	level=8;  
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
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


	else if (nine.IsInside(p3)) {	//if level is nine
        	level=9;  
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),zero, Blue);		
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

	else if (ten.IsInside(p3)) {		//if level is two.
        	level=10;  
		q='l';
		W3.Close();	
		snake.Open();
        	assert(snake.GetStatus()==WindowOpen);	
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
                snake.RenderText(Position(36.5,4.0),(37.0,6.0),zero, Blue);		
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

	else if(Createmaze.IsInside(p3)){
		void usermaze();
		usermaze();		}

	else if (bcck.IsInside(p3)) {
          W3.Close();
          void W2Open();
	  W2Open();
	}
}
