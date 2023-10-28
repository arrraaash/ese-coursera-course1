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
 * @brief implementing a few functions
 *
 * seven functions are implemented here to work on an unsigned char array, all
 * will get the pointer to the array and its size as an input and return the
 * needed value or print.
 *
 * @author Arash Amini
 * @date 28-10-2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

//Given an array of data and a length, sorts the array from largest to smallest
unsigned char *sort_array(unsigned char *a, int size){

}


//Given an array of data and a length, returns the median value
double find_median(unsigned char *a, int size){

}
//Given an array of data and a length, returns the mean
double find_mean(unsigned char *a, int size){

}
//Given an array of data and a length, returns the maximum
unsigned char find_minimum(unsigned char *a, int size){

}
//Given an array of data and a length, returns the minimum
unsigned char find_maximum(unsigned char *a, int size){

}

//A function that prints the statistics of an array including minimum, maximum, mean, and median
void print_statistics(unsigned char *a, int size){ 

}
//Given an array of data and a length, prints the array to the screen
void print_array( unsigned char *a, int size) {


}


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
