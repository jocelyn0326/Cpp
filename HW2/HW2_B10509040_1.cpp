#include <iostream>
#include <cstdlib>
using namespace std;
int  main(void)
static int balance = 10000;
{

	int input =0 ;  //���ϥΪ̿�J�ҭn�����ʧ@ 
	int save(int); 
	int withdraw(int);
	void check(int);
	char exit = 'a';
	do
	{
		cout<<"�п�J�z�Q�i�檺�ʧ@ 1.�s�� 2.���� 3.�d�ݾl�B"<<endl;
		cin>>input;
		switch(input)
		{
			case 1:
			balance = save(balance);
				break;
			case 2:
			balance = withdraw(balance);
				break;
			case 3:
			check(balance);
				break;
			 }
		cout<<"�Y�n�����п�Jy�G";
		cin>>exit;
		}while(exit != 'y');
		
		system("pause");
		return 0;	 
	}
 
int save(int b)
  {
	int money = 0;
	 cout<<"�п�J�n�s�J�����B�G";
	 cin>> money;
	 b += money;
	 cout<<"�������!�b��l�B�G"<<b<<endl;
	 return b;
 	}
 	
int withdraw(int b)
	{
	int money=0;
	cout<<"�п�J���ڪ��B�G";
	cin>> money;
		if(money<=b)
		{
			b-=money;
			cout<<"�������!�b��l�B�G"<<b<<endl;
		}
		else
		{
			
			do
			{
				cout<<"�s�ڤ���"<<endl;
				cout<<"�п�J���ڪ��B�G";
				cin>>money;
				
				
			}while(money>b);
			b-=money;
			cout<<"�������!�b��l�B�G"<<b<<endl;
			
		}
	return b;
	}
	
void check(int b)
{
	cout<<"�b��l�B�G"<<b<<endl; 
	return;
}

