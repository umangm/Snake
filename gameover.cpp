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
#include <string.h>
using namespace std;

BitMap gameover(Gameover);
BitMap quit(Gameover);

string yourscore="Your score is ";
string exc=" !!";
char scr[4];



// Function to display Game Over window and end the game
void GameoverOpen() {
	snake.StopTimer();
	  		     
	Gameover.Open();
        assert(Gameover.GetStatus() == WindowOpen);
       
	gameover.Load("Gameover.xpm");
        assert(gameover.GetStatus() == BitMapOkay);
        gameover.SetPosition(Position(0, 0));
        gameover.Draw();
        
	void itoa(int , char * );
         itoa (score, scr ); 

	Gameover.RenderText(Position(0.0,18.0),(10.0,16.0),yourscore+scr+exc, Blue);
	cout<< scr<<endl;	
	//save the user data in a file:-
	FILE * pFile;
         pFile = fopen ( "Scores.txt" , "a" );
         name[count1]=' ';
         
        // fseek ( pFile , 0, SEEK_SET );
         fputs(name, pFile);
         fputs(scr, pFile);
         fputc('\n', pFile);
         fclose (pFile);
       
         count1=0;  
         for(int i=0; i<100; i++){
	       name[i]='\0';
                                  }

	quit.Load("quit.xpm");
        assert(quit.GetStatus() == BitMapOkay);
        quit.SetPosition(Position(5.75, 12));
        quit.Draw();
	UserWindow.Close();	
	snake.Close();
		
	int GameoverMouseClick(const Position &p);
        Gameover.SetMouseClickCallback(GameoverMouseClick);
	}

// Function to exit the game
int GameoverMouseClick(const Position &p) {
	if (quit.IsInside(p)) {
        Gameover.Close();
        }
}
