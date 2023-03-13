#include <stdio.h>


#define MAX 1000000

/* 
 * see: https://www.hackerrank.com/challenges/counting-valleys/problem?isFullScreen=false
*/ 

int countingValleys(int steps, char *path) 
{ 
	int valleys = 0, curr = 0;  
	for(int i = 0; i < steps; i++) 
	{ 
		if(path[i] == 'U') 
		{ 
			// going down 
			curr++; 
		} 
		else 
		{ 
			// going up 
			curr--; 
		} 
		// return to sealevel which means hiker has returned from a valley 
		if(curr == 0 && path[i] == 'U') valleys++; 
	} 
	return valleys; 
} 
