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

BitMap mushroom(snake);
BitMap berry(snake);
BitMap frog(snake);
BitMap frog1(snake);

// Food Function
void generateData(float food[][2]) {
	food[0][0] =   float(int(rand()*10) % 160) /10;
	food[0][1] =   float(int(rand()*10) % 160) /10;
		if (food[0][0] < 0) {food[0][0]= -food[0][0];}
		if (food[0][1] < 0) {food[0][1]= -food[0][1];}

	int k= int((food[0][0]+0.05)*10) % 4;
	food[0][0] = float(10*food[0][0] - k) / 10;
	int l=int((food[0][1]+0.05)*10) % 4;
	food[0][1] = float(10*food[0][1] - l) / 10;
	
				   }

//generating the bonus objects
float generatebonus(float bonus1[1][2],int e1[2])
 {
//generate the position
	bonus1[0][0] =   float(int(rand()*10) % 160) /10;
    	bonus1[0][1] =   float(int(rand()*10) % 160) /10;
		if (bonus1[0][0] < 0) {bonus1[0][0]= -bonus1[0][0];}
		if (bonus1[0][1] < 0) {bonus1[0][1]= -bonus1[0][1];}

	int c= int((bonus1[0][0]+0.05)*10) % 4;
	bonus1[0][0] = float(10*bonus1[0][0] - c) / 10;
	int d=int((bonus1[0][1]+0.05)*10) % 4;
	bonus1[0][1] = float(10*bonus1[0][1] - d) / 10;
	
	return 1;
}


// Function to display the food in the game window
void displayData(SimpleWindow &z, float g[][2]) {
  
	x = g[0][0];
	y = g[0][1];
    	// we use mushrooms for even levels and berries for the odd levels
	if (level%2==0)  {
		mushroom.Load("mushroom.xpm");
		assert(mushroom.GetStatus() == BitMapOkay);
		mushroom.SetPosition(Position(x, y));              
		mushroom.Draw();
			}
	else {
		berry.Load("berry.xpm");
		assert(berry.GetStatus() == BitMapOkay);
		berry.SetPosition(Position(x, y));              
		berry.Draw();
	     }
						 }

float displaybonus(SimpleWindow &z, float bonus1[1][2],int e1[2]) 
    {  if(bonusdrawn[0]==0 && score1>0)
        {
    float w = bonus1[0][0]; //temporary variables
    float u = bonus1[0][1];
	
	if (score1%50==0 && e1[1]==21 && score2-score1==0) {
		if (score1%150==0 && advnture==1) { score2 +=50; }
		else 	{			
			frog.Load("frog.xpm");
        		assert(frog.GetStatus() == BitMapOkay);
        		frog.SetPosition(Position(w,u));
			frog.Draw();
		e1[1]=20; //20 value denotes frog is drawn,21 value denotes frog is not drawn
		bonusdrawn[0]=1;
			}
		}
	  }	
	return 1;
   }

// Modulus function
float mod(float r){
	if(r<0.1){r+=16.0;}
	if(r>15.7){r-=16.0;}
		
	return r;
		  }

// Foodcheck Function - so that the food is not displayed on the walls or on the body of the snake
void foodcheck(){
	// for the snake's body	
	for (int h=0; h<n; h++){
		if(snakepos[h][0]<data[0][0]+0.1 && snakepos[h][0]>data[0][0]-0.1 && snakepos[h][1]<data[0][1]+0.1 && snakepos[h][1]>data[0][1]-0.1)
			{ generateData(data);
			  foodcheck();
			}
			       }
	
	// for the walls
	int k= 10*data[0][0];
	int l= 10*data[0][1];	
	// for different levels different mazes are created:-
	if(level==1 || level==11) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze1[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
		     }
	
	else if(level==2 || level==12) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze2[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==3 || level==13) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze3[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }
		
	else if(level==4 || level==14) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze4[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==5 || level==15) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze5[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==6 || level==16) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze6[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==7 || level==17) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze7[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==8 || level==18) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze8[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==9 || level==19) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze9[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==10 || level==20) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze10[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==21) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze_user[k+f][l+g]==1) {
					generateData(data);
					foodcheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

		}

// Bonuscheck Function - so that the bonus is not displayed on the walls or on the body of the snake
void bonuscheck(){
	// for the snake's body	
	for (int h=0; h<n; h++){
		if(snakepos[h][0]<data1[0][0]+0.1 && snakepos[h][0]>data1[0][0]-0.1 && snakepos[h][1]<data1[0][1]+0.1 && snakepos[h][1]>data1[0][1]-0.1)
			{
			generatebonus(bonus1,e1);
			  bonuscheck();
			}
			       }
	
	// for the walls
	int kk= 10*data1[0][0];
	int ll= 10*data1[0][1];	

	if(level==1 || level==11) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze1[kk+f][ll+g]==1) {					
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
		     }
	
	else if(level==2 || level==12) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze2[kk+f][ll+g]==1) {
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==3 || level==13) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze3[kk+f][ll+g]==1) {					
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }
		
	else if(level==4 || level==14) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze4[kk+f][ll+g]==1) {
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==5 || level==15) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze5[kk+f][ll+g]==1) {					
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==6 || level==16) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze6[kk+f][ll+g]==1) {					
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==7 || level==17) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze7[kk+f][ll+g]==1) {					
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==8 || level==18) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze8[kk+f][ll+g]==1) {					
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==9 || level==19) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze9[kk+f][ll+g]==1) {					
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==10 || level==20) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze10[kk+f][ll+g]==1) {
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }

	else if(level==21) {
		for(int f=-1;f<2;f++)
			{ for(int g=-1;g<2;g++){
				if(maze_user[kk+f][ll+g]==1) {
					generatebonus(bonus1,e1);
					bonuscheck();
							}
				else if (f==1 && g==1) { break; }
						}
			}
			  }
	}
