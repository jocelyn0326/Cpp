#include<stdio.h>
#include<stdlib.h>

int calculate(int cost,double rate);
int main(void){
	int cost;
	float rate;
	do{
		printf("請輸入每個月利率與生活支出\n");
		scanf("%f %d",&rate,&cost);
	}while(rate<0||cost<0);
	printf("%d個月後生活費將不夠用",calculate(cost,rate));
	printf("\n"); 
	system("pause");
	return 0;
}
//計算月份 
int calculate(int cost,double rate){
	float total=50000;
	int month=0;
	while(total>cost){
		month++;
		total=(total+(int)total*rate)-cost;
		printf("第%d個月剩:%.2f\n",month,total);
	}
	return month;
}

