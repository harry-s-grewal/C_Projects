#include <iostream>
#include "header.h"
/******************************************************************************

    Pascal's triangle creater for n-rows
    
    By: Harry S Grewal
    01/01/2019

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, k, l = -1, triangle_value = 1, rows;
    
    //Takes user input
    printf("Enter number of rows- ");
    
    scanf("%d", &rows);
    
    //For loop for going through each row
    for(i = 1; i <= rows; i++)
    {
        //Adds spacing to center Pascal's triangle
        for(k = rows/2 - l; k >= 0; k--)
        {
                //Prints space
                printf(" ");
        }
        
        //For loop for printing each element of each row
        for(j = 1; j <= i; j++)
        {
            //This if statement sets the outside values to '1'
            if ( j == 0 || i == 0)
            
                triangle_value = 1;
                
            //This else statement calculates the values on the inside of the triangle
            else
                //This is the formula to calculate each value on the inside of the triangle
                triangle_value = triangle_value*( i - j + 1) / j;
            
            //Prints the values of Pascal's triangle
            printf("%4d", triangle_value);
            
        }
        
        //Goes onto a new row each time the for loop finishes
        printf("\n");
        
        //Increments value to allow correct spacing for triangle
        l++;
    }
    
    return 0;
}
