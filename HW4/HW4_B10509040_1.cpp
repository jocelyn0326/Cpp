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
			cout<<"請輸入第一個數：";
			cin>> number1;
			if(times == 0){
				cout<<"請輸入運算代號【+,-,*,/,s(指數),q(開根號),m(求餘數),c(清空)】："; 
				cin>>symbol;
				if(symbol == 'c'){
					times = 0;
					number1 = 1;
				}	
			}else{
				cout<<"請輸入運算代號【+,-,*,/,s(指數),q(開根號),m(求餘數),c(清空)】，或輸入e離開：";
				cin>>symbol;
				if(symbol == 'c'){
					times = 0;
					number1 = 1;
					continue;
				}
			}
			}while(symbol =='c');
			
		do{
			cout<<"請輸入第二個數：";
			cin>>number2;
			cout<<"answer is "<<math.calculate(number1,number2,symbol)<<endl;
			number1=math.calculate(number1,number2,symbol);
			times++;
			cout<<"請輸入運算代號【+,-,*,/,s(指數),q(開根號),m(求餘數),c(清空)】，或輸入e離開：";
			cin>>symbol;
			if(symbol == 'c'){
//			number1 = 1;
			cout<<"請輸入第一個數：";
			cin>> number1;
			cout<<"請輸入運算代號【+,-,*,/,s(指數),q(開根號),m(求餘數),c(清空)】，或輸入e離開：";
			cin>>symbol;
			}
			}while(symbol != 'e');



	system("pause");
	return 0;
}
