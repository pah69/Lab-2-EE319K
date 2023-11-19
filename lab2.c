// ****************** Lab2.c ***************
// Program written by: put your names here
// Date Created: 1/18/2017 
// Last Modified: 12/31/2022 
#include "Lab2.h"
// Put your name and EID in the next two lines
char Name[] = "HO";
char EID[] = "20213706";

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
int32_t Distance(int32_t x1, int32_t y1, int32_t x2, int32_t y2){
    // square 
    int32_t squareDistance = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    //  Manhattan
    int32_t manhattanDistance = abs(x1 - x2) + abs(y1 - y2);
    //  ECE319K (max)
    int32_t ECE319Kdistance = (abs(x1 - x2) > abs(y1 - y2)) ? abs(x1 - x2) : abs(y1 - y2) ;
    
		return ECE319Kdistance;
}
int32_t OverLap(int32_t rect1[4], int32_t rect2[4]){
    // gioi han hinh chu nhat thu nhat
    int32_t left1 = rect1[0];
    int32_t right1 = rect1[0] + rect1[2];
    int32_t top1 = rect1[1];
    int32_t bottom1 = rect1[1] - rect1[3];
    
    // gioi han hinh chu nhat thu hai
    int32_t left2 = rect2[0];
    int32_t right2 = rect2[0] + rect2[2];
    int32_t top2 = rect2[1];
    int32_t bottom2 = rect2[1] - rect2[3];  
    // overlap
    if (left1 < right2 && right1 > left2 && top1 > bottom2 && bottom1 < top2) {
        return 1; // yes
    } else {
        return 0; // no
    }
}
// do not edit this 2-D array
const char Hello[4][8] ={
   "Hello  ",    // language 0
   "\xADHola! ", // language 1
   "Ol\xA0    ", // language 2
   "All\x83   "  // language 3
};
// Hello[0][0] is 'H'
// Hello[0][1] is 'e'
// Hello[0][2] is 'l'
// Hello[0][3] is 'l'
// Hello[0][4] is 'o'
// Hello[1][0] is 0xAD
// Hello[1][1] is 'H'
// Hello[1][2] is 'o'
// Hello[1][3] is 'l'
// Hello[1][4] is 'a'
// Hello[1][5] is '!'
void LCD_OutChar(char letter);
// Print 7 characters of the hello message
// Inputs: language 0 to 3
// Output: none
// You should call LCD_OuChar exactly 7 times
void SayHello(uint32_t language){
// Replace this following line with your solution
    // kiem tra
    const char *helloMessage = Hello[language];
    // su dung ham 
	for (int i = 0; i < 7; i++) {
        LCD_OutChar(helloMessage[i]);
    }
}
