#include <stdio.h>

int Input(double x[]);
double Avg(double x[], int size);
int Output(double avg);

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

/* 入力関数 */
int Input(double x[]){
    int i;
    int size;
    printf("数値を個数入力してください＞");
    //scanf("%d",&size);

    while(1){
        // 異常値対策
        if(scanf("%d", &size) != 1){
            printf("数字入れてください。\n");
            scanf("%*s");
            continue;
        }

        for(i = 0;i<=size-1;i++){            
            printf("%d個目の数値を入力してください=",i+1);
            while(1){              
                if(scanf("%lf",&x[i]) != 1){
                    printf("数字入れてください。\n");
                    scanf("%*s");
                    continue;
                }
                break;
            }
        }
        break;
    }

    return size;
}

/* 計算する関数 */
double Avg(double x[], int size){
	int    i;
	double s = 0.0;
    double avg = 0.0;

	for (i = 0; i < size; i++) {
		s += x[i];
	}

    avg  = s/size;

	return avg;
}

/* 出力する関数 */
int Output(double avg){
    printf("平均値：%f\n",avg);

    return 0;
}