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

BitMap Controls(W8);		//displays info for controls availables
BitMap bc(W8);

// Function to open W3
void W8Open () {
	W8.Open();
	assert(W8.GetStatus() == WindowOpen);

	Controls.Load("Controls.xpm");
	assert(Controls.GetStatus() == BitMapOkay);
	Controls.SetPosition(Position(0, 0));
	Controls.Draw();

	bc.Load("back.xpm");
	assert(bc.GetStatus() == BitMapOkay);
	bc.SetPosition(Position(6.5, 13));
	bc.Draw();

	int W8MouseClick(const Position &p8);	
	W8.SetMouseClickCallback(W8MouseClick);
	}

// Function which detects mouse click in W8 and opens W4
int W8MouseClick(const Position &p8) {
	if (bc.IsInside(p8)) {
        W8.Close();
        W4Open();
	}
}
