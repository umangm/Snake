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

BitMap aaa(W0);

void W0Open() {
	W0.Open();
        assert(W0.GetStatus() == WindowOpen);
       
	aaa.Load("title.xpm");		//snake photo
	assert(aaa.GetStatus() == BitMapOkay);
	aaa.SetPosition(Position(0, 0));
	aaa.Draw();
        
	int W0MouseClick1(const Position &p0);
        W0.SetMouseClickCallback(W0MouseClick1);
	}

// Function which detects mouse click in W0 and opens W1
int W0MouseClick1(const Position &p0) {
	if (aaa.IsInside(p0)) {
        W0.Close();
        void W1Open();
	W1Open();
	}
}
