#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
float circlearea();
float circleperi(float );
float arearec();
int main()
{
	float arearec,areacircle,circleperi,length,height;
	
	
	
	
	return 0;
}
float circlearea()
{
	float r;
	float pi = 22/7.0;
	printf("Enter the radious of the circle: ");
	scanf("%f", &r);
	float area = pi*r*r;
	return area; 
}
float circleperi(float r)
{
	float pi = 22/7.0;
	float circumference = 2*pi*r;
	return circumference;
}
float recarea(float lenght,float width)
{
	float length,height;
	float area = length*height;
	
	return area;
}
