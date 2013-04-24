#include <assert.h>
#include "bitmap.h"
#include <cstring>
#include<iostream>
#include"position.h"
#include"rect.h"
#include "circle.h"
#include "triangle.h"
#include "square.h"
#include "wobject.h"
#include "shape.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include "label.h"
using namespace std;

BitMap A(Virtualkeyboard);			//the characters on the keyboard
BitMap B(Virtualkeyboard);
BitMap C(Virtualkeyboard);
BitMap D(Virtualkeyboard);
BitMap E(Virtualkeyboard);
BitMap F(Virtualkeyboard);
BitMap G(Virtualkeyboard);
BitMap H(Virtualkeyboard);
BitMap I(Virtualkeyboard);
BitMap J(Virtualkeyboard);
BitMap K(Virtualkeyboard);
BitMap L(Virtualkeyboard);
BitMap M(Virtualkeyboard);
BitMap N(Virtualkeyboard);
BitMap O(Virtualkeyboard);
BitMap P(Virtualkeyboard);
BitMap Q(Virtualkeyboard);
BitMap R(Virtualkeyboard);
BitMap S(Virtualkeyboard);
BitMap T(Virtualkeyboard);
BitMap U(Virtualkeyboard);
BitMap V(Virtualkeyboard);
BitMap W(Virtualkeyboard);
BitMap X(Virtualkeyboard);
BitMap Y(Virtualkeyboard);
BitMap Z(Virtualkeyboard);
BitMap SpaceBar(Virtualkeyboard);
BitMap Backspace(Virtualkeyboard);
BitMap ENTER(Virtualkeyboard);
BitMap abcd(Virtualkeyboard);

int count1=0;
float addX=0.0;
//int i;
string hello="Hello ";
string Excl=" !";

char name[25];
//for(i=0; i<20; i++) 
   //{name[i]='\0';}

Position P0(6.0,10.0);
Position P1(0.2,0.0);
Position P2(0.2,0.0);
Position UpperLeft= P0+P1;
Position LowerRight=P0+P2+Position(0.2,0.2);

int NameTimer() {
	void W2Open();
	W2Open();
		}

int VirtualkeyboardOpen() {
	W1.Close();	
	Virtualkeyboard.Open();
	assert(Virtualkeyboard.GetStatus() == WindowOpen);

abcd.Load("virtualkeyboard.xpm");
	assert(abcd.GetStatus() == BitMapOkay);
abcd.SetPosition(Position(0.0, 0.0));
	abcd.Draw();

A.Load("A.xpm");
	assert(A.GetStatus() == BitMapOkay);
A.SetPosition(Position(1.5, 11.0));
	A.Draw();


B.Load("B.xpm");
	assert(B.GetStatus() == BitMapOkay);
B.SetPosition(Position(2.5, 11.0));
	B.Draw();


C.Load("C.xpm");
	assert(C.GetStatus() == BitMapOkay);
C.SetPosition(Position(3.5, 11.0));
	C.Draw();


D.Load("D.xpm");
	assert(D.GetStatus() == BitMapOkay);
D.SetPosition(Position(4.5, 11.0));
	D.Draw();


E.Load("E.xpm");
	assert(E.GetStatus() == BitMapOkay);
E.SetPosition(Position(5.5, 11.0));
	E.Draw();


F.Load("F.xpm");
	assert(F.GetStatus() == BitMapOkay);
F.SetPosition(Position(6.5, 11.0));
	F.Draw();


G.Load("G.xpm");
	assert(G.GetStatus() == BitMapOkay);
G.SetPosition(Position(7.5, 11.0));
	G.Draw();


H.Load("H.xpm");
	assert(H.GetStatus() == BitMapOkay);
H.SetPosition(Position(8.5, 11.0));
	H.Draw();


I.Load("I.xpm");
	assert(I.GetStatus() == BitMapOkay);
I.SetPosition(Position(9.5, 11.0));
	I.Draw();


J.Load("J.xpm");
	assert(J.GetStatus() == BitMapOkay);
J.SetPosition(Position(10.5, 11.0));
	J.Draw();


K.Load("K.xpm");
	assert(K.GetStatus() == BitMapOkay);
K.SetPosition(Position(11.5, 11.0));
	K.Draw();


L.Load("L.xpm");
	assert(L.GetStatus() == BitMapOkay);
L.SetPosition(Position(12.5, 11.0));
	L.Draw();


M.Load("M.xpm");
	assert(M.GetStatus() == BitMapOkay);
M.SetPosition(Position(13.5, 11.0));
	M.Draw();


N.Load("N.xpm");
	assert(N.GetStatus() == BitMapOkay);
N.SetPosition(Position(1.5, 12.0));
	N.Draw();


O.Load("O.xpm");
	assert(O.GetStatus() == BitMapOkay);
O.SetPosition(Position(2.5, 12.0));
	O.Draw();



P.Load("P.xpm");
	assert(P.GetStatus() == BitMapOkay);
P.SetPosition(Position(3.5, 12.0));
	P.Draw();



Q.Load("Q.xpm");
	assert(Q.GetStatus() == BitMapOkay);
Q.SetPosition(Position(4.5, 12.0));
	Q.Draw();



R.Load("R.xpm");
	assert(R.GetStatus() == BitMapOkay);
R.SetPosition(Position(5.5, 12.0));
	R.Draw();



S.Load("S.xpm");
	assert(S.GetStatus() == BitMapOkay);
S.SetPosition(Position(6.5, 12.0));
	S.Draw();



T.Load("T.xpm");
	assert(T.GetStatus() == BitMapOkay);
T.SetPosition(Position(7.5, 12.0));
	T.Draw();



U.Load("U.xpm");
	assert(U.GetStatus() == BitMapOkay);
U.SetPosition(Position(8.5, 12.0));
	U.Draw();



V.Load("V.xpm");
	assert(V.GetStatus() == BitMapOkay);
V.SetPosition(Position(9.5, 12.0));
	V.Draw();



W.Load("W.xpm");
	assert(W.GetStatus() == BitMapOkay);
W.SetPosition(Position(10.5, 12.0));
	W.Draw();


X.Load("X.xpm");
	assert(X.GetStatus() == BitMapOkay);
X.SetPosition(Position(11.5, 12.0));
	X.Draw();



Y.Load("Y.xpm");
	assert(Y.GetStatus() == BitMapOkay);
Y.SetPosition(Position(12.5, 12.0));
	Y.Draw();



Z.Load("Z.xpm");
	assert(Z.GetStatus() == BitMapOkay);
Z.SetPosition(Position(13.5, 12.0));
	Z.Draw();



SpaceBar.Load("Spacebar.xpm");
	assert(SpaceBar.GetStatus() == BitMapOkay);
SpaceBar.SetPosition(Position(6.5,13.2 ));
	SpaceBar.Draw();


Backspace.Load("Backspace.xpm");
	assert(Backspace.GetStatus() == BitMapOkay);
Backspace.SetPosition(Position(11.5, 13.2));
	Backspace.Draw();



ENTER.Load("Enter.xpm");
	assert(ENTER.GetStatus() == BitMapOkay);
ENTER.SetPosition(Position(1.5, 13.2));
	ENTER.Draw();

int VirtualkeyboardMouseClick(const Position &p);
Virtualkeyboard.SetMouseClickCallback(VirtualkeyboardMouseClick);
}


int VirtualkeyboardMouseClick(const Position &p) {
	
   float x=p.GetXDistance();
   float y=p.GetYDistance();
    addX=(0.2 * count1);
   
   //P1=P1 + Position(addX*count1,0.0);
   //P2=P2 + Position(addX*count1,0.0);


   //cout<<x<<" "<<y<<endl;
   //cout<<addX<<endl;

  if (A.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"A", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='A';
        count1++;
                     }

   if (B.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"B", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight =Position(6.2,10.2)+P2;
        name[count1]='B';
        count1++;
                     }

   if (C.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"C", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0)+P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='C';
        count1++;
                     }

   if (D.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"D", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='D';
        count1++;
                     }

   if (E.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"E", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='E';
        count1++;
                     }

   if (F.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"F", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='F';
        count1++;
                     }

   if (G.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"G", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='G';
        count1++;
                     }

   if (H.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"H", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='H';
        count1++;
                     }

   if (I.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"I", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='I';
        count1++;
                     }

   if (J.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"J", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='J';
        count1++;
                     }

   if (K.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"K", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='K';
        count1++;
                     }

   if (L.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"L", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='L';
        count1++;
                     }


   if (M.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"M", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='M';
        count1++;
                     }

   if (N.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"N", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='N';
        count1++;
                     }

   if (O.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"O", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='O';
        count1++;
                     }

   if (P.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"P", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='P';
        count1++;
                     }

   if (Q.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"Q", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='Q';
        count1++;
                     }

   if (R.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"R", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='R';
        count1++;
                     }

   if (S.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"S", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='S';
        count1++;
                     }

   if (T.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"T", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='T';
        count1++;
                     }

   if (U.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"U", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='U';
        count1++;
                     }

   if (V.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"V", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='V';
        count1++;
                     }

   if (W.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"W", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='W';
        count1++;
                     }

   if (X.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"X", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='X';
        count1++;
                     }

   if (Y.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"Y", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='Y';
        count1++;
                     }    

if (Z.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight,"Z", Red);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]='Z';
        count1++;
                     }

if (SpaceBar.IsInside(p)) {
        Virtualkeyboard.RenderText(UpperLeft,LowerRight," ", White);
        P1=P1 + Position(0.2,0.0);
        P2=P2 + Position(0.2,0.0);
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        name[count1]=' ';
        count1++;
                     }

if (Backspace.IsInside(p)) {
       
       if(UpperLeft.GetXDistance()>=6.0){ P1=P1 - Position(0.2,0.0);
       P2=P2 - Position(0.2,0.0);}
        UpperLeft = Position(6.0,10.0) +P1;
        LowerRight = Position(6.2,10.2)+P2;
        float UX=UpperLeft.GetXDistance();

        if(UX<6.0) 
                 {
                  UpperLeft= Position(6.0,10.0);
                  LowerRight=Position(6.2,10.2);
                 }
        
        Virtualkeyboard.RenderText(UpperLeft,LowerRight," ", White);

        name[count1-1]= '\0';
	count1--;
                     }


    if (ENTER.IsInside(p)) {
        Virtualkeyboard.RenderText(Position(2.5,6.5),(10.0,14.0),hello+name+Excl, Blue);
	
	Virtualkeyboard.SetTimerCallback(NameTimer);
        Virtualkeyboard.StartTimer(2000);
			   }

return 0;
}
