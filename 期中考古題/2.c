#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double calculate(double num1,double num2,char c);
int main(void){
	double num1,num2;
	char opt='c';
	printf("�п�J�Ĥ@�Ӽ�\n");
	scanf("%lf",&num1);
	fflush(stdin);
	printf("�п�J�B��N��\n");
	scanf("%c",&opt);
	do{	
		while(opt=='c'){
			printf("�п�J�Ĥ@�Ӽ�\n");
			scanf("%lf",&num1);
			fflush(stdin);
			printf("�п�J�B��N��\n");
			scanf("%c",&opt);
			fflush(stdin);
		}if(opt=='q'){
			num1=calculate(num1,0,opt);
			printf("Ans:%.2f",num1);
			fflush(stdin);
			printf("�п�J�B��N����e���}\n");
			scanf("%c",&opt);
			fflush(stdin);		
		}
		else{
			printf("�п�J�ĤG�Ӽ�\n");
			scanf("%lf",&num2);
			fflush(stdin);
			num1=calculate(num1,num2,opt);
			printf("Ans:%.2f\n",num1);	
			printf("�п�J�B��N����e���}\n");
			scanf("%c",&opt);
			fflush(stdin);	
		}
		
	}while(opt!='e');
	
	system("pause");
	return 0;
}
//�B��\�� 
double calculate(double num1,double num2,char c){
	switch(c){
		case '+':
			return num1+num2;
			break;
		case '-':
			return num1-num2;
			break;
		case '*':
			return num1*num2;
			break;
		case '/':
			return num1/num2;
			break;
		case 'm':
			return (double)((int)num1%(int)num2);
			break;
		case 'q':
			return sqrt(num1);
			break;
		case 's':
			return pow(num1,num2);
			break;
		case 'e':
			break;	
		default:
			printf("��J�Ÿ����~");
		    return 0;												
	}
}
