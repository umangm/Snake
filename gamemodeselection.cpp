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

BitMap play(W2);
BitMap bck(W2);
BitMap adventure(W2);
BitMap custom(W2);
BitMap Snake(snake);
BitMap wall(snake);

// Function to open W2
void W2Open() {
	Virtualkeyboard.StopTimer();	
	W2.Open();
	assert(W2.GetStatus() == WindowOpen);

	play.Load("play.xpm");
	assert(play.GetStatus() == BitMapOkay);
	play.SetPosition(Position(0, 0));
	play.Draw();
	
	adventure.Load("adventure.xpm");
	assert(adventure.GetStatus() == BitMapOkay);
	adventure.SetPosition(Position(9, 3));
	adventure.Draw();
	
	custom.Load("custom.xpm");
	assert(custom.GetStatus() == BitMapOkay);
	custom.SetPosition(Position(9, 6));
	custom.Draw();
	
	bck.Load("Back.xpm");
	assert(bck.GetStatus() == BitMapOkay);
	bck.SetPosition(Position(10.5, 11));
	bck.Draw();

	Virtualkeyboard.Close();	
	
	int W2MouseClick1(const Position &p2);	
	W2.SetMouseClickCallback(W2MouseClick1);
	
	}

/* Function which detects mouse click in W2 and opens W1  (to check whether the user wants to play the custom/adventure mode*/
int W2MouseClick1(const Position &p2) {
	if (custom.IsInside(p2)) {
	W2.Close();
	void W3Open();
	W3Open();	
	}

	else if (adventure.IsInside(p2)) {
	W2.Close();
        void W13Open();
	W13Open();
	}
	
	else if (bck.IsInside(p2)) {
        W2.Close();
        void W1Open();
	W1Open();
	}
}
