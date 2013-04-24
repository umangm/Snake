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


/*
the logic behind maze creation is simple-the screen is divided into 160*160 squares
we deal with the coordinates of upperleft corner of squares.we use the concept of two-dimensional arrays.
the first index deals with x coordinate of upper left corner of square in millimeters.
the second index deals with y coordinate of upper left corner of square in millimeters.
if at a particular point the maze exists we assign the associated array address a value equal to one.
this will make the procees of checking whether maze exists at a point extremely easy and fast
*/


// function to create maze 1
int createmaze1(){
 
  for(first_index=0;first_index<160;first_index=first_index+4)
    {
      for(second_index=0;second_index<160;second_index+=4)
       {
      maze1[first_index][second_index]=0;
       }
    }

return 0;
		}

// function to create maze 2
int createmaze2() {
 
  for(first_index=0;first_index<160;first_index=first_index+4)
   {
    for(second_index=0;second_index<160;second_index+=4)
     {
	 maze2[first_index][second_index]=0;
   if(first_index==12||first_index==144)
   {
    if(second_index<=60 && second_index >=12)
     {
       maze2[first_index][second_index]=1;
     }
    if(second_index<=144 && second_index >=96)
     {
       maze2[first_index][second_index]=1;
     }
   }
  if(second_index==12||second_index==144)
   {
    if(first_index<=60 && first_index>=12)
     {
       maze2[first_index][second_index]=1;
     }
    if(first_index<=144 && first_index>=96)
     {
       maze2[first_index][second_index]=1;
     }
   }
  }
 }

return 0;
		  }


// function to create maze 3
int createmaze3() {

 for(first_index=0;first_index<160;first_index=first_index+4)
    {
      for(second_index=0;second_index<160;second_index+=4)
     {
      maze3[first_index][second_index]=0;
       if(first_index==16||first_index==140)
   {
    if(second_index>=28 && second_index<=128)
     {
       maze3[first_index][second_index]=1;
     }
   }
  if(second_index==16||second_index==140)
   {
    if(first_index>=28 && first_index<=128)
     {
       maze3[first_index][second_index]=1;
     }
   }
     }
    }

return 0;
		  }


// function to create maze 4
int createmaze4() {
 
  for(first_index=0;first_index<160;first_index=first_index+4)
   {
    for(second_index=0;second_index<160;second_index+=4)
     {
       maze4[first_index][second_index]=0;
       if(second_index==16||second_index==24|second_index==132||second_index==140)
       {
         if(first_index>=16 && first_index<=140)
         {
           maze4[first_index][second_index]=1;
         }
       }
     }
   }

return 0;
		}


// function to create maze 5
int createmaze5()  {

 for(first_index=0;first_index<160;first_index=first_index+4)
  {
   for(second_index=0;second_index<160;second_index+=4)
   {
         maze5[first_index][second_index]=0;

         if(first_index==76)
         {
             if(second_index<=144 && second_index>=12)
             {
            maze5[first_index][second_index]=1;
          }
        }

    
        if(second_index==76)
        {
          if(first_index<=144&&first_index>=12)
          {
            maze5[first_index][second_index]=1;
          }
        }


        if(first_index==144)
        {
          if(second_index<=144&&second_index>=80)
          {
            maze5[first_index][second_index]=1;
          }
        }


        if(second_index==12)
        {
          if(first_index<=144&&first_index>=80)
          {
            maze5[first_index][second_index]=1;
          }
        }


        if(first_index==12)
        {
          if(second_index<=76&&second_index>=12)
          {
            maze5[first_index][second_index]=1;
          }
        }
 

        if(second_index==144)
        {
          if(first_index<=76&&first_index>=12)
          {
            maze5[first_index][second_index]=1;
          }
        }
   }  //end of second for loop
 }  //end of first for loop

return 0;
		}


// function to create maze 6
int createmaze6() {

for(first_index=0;first_index<160;first_index=first_index+4)
   {
    for(second_index=0;second_index<160;second_index+=4)
    {
     maze6[first_index][second_index]=0;
     

         if(second_index==64||second_index==88)
         {
            if(first_index<=64||first_index>=88)
            {
              maze6[first_index][second_index]=1;
                   }
         }

        if(first_index==64)
        {
              if(second_index<=64||second_index>=88)
              {
                maze6[first_index][second_index]=1;
              }
        }
       
        if(first_index==88)
        {
             if(second_index<=66||second_index>=108)
             {
                maze6[first_index][second_index]=1;
             }
        }
     }  //end of second for loop
   }  //end of first for loop
  
  return 0;
		}

// function to create maze 7
int createmaze7() {
for(first_index=0;first_index<160;first_index+=4)
   {
     	for(second_index=0;second_index<160;second_index+=4)
      	 {
         	maze7[first_index][second_index]=0;

		if(second_index==24||second_index==132)
		 {
	  		if(first_index>=24&&first_index<=132)
	  		 {
	    			maze7[first_index][second_index]=1;
	  		 }

			 }


		if(first_index==24||first_index==132)
		 {
	  		if(second_index>=24&&second_index<=64)
	  		 {
	    			maze7[first_index][second_index]=1;
	  		 }

	  		if(second_index>=92&&second_index<=132)
	 	 	 {
	    		maze7[first_index][second_index]=1;
		 	 }
		 }


		if(second_index==48||second_index==108)
		 {
	  		if(first_index>=48&&first_index<=108)
	 		  {
	    			maze7[first_index][second_index]=1;
	 		  }
		 }


		if(first_index==48||first_index==108)
		 {
	 		 if(second_index>=48&&second_index<=64)
	  		  {
	  			 maze7[first_index][second_index]=1;
	 		 }
	  
	 		 if(second_index>=92&&second_index<=108)
	 		 {
	    			maze7[first_index][second_index]=1;
	 		 }
		 }


		if(second_index==80)
		 {
	 		if(first_index>=48&&first_index<=108)
	 		  {
			    	maze7[first_index][second_index]=1;
	  		  }
		 }
    
      		}  //end of second for loop
    	}  //end of first for loop
return 0;
}  //end of function

// function to create maze 8
int createmaze8() {
	for(first_index=0;first_index<160;first_index=first_index+4)
	 {
		for(second_index=0;second_index<160;second_index+=4)
    		 {
 			maze8[first_index][second_index]=0;


			if(second_index==52||second_index==104)
       			 {
        			if(first_index>=56&&first_index<=100)
        			 {
           				maze8[first_index][second_index]=1;
        			 }
      			 }

   if(first_index==20||first_index==136)
   {
    if(second_index>=60&&second_index<=96 )
     {
       maze8[first_index][second_index]=1;
     }
   }
  if(second_index==20||second_index==136)
   {
    if(first_index>=60&&first_index<=96)
     {
       maze8[first_index][second_index]=1;
     }
   }


   if(first_index==32||first_index==124)
   {
    if((second_index>=32&&second_index<=52) ||  (second_index>=104&&second_index<=124) )
     {
       maze8[first_index][second_index]=1;
     }
   }
  if(second_index==32||second_index==124)
   {
    if(first_index>=32&&first_index<=52 || first_index>=104&&first_index<=124)
     {
       maze8[first_index][second_index]=1;
     }
   }


     }//end of second for loop
   }//end of first for loop
return 0;
}

// function to create maze 9
int createmaze9() {
for(first_index=0;first_index<160;first_index=first_index+4)
   {
    for(second_index=0;second_index<160;second_index+=4)
    {
     maze9[first_index][second_index]=0;
     

         if(second_index==16||second_index==136)
         {
            if(first_index>=16 && first_index<=68)
            {
              maze9[first_index][second_index]=1;
                   }
         }

         if(second_index==16||second_index==76||second_index==136)
         {
            if(first_index>=96&&first_index<=136)
            {
              maze9[first_index][second_index]=1;
                   }
         }

            if(first_index==16)
            {
                 if(second_index>=16 &&  second_index<=136)
			{
                     maze9[first_index][second_index]=1;
                   }
         	}

            if(first_index==96)
            {
                 if(second_index>=16 &&  second_index<=76 )
			{
                     maze9[first_index][second_index]=1;
                   }
         	}

            if(first_index==136)
            {
                 if(second_index>=76 &&  second_index<=136)
			{
                     maze9[first_index][second_index]=1;
                   }
           }	
}     	
}
  
return 0;
}

// function to create maze 10
int createmaze10() {
for(first_index=0;first_index<160;first_index=first_index+4)
   {
    for(second_index=0;second_index<160;second_index+=4)
    {
     maze10[first_index][second_index]=0;
     

         if(second_index==16||second_index==80||second_index==140)
         {
            if(first_index>=16 && first_index<=76)
            {
              maze10[first_index][second_index]=1;
                   }
         }

         if(second_index==16||second_index==80||second_index==140)
         {
            if(first_index>=96&&first_index<=144)
            {
              maze10[first_index][second_index]=1;
                   }
         }

            if(first_index==76)
            {
                 if(second_index>=16 &&  second_index<=140)
			{
                     maze10[first_index][second_index]=1;
                   }
         	}



            if(first_index==144)
            {
                 if(second_index>=16 &&  second_index<=80 )
			{
                     maze10[first_index][second_index]=1;
                   }
}


            if(first_index==96)
            {
                 if(second_index>=80 &&  second_index<=140)
			{
                     maze10[first_index][second_index]=1;
                   }
         	}
  }
}
  return 0;
		}
