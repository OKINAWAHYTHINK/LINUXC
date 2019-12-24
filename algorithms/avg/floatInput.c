#include "floatInput.h"

int  data_error = 0;

/* 入力関数 */
int Input(double x[]){
    int size = 0;
    int enter;
    int i;

    for(i=0;i<=4;i++){ 
        printf("数値を入力してください＞");  
        do{          
            if(scanf("%lf",&x[size])!=1){
                data_error = 1;  
                scanf("%*s");                                              
            }else{
                size++; 
            }
            enter = getchar();                
        }while(enter!='\n');

        if(data_error !=0 ){
            DataError();
            if(i==5) exit (EXIT_FAILURE);
            data_error = 0;
        } else{
            break;
        }
    }

    return size;
}

/* 入力データのエラー処理 */
int DataError(){
	char *msg;

	switch (data_error) {
	case 1: msg = "データ異常．"; break;
	}
    printf("%s\n",msg);

	return 0;
}