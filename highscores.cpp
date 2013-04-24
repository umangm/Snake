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
#include<fstream>
using namespace std;

//storing the high scores

BitMap high(W5);
BitMap bccck(W5);

// Function to open W5
void W5Open() {
	W5.Open();
	assert(W5.GetStatus() == WindowOpen);

	high.Load("high.xpm");
        assert(high.GetStatus() == BitMapOkay);
        high.SetPosition(Position(0, 0));              
        high.Draw();

	bccck.Load("Back.xpm");
        assert(bccck.GetStatus() == BitMapOkay);
        bccck.SetPosition(Position(6.5, 13));      
        bccck.Draw();

	char detailp[1000];
        for(int i=0;i<1000;i++){ detailp[i]='\0';}

	ifstream fin("Scores.txt");
	
	string word;
        string name[100];

	
	int score;
        string scorechar[100];
	int scoreint[100];

	int Total_Number_of_People=0,m=0;

	while(fin>>word){
		//cout<<word<<" ";

		if(word[0] <'0' || word[0] >'9')
                            { name[m]=name[m]+" "+word; 
                             
                             }
		
	        else{ //cout<<endl<<word<<endl;
                           scorechar[Total_Number_of_People]=word;
			   Total_Number_of_People++;	m++;
                    }
		
			}

	//cout<<endl;
	for(int i=0;i<Total_Number_of_People;i++){
			//cout<<scorechar[i];
	                //cout<<endl;    
			//cout<<name[i]<<endl;   
						 }

        //cout<<endl;

  	for(int i=0;i<Total_Number_of_People;i++){
			scoreint[i] = atoi (scorechar[i].c_str());
			 printf ("%*d \n", 1, scoreint[i]);

	                  
			     }

	//Sorting of the two arrays as per the high scores
	int t,max,tempscore,pos;
	string tempname;
	for(int k=0;k<Total_Number_of_People;k++){
		max=scoreint[k]; pos=k;
			for(t=k+1;t<Total_Number_of_People;t++){
					if (scoreint[t]>max) {max=scoreint[t]; pos=t;}
					  }
                  	tempscore=scoreint[k]; scoreint[k]=scoreint[pos]; scoreint[pos]=tempscore;
			tempname=scorechar[k]; scorechar[k]=scorechar[pos]; scorechar[pos]=tempname;
			tempname=name[k]; name[k]=name[pos]; name[pos]=tempname;
			    }
        char space=' ';
	char par= ')';
        float x1=6,y1=0;
	string num[10];
	for(int top=0;top<9;top++) {
					//cout<<name[top]<<" "<<scoreint[top]<<" "<<scorechar[top]<<endl;
					num[top]= top+49;		  
					W5.RenderText(Position(x1,y1),Position(10,8),num[top]+par+space+name[top]+space+scorechar[top]+space, Red);
					y1=y1+1.5;
				    }
		//cout<<name[9]<<" "<<scoreint[9]<<" "<<scorechar[9]<<endl;
		num[9]= "10";		  
		W5.RenderText(Position(x1,13.5),Position(10,8),num[9]+par+space+name[9]+space+scorechar[9]+space, Red);
					
	fin.close();
	
	int W5MouseClick1(const Position &p5);	
	W5.SetMouseClickCallback(W5MouseClick1);
	}

// Function which detects mouse click in W5 and opens W1
int W5MouseClick1(const Position &p5) {
	if (bccck.IsInside(p5)) {
        W5.Close();
        W1Open();
	}
}
