#include<stdio.h>
#include<stdlib.h>

int calculate(int cost,double rate);
int main(void){
	int cost;
	float rate;
	do{
		printf("�п�J�C�Ӥ�Q�v�P�ͬ���X\n");
		scanf("%f %d",&rate,&cost);
	}while(rate<0||cost<0);
	printf("%d�Ӥ��ͬ��O�N������",calculate(cost,rate));
	printf("\n"); 
	system("pause");
	return 0;
}
//�p���� 
int calculate(int cost,double rate){
	float total=50000;
	int month=0;
	while(total>cost){
		month++;
		total=(total+(int)total*rate)-cost;
		printf("��%d�Ӥ��:%.2f\n",month,total);
	}
	return month;
}

