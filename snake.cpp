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

// Defining the variables
int i,n;
int q,v;
float data[0][2], data1[0][2];
float snakepos[256][2];
int score=0,score1=0,bonusscore=0,score2=50;
int first_index,second_index,level;
float x=0,y=0;
float xx=0,yy=0;
int f=0; 
int state=2;
string zero="0", on="1", tw="2", thre="3", fou="4", fiv="5", si="6", seve="7", eigh="8", nin="9", te="10";
char sc[4]; char tim[2];
int t,deletor;
int help=0,generated[1]={0};
int e1[2]={21,21},bonusdrawn[1]={0};
float bonus1[1][2];
int timerindicator=0;  //timerindicator is used in the delay function
int advnture=0;

//declaration of arrays for storing mazes
float maze1[160][160];
float maze2[160][160];
float maze3[160][160];
float maze4[160][160];
float maze5[160][160];
float maze6[160][160];
float maze7[160][160];
float maze8[160][160];
float maze9[160][160];
float maze10[160][160];
float maze_user[160][160];

SimpleWindow W0("Snake", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W1("Main Menu", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W2("Play", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W3("Level", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W4("Instructions", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W5("High Scores", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W6("About", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W7("Game Modes", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W8("Controls", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W9("Objectives", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W10("Awards", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W11("Bonus", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W12("HUD", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow W13("Adventure", 16.0, 16.0, Position(1.0, 0.0));
SimpleWindow Gameover("GAME OVER", 17.0, 16.0, Position(1.0, 0.0));
SimpleWindow UserWindow("user", 20.0, 16, Position(1.0, 0.0));
SimpleWindow option("user", 15.0, 15.0, Position(1.0, 0.0));
SimpleWindow snake("snake",24,16, Position(1.0,0.0));
SimpleWindow Virtualkeyboard("User Name", 16.0, 16.0, Position(1.0, 0.0));

#include "title.cpp"
#include "mainmenu.cpp"
#include "virtual.cpp"
#include "gamemodeselection.cpp"
#include "instructions.cpp"
#include "about.cpp"
#include "highscores.cpp"
#include "gamemodes.cpp"
#include "controls.cpp"
#include "objectives.cpp"
#include "awards.cpp"
#include "bonus.cpp"
#include "hud.cpp"
#include "gameover.cpp"
#include "functions.cpp"
#include "movement.cpp"
#include "mazes.cpp"
#include "level.cpp"
#include "usermaze.cpp"
#include "adventure.cpp"
#include "adv.cpp"


// Main Program !!! :D
int ApiMain() {
	W0Open();

	return 0;
}
