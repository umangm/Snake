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

BitMap Awards(W10);		//displays the awards info
BitMap backkk(W10);

// Function to open W10
void W10Open () {
	W10.Open();
	assert(W10.GetStatus() == WindowOpen);

	Awards.Load("Awards.xpm");
	assert(Awards.GetStatus() == BitMapOkay);
	Awards.SetPosition(Position(0, 0));
	Awards.Draw();

	backkk.Load("back.xpm");
        assert(backkk.GetStatus() == BitMapOkay);
        backkk.SetPosition(Position(6.5, 13));              
        backkk.Draw();

	int W10MouseClick(const Position &p10);	
	W10.SetMouseClickCallback(W10MouseClick);
	}

// Function which detects mouse click in W10 and opens W4
int W10MouseClick(const Position &p10) {
	if (backkk.IsInside(p10)) {
        W10.Close();
        W4Open();
	}
}
