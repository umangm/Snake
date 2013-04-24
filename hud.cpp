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

BitMap Hud(W12);		
BitMap backkkkk(W12);

// Function to open W12
void W12Open () {
	W12.Open();
	assert(W12.GetStatus() == WindowOpen);

	Hud.Load("Hud.xpm");
	assert(Hud.GetStatus() == BitMapOkay);
	Hud.SetPosition(Position(0, 0));
	Hud.Draw();

	backkkkk.Load("back.xpm");
        assert(backkkkk.GetStatus() == BitMapOkay);
        backkkkk.SetPosition(Position(6.5, 13));              
        backkkkk.Draw();

	int W12MouseClick(const Position &p12);	
	W12.SetMouseClickCallback(W12MouseClick);
	}

// Function which detects mouse click in W12 and opens W1
int W12MouseClick(const Position &p12) {
	if (backkkkk.IsInside(p12)) {
        W12.Close();
        W4Open();
	}
}
