#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double calculate(double num1,double num2,char c);
int main(void){
	double num1,num2;
	char opt='c';
	printf("請輸入第一個數\n");
	scanf("%lf",&num1);
	fflush(stdin);
	printf("請輸入運算代號\n");
	scanf("%c",&opt);
	do{	
		while(opt=='c'){
			printf("請輸入第一個數\n");
			scanf("%lf",&num1);
			fflush(stdin);
			printf("請輸入運算代號\n");
			scanf("%c",&opt);
			fflush(stdin);
		}if(opt=='q'){
			num1=calculate(num1,0,opt);
			printf("Ans:%.2f",num1);
			fflush(stdin);
			printf("請輸入運算代號或e離開\n");
			scanf("%c",&opt);
			fflush(stdin);		
		}
		else{
			printf("請輸入第二個數\n");
			scanf("%lf",&num2);
			fflush(stdin);
			num1=calculate(num1,num2,opt);
			printf("Ans:%.2f\n",num1);	
			printf("請輸入運算代號或e離開\n");
			scanf("%c",&opt);
			fflush(stdin);	
		}
		
	}while(opt!='e');
	
	system("pause");
	return 0;
}
//運算功能 
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
			printf("輸入符號錯誤");
		    return 0;												
	}
}
