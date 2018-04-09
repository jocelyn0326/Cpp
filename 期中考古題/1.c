#include<stdio.h>
#include<stdlib.h>

double Encode(int i);
double EncodeRe(int i);
int main(void){
	int num,n;
	do{
		printf("請輸入要幾個數字(最多十位)\n");
		scanf("%d",&num);
	}while(num>10);
	printf("遞迴方式產生的數字依序為:");
	for(n=1;n<=num;n++){
		printf("%d  ",(int)EncodeRe(n)%10);
	}
	printf("\n"); 
	printf("迴圈方式產生的數字依序為:");
	for(n=1;n<=num;n++){
		printf("%d  ",(int)Encode(n)%10);
	}
	printf("\n"); 
	system("pause");
	return 0;
}
//迴圈 
double Encode(int i){
	double temp,value;   
	temp =1;	
	int n;
	for(n=1;n<=i;n++){
		value = 100*(temp*((double)(n+1)/((double)(2*n+1)*(double)(n+2))));
		temp = value;      
	} 
	return value;
}
//遞迴 
double EncodeRe(int i){
	if(i<=0)
		return 1;
	else
		return 100*(EncodeRe(i-1)*((double)(i+1)/((double)(2*i+1)*(double)(i+2))));
}

