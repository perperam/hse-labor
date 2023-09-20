/*
 * moving_avg.c
 *
 *  Created on: Sep 20, 2023
 *      Author: robin
 */

#include "moving_avg.h"

void initializeMovingAverage(MovingAverage *ma, int windowSize) {
	// cut of when to big for static struct array
    if (windowSize > MAX_WINDOW_SIZE) {
        windowSize = MAX_WINDOW_SIZE;
    }

    ma->size = windowSize;
    ma->index = 0;
    ma->sum = 0.0;
    for (int i = 0; i < ma->size; i++) {
        ma->buffer[i] = 0.0;
    }
}

double calculateMovingAverage(MovingAverage *ma, int newData) {
    ma->sum -= ma->buffer[ma->index];
    ma->sum += newData;
    ma->buffer[ma->index] = newData;
    ma->index = (ma->index + 1) % ma->size;
    return ma->sum / ma->size;
}

