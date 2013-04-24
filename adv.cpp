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

BitMap adv(W13); 		//the instruction for adventure version
BitMap bckk(W13);		//to go back to the previous window
BitMap start(W13);		//to start the game

// Function to open W13(the window to be opened after clicking on adventure game) 
void W13Open () {
	W13.Open();
	assert(W13.GetStatus() == WindowOpen);

	adv.Load("adv.xpm");
	assert(adv.GetStatus() == BitMapOkay);
	adv.SetPosition(Position(0, 0));
	adv.Draw();

	start.Load("start.xpm");
        assert(start.GetStatus() == BitMapOkay);
        start.SetPosition(Position(5, 8));              
        start.Draw();

	bckk.Load("Back.xpm");
        assert(bckk.GetStatus() == BitMapOkay);
        bckk.SetPosition(Position(6.5, 13));              
        bckk.Draw();

	int W13MouseClick(const Position &p13);	
	W13.SetMouseClickCallback(W13MouseClick);
		}

// Function which detects mouse click in W10 and starts the game or goes to the previous window
int W13MouseClick(const Position &p13) {
	
	if (start.IsInside(p13)) {
        W13.Close();
        level=11;
	n=3;
	advnture=1;
	q='u';
	snake.Open();
        assert(snake.GetStatus()==WindowOpen);	
	int createmaze1();
	createmaze1();
	startgame();
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

	else if (bckk.IsInside(p13)) {
        W13.Close();
        W2Open();
				     }
					}

