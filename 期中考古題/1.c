#include<stdio.h>
#include<stdlib.h>

double Encode(int i);
double EncodeRe(int i);
int main(void){
	int num,n;
	do{
		printf("�п�J�n�X�ӼƦr(�̦h�Q��)\n");
		scanf("%d",&num);
	}while(num>10);
	printf("���j�覡���ͪ��Ʀr�̧Ǭ�:");
	for(n=1;n<=num;n++){
		printf("%d  ",(int)EncodeRe(n)%10);
	}
	printf("\n"); 
	printf("�j��覡���ͪ��Ʀr�̧Ǭ�:");
	for(n=1;n<=num;n++){
		printf("%d  ",(int)Encode(n)%10);
	}
	printf("\n"); 
	system("pause");
	return 0;
}
//�j�� 
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
//���j 
double EncodeRe(int i){
	if(i<=0)
		return 1;
	else
		return 100*(EncodeRe(i-1)*((double)(i+1)/((double)(2*i+1)*(double)(i+2))));
}

