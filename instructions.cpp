
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

BitMap abc(W4);
BitMap controls(W4);
BitMap gamemodes(W4);
BitMap objectives(W4);
BitMap bonus(W4);
BitMap awards(W4);
BitMap hud(W4);
BitMap back(W4);

// Function to open W4(instructions)
void W4Open() {
	W4.Open();
 
	assert(W4.GetStatus() == WindowOpen); 
 
        abc.Load("instructions.xpm");
        assert(abc.GetStatus() == BitMapOkay);
        abc.SetPosition(Position(0, 0));              
        abc.Draw();
        
               
        gamemodes.Load("gamemodes.xpm");
        assert(gamemodes.GetStatus() == BitMapOkay);
        gamemodes.SetPosition(Position(12, 1.7));              
        gamemodes.Draw();
        
	controls.Load("controls.xpm");
        assert(controls.GetStatus() == BitMapOkay);
        controls.SetPosition(Position(12, 3.5));              
        controls.Draw(); 

	objectives.Load("objectives.xpm");
        assert(objectives.GetStatus() == BitMapOkay);
        objectives.SetPosition(Position(12, 5.5));              
        objectives.Draw();
        
        bonus.Load("bonus.xpm");
        assert(bonus.GetStatus() == BitMapOkay);
        bonus.SetPosition(Position(12, 7.5));              
        bonus.Draw();
        
	awards.Load("awards.xpm");
        assert(awards.GetStatus() == BitMapOkay);
        awards.SetPosition(Position(12, 9.5));              
        awards.Draw();
        
        hud.Load("hud.xpm");
        assert(hud.GetStatus() == BitMapOkay);
        hud.SetPosition(Position(12, 11.5));              
        hud.Draw();

        back.Load("Back.xpm");
        assert(back.GetStatus() == BitMapOkay);
        back.SetPosition(Position(12, 14));              
        back.Draw();   

	int W4MouseClick1(const Position &p4);
	W4.SetMouseClickCallback(W4MouseClick1);    
}

// Function which detects mouse click in W4 and opens W1
int W4MouseClick1(const Position &p4) {
	if (gamemodes.IsInside(p4)) {
        W4.Close();
        void W7Open();
	W7Open();
        }
	
	else if (controls.IsInside(p4)) {
        W4.Close();
        void W8Open();
	W8Open();
	}


	else if (objectives.IsInside(p4)) {
        W4.Close();
        void W9Open();
	W9Open();
        }

	else if (awards.IsInside(p4)) {
        W4.Close();
        void W10Open();
	W10Open();
	}

	else if (bonus.IsInside(p4)) {
        W4.Close();
	void W11Open();
	W11Open();
        }
	
	else if (hud.IsInside(p4)) {
        W4.Close();
	void W12Open();
	W12Open();
        }
	
	else if (back.IsInside(p4)) {
        W4.Close();
        W1Open();
	}
}
