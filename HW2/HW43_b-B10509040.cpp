#include <iostream>
#include <cstdlib>
using namespace std;
int rFibonacci(int n);
int input=0;
int  main(void)
{
	do
	{
		cout<<"�п�J�n�p��ĴX������:(�Y��J<0���ƭȫh�{������)";
		cin>>input;
		if (input<0)
		{
			exit(1);
		}
		
		else
		{
			cout<<"fib("<<input<<")="<<rFibonacci(input)<<endl;

		}
	} while(input>=0);

	system("pause");
	return 0;
	
}
int rFibonacci(int n)
{
	if(n==1)
        return 0;
 
    if(n==2)
        return 1;
 
    return (rFibonacci(n-1)+rFibonacci(n-2));
}
