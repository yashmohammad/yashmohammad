/*Documentation
	Author Name : MD Fayaaz Hussain
	Date :28-04-2021
	Description : WAP to check whether a given number is odd or even and its signedness  
	Input : 1. 4
		2. -4
		3. -5
		4. 5
		5. 0
		6. 1048666
	
	output : 1. 4 is a +ve Even number 
		 2. -4 is a -ve Even number
		 3. -5 is a -ve odd number
		 4. 5 is a +ve odd number
		 5. 0 is Even nor Odd number
		 6. 1048577 out of Range!!
		    Please Enter a number which is below of 2^20(i.e.. 1048576)
		    Usage:Enter a Number : 6
Documentation */

#include<stdio.h>												//header file
int main()													//main function .programs starts from here!!
{
    int num;													//Declaring integer variable and char variables
    char sign , rep;
    do														// do while loop starts from here
    {
	printf("Enter the Number:");										//for users input
	scanf("%d", &num);											//storing users input into the variable num
	if (num == 0)												//condition to check num is 0 or not
	{
	    printf("%d is Even nor Odd number", num);
	}
	else if (num > 1048576)											//condition for final limit
	    {
		printf("\t\t %d out of Range!!\n", num);
		printf("Usage : \n \t\t Please.. Enter a number which is below of 2^20(i.e.. 1048576)\n");
		printf("\t\t Enter a Number : 6\n");
	    }
	    else if(num % 2 == 0)										//condition to check for even or not
		{
		    if(num < 0)											//condition checks
		    
			printf("%d is a -ve Even number\n", num);
		    
		    else
		    
			printf("%d is a +ve Even number\n", num);
		    
		}
		else
		{
		    if(num < 0)											//condition checks
		    
			printf("%d is a -ve odd number\n", num);
		    
		    else
		    
			printf("%d is a +ve odd number\n", num);
		    
		}
	    
	printf("Do you want to continue (y/Y)?");								//for users response
	getchar();
	scanf("%c", &rep);											//storing in rep character
    } while( rep == 'y' || rep == 'Y');										//condition for rep
    return 0;													//return the program success
}
