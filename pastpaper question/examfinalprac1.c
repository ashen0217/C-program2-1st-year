#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define SIZE 7
int main(void)
{
	float rainfall[7];
	float total = 0,avg,max = 0,min = 0;
	int k = 1;
	int i;
	for(i = 1;i<=7;i++)
	{
		printf("Input rainfall of day %d: ", i);
		scanf("%f", &rainfall[i]);
	}//end the loop
	printf("\n\n");
	
	
	//display the input
	for(i = 1;i<=7;i++)
	{
		printf("rainfall of day %d is %.2f \n", i,rainfall[i]);
	}//end the loop
	
	for(i = 0;i<7;i++)
	{
		total = total+rainfall[i];
		avg = total/k;
		
		if(rainfall[i]>max)
		{
			max = rainfall[i];
		}
		if(rainfall[i]<=rainfall[0])
		{
			min = rainfall[i];
		}
		
		printf("Day 1 to %d\n",i+1);
	    
	    printf("Average rainfall : %.2f mm\n",avg);
		printf("Maximum rainfall : %.2f mm\n",max);
		printf("Minimum rainfall : %.2f mm\n",min);
	    k++;
	}
	
	return 0;
}
