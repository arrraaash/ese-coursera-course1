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
 * @brief declaration of functions
 *
 * declaring functions which are working on an input unsigned char array
 *
 * @author <Arash Amini>
 * @date 25-10-2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief sort the array of unsiged char
 *
 * This function takes an unsigned char array and the size if that array as an 
 * input and returns the sorted version of that array from largest element to
 * smallest. 
 *
 * @param unsignedchar The array that will be sorted
 * @param int size of the input array
 *
 * @return The pointer to the sorted array
 */
unsigned char * sort_array( unsigned char *a, int size);

/**
 * @brief find median of an array
 *
 * This function takes an unsigned char array and its size first sort it by useing the sort function, 
 * then take the middle value if the array size was odd, in case if even, it will give the mean of two
 * middle values. 
 *
 * @param unsignedchar The array that will be sorted
 * @param int size of the input array
 *
 *
 * @return an double value
 */
double find_median(unsigned char *a, int size);

/**
 * @brief compute the mean of and array of unsigned char values
 *
 * This function takes an unsigned char array and the size add all elements together and devide them
 * by the size. 
 *
 * @param unsignedchar The array that will be sorted
 * @param int size of the input array
 *
 * @return returns a double value as mean
 */
double find_mean(unsigned char *a, int size);

/**
 * @brief compute the minimum
 *
 * This function takes an unsigned char array and the size, first it will sort in by useing
 * sort function, then take the last element due to type of sort which is from larg to small. 
 *
 * @param unsignedchar The array that will be sorted
 * @param int size of the input array
 *
 * @return returns an minimum value of array as unsigned char value
 */
unsigned char find_minimum(unsigned char *a, int size);

/**
 * @brief compute the maximum
 *
 * This function takes an unsigned char array and the size, first it will sort in by useing
 * sort function, then take the first element due to type of sort which is from larg to small. 
 *
 * @param unsigned char The array that will be sorted
 * @param int size of the input array
 *
 * @return returns an maximum value of array as unsigned char value
 */
unsigned char find_maximum(unsigned char *a, int size);

/**
 * @brief print the statistical features of an array
 *
 * This function takes an unsigned char array and the size, compute minimum, maximum, mean,
 * and median of that array and print all this values.
 *
 * @param unsigned char The array that will be sorted
 * @param int size of the input array
 *
 *
 * @return nothing
 */
void print_statistics(unsigned char *a, int size);

/**
 * @brief print the inout array
 *
 * This function takes an unsigned char array and the size and print it on the screen.
 *
 * @param unsigned char The array that will be sorted
 * @param int size of the input array
 *
 * @return nothing
 */
void print_array( unsigned char *a, int size);




#endif /* __STATS_H__ */
