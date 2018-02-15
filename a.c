/*
 * a.c
 *
 *  Created on: Jan 25, 2018
 *      Author: jmfcf
 */

#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
	printf("Input the value of radius : ");
	float radius=0.0,area=0.0;
	scanf("%f",&radius);
	while(radius<0){
		printf("radius cannot be negative value. Input again : ");
		scanf("%f",&radius);

	}

	area=pi*radius*radius;

	printf("The area of the circle is : %.5f",area );

	return 0;
}
