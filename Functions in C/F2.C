#include<stdio.h>
#include<stdlib.h>
//first we have to define the function before it call by main function
float circle();
float trangle();
float rectangle();
float sub();
float circle();
int sum(int a,int b);
int main()
{
	printf("Area of the circle is  = %.2f\n", circle());
	printf("Area of the trangle is = %.2f\n", trangle());
	printf("Area of the rectangle  is =%.2f", rectangle());
	printf("Subtraction of number 1 - number 2 = %.2f",sub());
	printf("Hello world\n");
	printf("Sum is %d", sum(10,20));
	printf("Area of the circle is = %.2f", circle()); //create the function to find the area and circumference of the circle
	/*Hello
	this is a multiple 
	line comment*/
	//this is a single line comment
	//exercise 1
	
	
	return 0;
}
float circle()
{
	float  r;
	float  pi = (22/7.0);
	printf("Enter the radious: ", r);
	scanf("%f", &r);
	float  area = 2*pi*r;
	return area;
	
}
float trangle()
{
	//crate the variable length and breath and ask user to input the variable to it
	float length,breath;
	printf("Enter the length: ");
	scanf("%f", &length);
	printf("Enter the breath: ");
	scanf("%f", &breath);
	float area = (length*breath)/2;
	return area;
}
float rectangle()
{
	//create variable l1 as lenth and b1 as breath
	float l1,b1;
	printf("Enter the length: ");
	scanf("%f", &l1); //ask user to enter the value to l1 (length)
	printf("Enter the breath: " );
	scanf("%f", &b1); //ask user to enter the value to b2 (breath)
	float area = l1*b1; 
	return area; 
}
float sub() //subtraction
{
	float no1,no2; //create the variable
	printf("Enter the number 1: ");
	scanf("%f", &no1); //ask user to input the number 1 value
	
	printf("Enter the number 2: ");
	scanf("%f", &no2); //ask user to input number 2 value
	
	float  answer = no1-no2; //calculate  the answer
	return answer;
}
int sum(int a,int b)
{
	int sum = a+b;
	return sum;
}


