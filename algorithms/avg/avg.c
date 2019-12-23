#include <stdio.h>

double Sum(double x[], int length);

/* 平均を計算する関数 */
int main(){
    double x[] = {30,100.00,40,20.0,30.000};
    double avg;
    int length = sizeof(x)/sizeof(double);

    avg = Sum(x,length)/length;

    printf("平　　均：%f\n",avg);

    return avg;  
}

/* 合計を計算する関数 */
double Sum(double x[], int length)
{
	int    i;
	double s = 0.0;

	for (i = 0; i < length; i++) {
		s += x[i];
	}
	return s;
}