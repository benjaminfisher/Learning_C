/*
 * age_check.c
 *
 *  Created on: Apr 23, 2013
 *      Author: bfisher
 */

#include <stdio.h>

int main(){
	int age; // Initialize variable

	printf("Enter your miserable age, puny human: \t");
	scanf("%d", &age);

	if(age < 100){
		printf("You are barely hatched! Where is your female paternal unit? \n");
	} else if (age == 100){
		printf("You are ancient, frail earthling! Do you need some prunes? \n");
	} else {
		printf("How are you still alive? Foggies like you don't use computers. \n");
	};

	getchar(); //Wait for key press

	return 0;
}
