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
 * @file stats.h 
 * @brief In this header file all the functions are defined that will be used in stats.c and in this project
 *
 *
 * @author Alejandro Sanchez
 * @date 05-09-2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* This function will print all the statistics of the array given*/
/* @param unsigned char *ptr which is a pointer to the first place in memory of the array*/
/* @return calculated statistics of given array*/
void print_statistics(unsigned char **ptr, unsigned int length);
/* This function will simply print the array */
/* @param unsigned char *ptr which is a pointer to the first place in memory of the array and length of array*/
/* @return all values inside array*/
void print_array(unsigned char **ptr, unsigned int length);
/* This function will find the median of the array*/
/* @param unsigned char *ptr which is a pointer to the first place in memory of the array and length of array*/
/* @return median of array*/
unsigned char find_median(unsigned char **ptr, unsigned int length);
/* This function will find the mean of the given array*/
/* @param unsigned char *ptr which is a pointer to the first place in memory of the array and length of array*/
/* @return mean of given array*/
unsigned char find_mean(unsigned char **ptr, unsigned int length);
/* This function will find the maximum of the given array*/
/* @param unsigned char *ptr which is a pointer to the first place in memory of the array and length of array*/
/* @return max of given array*/
unsigned char find_maximum(unsigned char **ptr, unsigned int length);
/* This function will find the minimum of the given array*/
/* @param unsigned char *ptr which is a pointer to the first place in memory of the array and length of array*/
/* @return min of given array*/
unsigned char find_minimum(unsigned char **ptr, unsigned int length);
/* This function will sort the given array */
/* @param unsigned char *ptr which is a pointer to the first place in memory of the array and length of array*/
/* return sorted Array*/ 
unsigned char* sort_array(unsigned char ptr[40]);

int cmpfunc(const void *a, const void *b);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
