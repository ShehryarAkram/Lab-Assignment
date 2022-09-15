#include <stdio.h>
int main()  
{  
    int a1, a2, a3, sum;  
 
    printf("Input three angles of triangle : ");  
    scanf("%d %d %d", &a1, &a2, &a3);  
    sum = a1 + a2 + a3;
    if(sum == 180 || sum > 180)   
    {  
        printf("The triangle is valid.\n");  
    }  
    else  
    {  
        printf("The triangle is not valid.\n");  
    }
	return 0;  
 } 

