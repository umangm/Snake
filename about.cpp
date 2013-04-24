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

BitMap Back(W6);
BitMap about(W6);

// Function to open W6
void W6Open() {
	W6.Open();
        assert(W6.GetStatus() == WindowOpen); 
 
        about.Load("about.xpm");
        assert(about.GetStatus() == BitMapOkay);
        about.SetPosition(Position(0, 0));              
        about.Draw();
	
	Back.Load("back.xpm");
        assert(Back.GetStatus() == BitMapOkay);
        Back.SetPosition(Position(2.5, 14));              
        Back.Draw();   

	int W6MouseClick1(const Position &p6);	
	W6.SetMouseClickCallback(W6MouseClick1);
	}

// Function which detects mouse click in W6 and opens W1(the previous window)
int W6MouseClick1(const Position &p6) {
	if (Back.IsInside(p6)) {
        W6.Close();
        W1Open();
	}
}
