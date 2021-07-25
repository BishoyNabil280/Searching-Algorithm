/*
 * application.c
 *
 *
 *      Author: Bishoy Nabil
 */

#include "binary_search.h"

#define MAX 255

int main(void){
	uint8_t status, found_index, size;
	uint32_t array[MAX];
	uint32_t element;
	printf("Please insert array size (1-255):\n");
	fflush(stdout);
	scanf("%d",&size);
	fflush(stdin);
	if(size>255)
	{
		printf("Invalid Size!\n");
		fflush(stdout);
	}else
	{
		printf("Please fill the array:\n");
		fflush(stdout);
		for(uint8_t i=0;i<size;i++)
		{
			scanf("%d",&array[i]);
			fflush(stdin);
		}
		printf("\nPlease enter the element you wish to search for:\n");
		fflush(stdout);
		scanf("%d",&element);
		fflush(stdin);
		status=sortCheck(array, size);
		if(status==0)
		{
			BubbleSort(array, size);
			found_index = binarySearch(array,size, element);
			if(found_index == 255 ) {
				printf("Element not found in the array ");
				fflush(stdout);
			}
			else {
				printf("Element found at index : %d",found_index);
				fflush(stdout);
			}
		}else
		{
			found_index = binarySearch(array,size, element);
			if(found_index == 255 ) {
				printf("Element not found in the array ");
				fflush(stdout);
			}
			else {
				printf("Element found at index : %d",found_index);
				fflush(stdout);
			}
		}
	}

	return 0;
}
