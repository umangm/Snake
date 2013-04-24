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
#include "unistd.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

BitMap Up(snake);
BitMap Down(snake);
BitMap Left(snake);
BitMap Right(snake);
BitMap images(snake);
BitMap forward(snake);

void reverse(char s[])
 {
     int i, j;
     char c;
 
     for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }

void itoa(int n, char s[])
 {
     int i, sign;
 
     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
 }


// Function to delete the tail
void taildelete(SimpleWindow &snake,int r, float snakepos[][2])       //to delete cells between tail and cell r
		{  snake.RenderRectangle
			(Position(snakepos[n-1][0],snakepos[n-1][1]),
			 Position(snakepos[n-1][0]+0.4,snakepos[n-1][1]+0.4),White,false
			);

		 for(i=n-1; i>0;i--)
			{ snakepos[i][1]=snakepos[i-1][1];
			  snakepos[i][0]=snakepos[i-1][0];
			 }
		}

// Function to move the snake to the right
void headprogressright(SimpleWindow &snake,int r, float snakepos[][2])  {
	snakepos[0][0]+=0.4;
	snakepos[0][0]=mod(snakepos[0][0]);

	Snake.Load("snake.xpm");
	assert(Snake.GetStatus() == BitMapOkay);
	Snake.SetPosition(Position(snakepos[0][0],snakepos[0][1]));
	Snake.Draw();
									}

// Function to move the snake to the left
void headprogressleft(SimpleWindow &snake,int r, float snakepos[][2])
	{snakepos[0][0]-=0.4; 
	snakepos[0][0]=mod(snakepos[0][0]);

	Snake.Load("snake.xpm");
	assert(Snake.GetStatus() == BitMapOkay);
	Snake.SetPosition(Position(snakepos[0][0],snakepos[0][1]));
	Snake.Draw();
		
		}

// Function to move the snake upwards
void headprogressup(SimpleWindow &snake,int r, float snakepos[][2])
	{snakepos[0][1]-=0.4; 
	snakepos[0][1]=mod(snakepos[0][1]);
		
	Snake.Load("snake.xpm");
	assert(Snake.GetStatus() == BitMapOkay);
	Snake.SetPosition(Position(snakepos[0][0],snakepos[0][1]));
	Snake.Draw();
		

		}

// Function to move the snake down
void headprogressdown(SimpleWindow &snake,int r, float snakepos[][2])
	{snakepos[0][1]+=0.4; 
	snakepos[0][1]=mod(snakepos[0][1]);

	Snake.Load("snake.xpm");
	assert(Snake.GetStatus() == BitMapOkay);
	Snake.SetPosition(Position(snakepos[0][0],snakepos[0][1]));
	Snake.Draw();

		}

// Timer Function
int snakeTimerEvent(){	
	if(level==11 && score1==150){
	void nextlevel1();
	nextlevel1();
		}

	if(level==12 && score1==300){
		void nextlevel2();
		nextlevel2();
			}

	if(level==13 && score1==450){
		void nextlevel3();
		nextlevel3();
			}

	if(level==14 && score1==600){
		void nextlevel4();
		nextlevel4();
			}

	if(level==15 && score1==750){
		void nextlevel5();
		nextlevel5();
			}

	if(level==16 && score1==900){
		void nextlevel6();
		nextlevel6();
			}

	if(level==17 && score1==1050){
		void nextlevel7();
		nextlevel7();
			}

	if(level==18 && score1==1200){
		void nextlevel8();
		nextlevel8();
			}

	if(level==19 && score1==1350){
		void nextlevel9();
		nextlevel9();
			}		

		score= score1 + bonusscore;
		itoa (score, sc);
		
		int timer= (40-timerindicator)*5;
		itoa (timer, tim);
		if (tim[2]=='\0'){
			tim[2]=tim[1]; tim[1]=tim[0]; tim[0]='0';
				}
                
		snake.RenderText(Position(36.5,4.0),(37.0,6.0),sc, Blue);

		if(bonusdrawn[0]==0 && score1>0 && score1%50==0 && e1[1]==21 && score2-score1==0) { 
		generatebonus(bonus1,e1);
		bonuscheck();
		displaybonus(snake, bonus1,e1); } //drawing the bonus
			
		//checking whether the snake eats the bonus
		if(e1[0]==20||e1[1]==20)
			{ if(snakepos[0][0]<bonus1[0][0]+0.2 && snakepos[0][0]>bonus1[0][0]-0.2 && snakepos[0][1]<bonus1[0][1]+0.2 && 
		   		snakepos[0][1]>bonus1[0][1]-0.2)
			  {
				
			if(e1[1]=20){
				bonusscore+= (40-timerindicator)*5;  //increase the score by 30 for each frog
				bonusdrawn[0]=0;
				e1[1]=21;
				timerindicator=0;
				score2 +=50;
			        }
			  }		
			}		
		
			if (timerindicator!=0) {
			frog1.Load("frog.xpm");
        		assert(frog1.GetStatus() == BitMapOkay);
        		frog1.SetPosition(Position(19.5,2.8));
			frog1.Draw();
			snake.RenderText(Position(34.5,6.0),(35.0,8.0),tim, Blue);
					}

		if (timerindicator==0)  {
			snake.RenderRectangle (Position(19.5,2.7),Position(22.5,4.0),White,false);
					}

		if(snakepos[0][0]<data[0][0]+0.1 && snakepos[0][0]>data[0][0]-0.1 && snakepos[0][1]<data[0][1]+0.1 && snakepos[0][1]>data[0][1]-0.1)
			{ for(i=n; i>0;i--)
				{ snakepos[i][1]=snakepos[i-1][1];
			  	snakepos[i][0]=snakepos[i-1][0];
			 	}
			n++;
			score1+= 10;
			generateData(data);
			foodcheck();
			displayData(snake, data);			
			}

			
		else	{taildelete(snake,n,snakepos);}
			
			int click(const Position &p);
			snake.SetMouseClickCallback(click);
			if(q=='u') {headprogressup(snake,n,snakepos);}
			if(q=='d') {headprogressdown(snake,n,snakepos);}
			if(q=='l') {headprogressleft(snake,n,snakepos);}
			if(q=='r') {headprogressright(snake,n,snakepos);}
			for(t=1;t<n;t++){
				if(snakepos[0][0]==snakepos[t][0] && snakepos[0][1]==snakepos[t][1])
						{ cout<< "Your score is "<< score<< endl;
						  GameoverOpen();
						}
					}

		if(bonusdrawn[0]==1)     //bonus is removed after some time
				{ timerindicator++;
				}
			if(timerindicator>40)
			 { 
			   score2 +=50;
			   timerindicator=0;
			   if(e1[1]==20)
				{frog.Erase();
				 e1[1]=21;
				}
			bonusdrawn[0]=0;
			}

			int p=snakepos[0][0]*10,q=snakepos[0][1]*10;
			//following few lines check whether the snake head violates the boundaries or not
			switch(level){
				case 1: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze1[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 2: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze2[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 3: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze3[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 4: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze4[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 5: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze5[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 6: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze6[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 7: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze7[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 8: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze8[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 9: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze9[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 10: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze10[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 11: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze1[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 12: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze2[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 13: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze3[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 14: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze4[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 15: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze5[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;
				case 16: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze6[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 17: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze7[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 18: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze8[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 19: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze9[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 20: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze10[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				case 21: for(int f=-1;f<2;f++)
					{ for(int g=-1;g<2;g++)
					   { if(maze_user[p+f][q+g]==1)
					       {cout<< "Your score is "<< score<< endl;
				                 GameoverOpen();
						 break;
					        } 
					     }
					  }  
					     break;

				default : break;


				     }
			

								
                        return 1;
                        }


// Mouse clicking function to turn the snake
int click(const Position &p){
	int w=289;	

	if (images.IsInside(p) && state==2) {
        snake.StopTimer();
	state=1;
	}


	if (forward.IsInside(p) && state==1) {
	snake.StartTimer(100);
	state=2;

	}
 
	else { if( ((p.GetXDistance()>snakepos[0][0]+0.4 && p.GetXDistance()<16.0 && p.GetYDistance()<16.0) || Right.IsInside(p) ) && w==289){
			if(q=='u' || q=='d'){
				
				q='r';
				w=1;
				}
		}	   
	if( ((p.GetXDistance()<snakepos[0][0] && p.GetXDistance()<16.0 && p.GetYDistance()<16.0) || Left.IsInside(p) ) && w==289){
			if(q=='u' || q=='d'){
				
				q='l';
				w=2;
				}
		}
	if( ((p.GetYDistance()<snakepos[0][1]  && p.GetXDistance()<16.0 && p.GetYDistance()<16.0) || Up.IsInside(p) ) && w==289){
			if(q=='l' || q=='r'){
				
				q='u';
				w=3;
				}
		}			
	if( ((p.GetYDistance()>snakepos[0][1]+0.4 && p.GetXDistance()<16.0 && p.GetYDistance()<16.0) || Down.IsInside(p) ) && w==289 ){
			if(q=='l' || q=='r'){
				
				q='d';
				w=4;
				}
		}
	    
	    }
	return 3;
	}

