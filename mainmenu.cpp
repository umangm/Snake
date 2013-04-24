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

BitMap MainMenu(W1);
BitMap Play(W1);
BitMap Instructions(W1);
BitMap HighScores(W1);
BitMap About(W1);
BitMap Exit(W1);
BitMap aa(W1);

// Function to open W1(the main menu)
void W1Open () {
	
	W1.Open();
        assert(W1.GetStatus() == WindowOpen);
	
	aa.Load("mainmenu.xpm");
	assert(aa.GetStatus() == BitMapOkay);
	aa.SetPosition(Position(0, 0));
	aa.Draw();	

	Play.Load("Play.xpm");
	assert(Play.GetStatus() == BitMapOkay);
	Play.SetPosition(Position(2.5, 2.5));
	Play.Draw();
	
	Instructions.Load("Instructions.xpm");
	assert(Instructions.GetStatus() == BitMapOkay);
	Instructions.SetPosition(Position(2.5, 5));
	Instructions.Draw();

	HighScores.Load("HighScores.xpm");
	assert(HighScores.GetStatus() == BitMapOkay);
	HighScores.SetPosition(Position(2.5, 7.5));
	HighScores.Draw();

	About.Load("About.xpm");
	assert(About.GetStatus() == BitMapOkay);
	About.SetPosition(Position(2.5, 10));
	About.Draw();

	Exit.Load("Exit.xpm");
	assert(Exit.GetStatus() == BitMapOkay);
	Exit.SetPosition(Position(2.5, 12.5));
	Exit.Draw();

        int W1MouseClick1(const Position &p1);	
	W1.SetMouseClickCallback(W1MouseClick1);

	}

// Function which detects mouse click in W1 and opens other windows
int W1MouseClick1(const Position &p1) {
	if (Play.IsInside(p1)) {
        W1.Close();
        void VirtualkeyboardOpen();
	VirtualkeyboardOpen();
        }
	
	else if (Instructions.IsInside(p1)) {
        W1.Close();
        void W4Open();
	W4Open();
	}

	else if (HighScores.IsInside(p1)) {
        W1.Close();
        void W5Open();
	W5Open();
        }

	else if (About.IsInside(p1)) {
        W1.Close();
        void W6Open();
	W6Open();
	}

	else if (Exit.IsInside(p1)) {
        W1.Close();
        }

}
