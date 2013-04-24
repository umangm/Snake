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

BitMap Objectives(W9);
BitMap backk(W9);

// Function to open W9(displays the objectives of the game )

void W9Open () {
	W9.Open();
	assert(W9.GetStatus() == WindowOpen);

	Objectives.Load("Objectives.xpm");
	assert(Objectives.GetStatus() == BitMapOkay);
	Objectives.SetPosition(Position(0, 0));
	Objectives.Draw();

	backk.Load("back.xpm");
        assert(backk.GetStatus() == BitMapOkay);
        backk.SetPosition(Position(6.5, 13));              
        backk.Draw();

	int W9MouseClick(const Position &p9);	
	W9.SetMouseClickCallback(W9MouseClick);
	}

// Function which detects mouse click in W9 and opens W4
int W9MouseClick(const Position &p9) {
	if (backk.IsInside(p9)) {
        W9.Close();
        W4Open();
	}
}
