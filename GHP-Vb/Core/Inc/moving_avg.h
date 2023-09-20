/*
 * moving_avg.h
 *
 *  Created on: Sep 20, 2023
 *      Author: robin
 */

#ifndef MOVING_AVG_H_
#define MOVING_AVG_H_

// needed, because struct array is not dynamic
#define MAX_WINDOW_SIZE 128

typedef struct {
    double buffer[MAX_WINDOW_SIZE];
    int size;
    int index;
    double sum;
} MovingAverage;

void initializeMovingAverage(MovingAverage *ma, int windowSize);
double calculateMovingAverage(MovingAverage *ma, int newData);


#endif /* MOVING_AVG_H_ */


