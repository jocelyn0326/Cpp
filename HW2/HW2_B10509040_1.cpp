#include <iostream>
#include <cstdlib>
using namespace std;
int  main(void)
static int balance = 10000;
{

	int input =0 ;  //讓使用者輸入所要做的動作 
	int save(int); 
	int withdraw(int);
	void check(int);
	char exit = 'a';
	do
	{
		cout<<"請輸入您想進行的動作 1.存款 2.提款 3.查看餘額"<<endl;
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
		cout<<"若要結束請輸入y：";
		cin>>exit;
		}while(exit != 'y');
		
		system("pause");
		return 0;	 
	}
 
int save(int b)
  {
	int money = 0;
	 cout<<"請輸入要存入的金額：";
	 cin>> money;
	 b += money;
	 cout<<"交易完成!帳戶餘額："<<b<<endl;
	 return b;
 	}
 	
int withdraw(int b)
	{
	int money=0;
	cout<<"請輸入提款金額：";
	cin>> money;
		if(money<=b)
		{
			b-=money;
			cout<<"交易完成!帳戶餘額："<<b<<endl;
		}
		else
		{
			
			do
			{
				cout<<"存款不足"<<endl;
				cout<<"請輸入提款金額：";
				cin>>money;
				
				
			}while(money>b);
			b-=money;
			cout<<"交易完成!帳戶餘額："<<b<<endl;
			
		}
	return b;
	}
	
void check(int b)
{
	cout<<"帳戶餘額："<<b<<endl; 
	return;
}

