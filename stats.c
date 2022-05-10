/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief The stats.c file contains the main() function and will
 * run some functions to sort the array of numbers and do some calculations
 *
 *
 *
 * @author <Alejandro Sanchez>
 * @date <05-09-2022 >
 *
 */



#include <stdio.h>
#include "stats.h"
#include <stdlib.h>
/* Size of the Data Set */
#define SIZE (40)
unsigned char find_minimum(unsigned char **ptr, unsigned int num){

	return **ptr;
}
unsigned char find_maximum(unsigned char **ptr, unsigned int num){
	return **ptr;
}
unsigned char find_median(unsigned char **ptr, unsigned int length){
	return **ptr;
}
unsigned char find_mean(unsigned char **ptr, unsigned int length){
	return **ptr;
}
void print_statistics(unsigned char **ptr, unsigned int num){
	printf("Minimum = %d, Maximum = %d, mean = %d, Median = %d", find_minimum(ptr, num),find_maximum(ptr, num), find_mean(ptr, num), find_median(ptr, num));
}
//int cmpfunc (const void * a, const void *b){
//	return (*(unsigned int*)a - *(unsigned int*)b);
//}
unsigned char* sort_array(unsigned char arr[40]){
	for(int i=0; i<40; i++)
	{
		for(int j=i; j<40;j++){
			if(arr[i] > arr[j]){
				char arrtemp;
				arrtemp = arr[i];
				arr[i]= arr[j];
				arr[j]= arrtemp;
			}
		}
	}
	return &(arr[0]);
}
void print_array(unsigned char **ptr, unsigned int length){
		for(int i = 0;i < length;i++){
			printf("%d ",*(*ptr+i));
		}
}
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  unsigned char *ptr = sort_array(&(test[0]));
  print_array(&ptr, 40);
  
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
