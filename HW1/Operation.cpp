#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	char input;
	int a,b,output;
	
	do
	{
	cout<<"�п�J��ӼƦr(�ХH�ťչj�})";
	scanf("%d %d", &a, &b);
	cout<<"�п�J�n������B��B�z(+,-,*,/,%)�G";
	cin>>input;
	switch(input){
		case '+':
			output = a+b;
			cout<<"���G���G"<<output<<endl;
			break;
		case '-':
			output = a-b;
			cout<<"���G���G"<<output<<endl;
			break;
		case '*':
			output = a*b;
			cout<<"���G���G"<<output<<endl;
			break;
		case '/':
		output= a/b;
			cout<<"���G���G"<<output<<endl;
			break;
		case '%':
			output = a%b;
			cout<<"���G���G"<<output<<endl;
			break;
					
	}
	
	cout<<"�Y�n�����п�Jy�G";
	cin>>input;
	} while (input !='y');
	
 system("pause");
 return 0;

} 
