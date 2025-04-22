//Ask user to input numbers
//if user input-1 break it 
//sentinal control repetitions
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int number,sum = 0; //control variables
	float count = 0;
	printf("Enter number: "); //input number
	scanf("%d", &number); //scan it 
	
	while(number != -1)
	{
		sum = sum+number;
		count = count+1; //increment the count
		printf("Enter number: "); //input number
		scanf("%d", &number); //scan it 
		
	}
	printf("Sum is %d \n", sum);
	float average = sum/count;
	printf("Average is %.2f", average);
	return 0;
}
