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

BitMap Bonus(W11);	//description of bonus objects
BitMap backkkk(W11);

// Function to open W11
void W11Open () {
	W11.Open();
	assert(W11.GetStatus() == WindowOpen);

	Bonus.Load("Bonus.xpm");
	assert(Bonus.GetStatus() == BitMapOkay);
	Bonus.SetPosition(Position(0, 0));
	Bonus.Draw();

	backkkk.Load("back.xpm"); 		//
        assert(backkkk.GetStatus() == BitMapOkay);
        backkkk.SetPosition(Position(6.5, 13));              
        backkkk.Draw();

	int W11MouseClick(const Position &p11);	
	W11.SetMouseClickCallback(W11MouseClick);
	}

// Function which detects mouse click in W11 and opens W4
int W11MouseClick(const Position &p11) {
	if (backkkk.IsInside(p11)) {
        W11.Close();
        W4Open();
	}
}
