/*
 * sine.c
 *
 *  Created on: Apr 25, 2013
 *      Author: bfisher
 */

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main(){
	int angle_degree;
	double angle_radian, pi, value;

	/* Print header	 */
	printf("\n Compute a table of the sine function \n\n");

	pi = M_PI;
	printf("Value of PI = %f \n\n", pi);

	printf("Angle \t Sine \n");
	angle_degree = 0; // Initial angle value

	// scan over angle
	while(angle_degree <= 360){
		angle_radian = pi * (angle_degree/180.0);
		value = sin(angle_radian);
		printf("%3d \t %f \n", angle_degree, value);

		angle_degree = angle_degree + 10; // increment the loop index
	}
}
