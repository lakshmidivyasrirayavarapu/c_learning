#include<stdio.h>
int main()
{
	//conversion of temperature from fahrenheit to celcius
	double fahrenheit,celcius;
	printf("enter the value of fahrenheit");
	scanf("%lf",&fahrenheit);
	printf("enter the value of celcius");
	scanf("lf",&celcius);
//calculate the farhrenheit to celcius
celcius=(5/9)*(fahrenheit-32);
//display the conversion of the temperature
printf("temperature in celcius is %lf",celcius);
return 0;
}
