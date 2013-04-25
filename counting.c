/*
 * counting.c
 *
 *  Created on: Apr 23, 2013
 *      Author: bfisher
 */

#include <stdio.h>

void main(){
	int i = 10000; // Initialize iterator variable

	do{
		printf("%d\n", 10000 - i);
	} while(i--);
	getchar();
}
