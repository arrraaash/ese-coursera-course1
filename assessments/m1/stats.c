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
 * @author <Arash Amini>
 * @date 25-10-2023
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"
#include <math.h>

/* Size of the Data Set */
#define SIZE (40)

//Given an array of data and a length, sorts the array from largest to smallest
unsigned char *sort_array(unsigned char *a, int size){
	unsigned char* aux_array = (unsigned char*)malloc(size * sizeof(unsigned char));
    int temp, i, j;
    for(i=0; i<size;i++){
    	aux_array[i]=*(a+i);
    }
    for(j=0; j<size ; j++){
        for(i=0; i+1 < size ; i++){
            	if (aux_array[i] < aux_array[i+1]){
                	temp= aux_array[i];
                	aux_array[i] = aux_array[i+1];
                	aux_array[i+1] = temp;
            	}
    	}
	}
    return aux_array;
}


//Given an array of data and a length, returns the median value
double find_median(unsigned char *a, int size){
	unsigned char * arr = sort_array(a,size);
    double median;
    int i;
    i = round(size/2);
    if (size%2==0){
    	median = arr[i]+arr[i-1];
    	median /=2; 
    }
    else{
        	median = arr[i];
    }
    free(arr);
    return median;
}
//Given an array of data and a length, returns the mean
double find_mean(unsigned char *a, int size){
	unsigned int sum = 0;
    for (int i = 0; i < size; i++) {
    	sum += a[i];
    }
    double mean = sum/size;
    return mean;

}
//Given an array of data and a length, returns the maximum
unsigned char find_minimum(unsigned char *a, int size){
	unsigned char* arr = sort_array(a, size);
    unsigned char max = arr[size - 1];
    free(arr);
    return max;
}
//Given an array of data and a length, returns the minimum
unsigned char find_maximum(unsigned char *a, int size){
	unsigned char * arr = sort_array(a,size);
    int min = arr[0];
    free(arr);
    return min;
}

//A function that prints the statistics of an array including minimum, maximum, mean, and median
void print_statistics(unsigned char *a, int size){ 
	printf("\nmin is : %d", find_minimum(a,size));
    printf("\nmax is: %d",find_maximum(a,size));
    printf("\nmean is: %f",find_mean(a,size));
    printf("\nmedian is: %f",find_median(a,size));
	printf("\n");
    return;
}
//Given an array of data and a length, prints the array to the screen
void print_array( unsigned char *a, int size) {
	printf("\n");
	for (int i=0; i < size; i++){
		printf("%d ",a[i]);
    	}
    	printf("\n");

}

void main() {

	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              	114, 88,   45,  76, 123,  87,  25,  23,
                              	200, 122, 150, 90,   92,  87, 177, 244,
                              	201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	print_array(test,SIZE);
    print_array(sort_array(test,SIZE),SIZE);
    print_statistics(test,SIZE);

}

/* Add other Implementation File Code Here */
