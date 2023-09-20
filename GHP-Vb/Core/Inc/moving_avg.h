/*
 * moving_avg.h
 *
 *  Created on: Sep 20, 2023
 *      Author: robin
 */

#ifndef MOVING_AVG_H_
#define MOVING_AVG_H_

#define MAX_WINDOW_SIZE 10

typedef struct {
    double buffer[MAX_WINDOW_SIZE];
    int size;
    int index;
    double sum;
} MovingAverage;

void initializeMovingAverage(MovingAverage *ma, int windowSize);
double calculateMovingAverage(MovingAverage *ma, double newData);


#endif /* MOVING_AVG_H_ */


