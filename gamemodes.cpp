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

BitMap Gamemodes(W7);
BitMap b(W7);

// Function to open W7(the gamemodes window which displays info about the available gamemodes)


void W7Open () {
	W7.Open();
	assert(W7.GetStatus() == WindowOpen);

	Gamemodes.Load("Gamemodes.xpm");
	assert(Gamemodes.GetStatus() == BitMapOkay);
	Gamemodes.SetPosition(Position(0, 0));
	Gamemodes.Draw();

	b.Load("back.xpm");
        assert(b.GetStatus() == BitMapOkay);
        b.SetPosition(Position(6.5, 14));              
        b.Draw();

	int W7MouseClick(const Position &p7);	
	W7.SetMouseClickCallback(W7MouseClick);
	}

// Function which detects mouse click in W7 and opens W4
int W7MouseClick(const Position &p7) {
	if (b.IsInside(p7)) {
        W7.Close();
        W4Open();
	}
}
