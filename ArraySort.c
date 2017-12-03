#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main (){
    
    //Declare variables
    int i, temp, swapped;
    int howMany = 10; //How many arrays in variable
    int goals[howMany];
    
    for (i = 0; i < howMany; i++)
    {
        goals[i] = ( rand()%25 )+1; //
    }
    printf("Goals Scored by each of the 10 players: \n");
    
    for (i = 0; i < howMany; i++)
    {
        printf("%d\n", goals[i]);
    }
    //NOW TO SORT: WILL TAKE EVERY # AND CHECK THE # AFTER IT AND IF THE FIRST # IS BIGGER, IT WILL SWAP THEM
    while(1){
        
        swapped = 0;
        for (i=0; i<howMany-1; i++){ //the minus 1 is because the last # has nothing to be compared to
            if(goals[i]>goals[i+1]){ //if first # is greater than 2nd number
                int temp = goals[i]; //then call the first number a temp number
                goals[i] = goals[i+1]; // then go the next number
                goals[i+1] = temp; // check if the next number is equal to the temp # (first number) = do nothing if equal
                swapped = 1; //otherwise, swap them
            }
        }
        
        if (swapped ==0){
            break;
        }
        
    }
    
    printf("\nSorted List\n");
    for (i=0; i<howMany; i++){
        printf("%d\n", goals[i]);
    }
    
    
    return 0;
 }