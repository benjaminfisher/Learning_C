/*
 * first_function.c
 *
 *  Created on: Apr 23, 2013
 *      Author: bfisher
 */

#include <stdio.h>

int mult(int a, int b){
	return a * b;
}

void main(){
	int x, y;

	printf("Enter two numbers NOW, puny human: \t");
	scanf("%d", &x);
	scanf("%d", &y);

	printf("The product of your frail human numbers is: %d\n", mult(x, y));

	getchar();
}
