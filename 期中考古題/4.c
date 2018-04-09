#include<stdio.h>
#include<stdlib.h>

int payment(int start,float mile,int time);
int main (void){
	int hr,min,time,start;
	float mile;
	do{
		printf("請輸入上車時間\n");
		scanf("%d:%d",&hr,&min);
		printf("請輸入乘車里程\n");
		scanf("%f",&mile);
		printf("請輸入乘車時間\n");
		scanf("%d",&time);	
		start=hr*60+min;
	}while(start<=0||mile<=0||time<=0);
	
	printf("本次搭乘金額為:%d",payment(start,mile,time));
	printf("\n"); 
	system("pause");
	return 0;
}
//金額計算 
int payment(int start,float mile,int time){
	int total;
	int total_t=start+time;
	mile-=1.5;
	if(mile<0)
		mile=0;
	if(time<=3){
		total=(int)((mile)/0.5)*5;
	}
	else{
		if((start>=480&&start<=600)||(start>=1020&&start<=1140)){		
			if(total_t>1140&&(start>=1020&&start<=1140)){
				//printf("q");
				total=(1140-start-3)*7+(total_t-1140)*5+(int)((mile)/0.5)*5;
			}else if(total_t>600&&(start>=480&&start<=600)){
				//printf("s");
				total=(600-start-3)*7+(total_t-600)*5+(int)((mile)/0.5)*5;
			}
			else{
				//printf("w");
				total=(time-3)*7+(int)((mile)/0.5)*5;
			}
		}else{
			if(total_t>1020){
				if(1020-start<3){
					//printf("x");
					total=(total_t-1020-3+(1020-start))*7+(int)((mile)/0.5)*5;
				}else{
					//printf("r");
					total=(1020-start-3)*5+(total_t-1020)*7+(int)((mile)/0.5)*5;
				}
			}
			else if(total_t>480){
				if(480-start<3){
					//printf("t");
					total=(total_t-480-3+(480-start))*7+(int)((mile)/0.5)*5;
				}else{
					//printf("a");
					total=(480-start-3)*5+(total_t-480)*7+(int)((mile)/0.5)*5;
				}
			}
			else{
				//printf("p");
				total=(time-3)*5+(int)((mile)/0.5)*5;
			}
		}
	}
	return total+75;
}
