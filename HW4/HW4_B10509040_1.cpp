#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
class Math{
public:
	double calculate(double a, double b, char c){
	switch(c){
		case '+':
			return a+b;
			break;
		case '-':
			return a-b;
			break;
		case '*':
			return a*b;
			break;
		case '/':
			return a/b;
			break;
		case 's':
			return pow(a,b);
			break;
		case 'q':
			return pow(a,1/b);
			break;		
		case 'm':
			return (int)a%(int)b;
			break;
				
		}
	}

};

int main(void){
	double number1=0,number2=0,times=0;
	char exit, symbol;
	Math math;
		do{
			cout<<"�п�J�Ĥ@�ӼơG";
			cin>> number1;
			if(times == 0){
				cout<<"�п�J�B��N���i+,-,*,/,s(����),q(�}�ڸ�),m(�D�l��),c(�M��)�j�G"; 
				cin>>symbol;
				if(symbol == 'c'){
					times = 0;
					number1 = 1;
				}	
			}else{
				cout<<"�п�J�B��N���i+,-,*,/,s(����),q(�}�ڸ�),m(�D�l��),c(�M��)�j�A�ο�Je���}�G";
				cin>>symbol;
				if(symbol == 'c'){
					times = 0;
					number1 = 1;
					continue;
				}
			}
			}while(symbol =='c');
			
		do{
			cout<<"�п�J�ĤG�ӼơG";
			cin>>number2;
			cout<<"answer is "<<math.calculate(number1,number2,symbol)<<endl;
			number1=math.calculate(number1,number2,symbol);
			times++;
			cout<<"�п�J�B��N���i+,-,*,/,s(����),q(�}�ڸ�),m(�D�l��),c(�M��)�j�A�ο�Je���}�G";
			cin>>symbol;
			if(symbol == 'c'){
//			number1 = 1;
			cout<<"�п�J�Ĥ@�ӼơG";
			cin>> number1;
			cout<<"�п�J�B��N���i+,-,*,/,s(����),q(�}�ڸ�),m(�D�l��),c(�M��)�j�A�ο�Je���}�G";
			cin>>symbol;
			}
			}while(symbol != 'e');



	system("pause");
	return 0;
}
