#include <iostream>
#include <cstdlib>
using namespace std;
int iFibonacci(int n);
int input=0, sum = 0, i=0;
int  main(void)
{
	do
	{
		cout<<"請輸入要計算第幾項的值:(若輸入<0的數值則程式結束)";
		cin>>input;
		if (input<0)
		{
			exit(1);
		}
		
		else
		{
			cout<<"fib("<<input<<")="<< iFibonacci(input)<<endl;

		}
	} while(input>=0);

	system("pause");
	return 0;
	
}

int iFibonacci(int n)
{
	int sum = 0;
	int n1 = 0,n2 = 1;
	
	if (n==1)return n1;
	if (n==2)return n2;
	else
	{
		for (int i=0;i<n-2;i++) 
		{
			sum = n1 + n2;
			n1 = n2;
			n2 = sum;
		}
		
            n2 = 0;
            n1 = 1;
		return sum;

	}
}
