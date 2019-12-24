#include "floatInput.h"
#include "floatOutput.h"
#include "calculation.h"

/* 平均値計算 */
int main(){
    int size;
    double x[size];
    double avg;

    size = Input(x);      
    avg = Avg(x,size);    
    Output(avg);

    return 0;  
}