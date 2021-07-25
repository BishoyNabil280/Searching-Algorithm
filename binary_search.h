/*
 * binary_search.h
 *
 *
 *      Author: Bishoy Nabil
 */

#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_

#include <stdlib.h>
#include <stdio.h>
#include "compiler.h"

/* APIs */
uint8_t binarySearch(uint32_t * arr, uint8_t size, uint32_t number);
uint8_t sortCheck(uint32_t * arr, uint8_t size);
void BubbleSort(uint32_t* arr, uint8_t size);


#endif /* BINARY_SEARCH_H_ */
