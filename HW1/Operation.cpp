#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	char input;
	int a,b,output;
	
	do
	{
	cout<<"請輸入兩個數字(請以空白隔開)";
	scanf("%d %d", &a, &b);
	cout<<"請輸入要做什麼運算處理(+,-,*,/,%)：";
	cin>>input;
	switch(input){
		case '+':
			output = a+b;
			cout<<"結果為："<<output<<endl;
			break;
		case '-':
			output = a-b;
			cout<<"結果為："<<output<<endl;
			break;
		case '*':
			output = a*b;
			cout<<"結果為："<<output<<endl;
			break;
		case '/':
		output= a/b;
			cout<<"結果為："<<output<<endl;
			break;
		case '%':
			output = a%b;
			cout<<"結果為："<<output<<endl;
			break;
					
	}
	
	cout<<"若要結束請輸入y：";
	cin>>input;
	} while (input !='y');
	
 system("pause");
 return 0;

} 
