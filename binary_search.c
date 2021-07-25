/*
 ============================================================================
 Name        : BinarySearch.c
 Author      : Bishoy Nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "binary_search.h"

uint8_t binarySearch(uint32_t * arr, uint8_t size, uint32_t number)
{
	uint8_t start_index=0, end_index=(size-1),middle;
	while (start_index <= end_index){
		middle = (start_index + end_index)/2;
		if (arr[middle] == number)
			return middle;
		if (arr[middle] < number)
			start_index = middle + 1;
		else
			end_index = middle - 1;
	}
	return 255;
}

uint8_t sortCheck(uint32_t * arr, uint8_t size)
{
	uint8_t i;
	for(i=0;i<size;i++)
	{
		if(arr[i]>arr[i+1])
			return 0;
	}
	return 1;
}

void BubbleSort(uint32_t* arr, uint8_t size)
{
	uint8_t i,j;
	uint32_t temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

