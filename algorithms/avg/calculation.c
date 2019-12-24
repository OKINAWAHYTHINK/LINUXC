#include "calculation.h"

/* 平均値計算 */
double Avg(double x[], int size){
    double avg = 0.0;
    double sum = 0.0;

	sum = Sum(x,size);

    avg  = sum/size;

	return avg;
}

/* 合計計算 */
double Sum(double x[], int size){
    int    i;
	double s = 0.0;

    for (i = 0; i < size; i++) {
		s += x[i];
	}

    return s;
}