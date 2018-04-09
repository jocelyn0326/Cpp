#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int Random(int);
int Getnew_number(int);
int password(int);
int input = 1;
int main (void)

{
	do{		
		int num = Random(num);
		cout<<"原始亂數為："<<num<<endl;
		int r = Getnew_number(num);
		password(r);
		cout<<"是否繼續產生密碼(輸入0則程式結束)：";
		cin>>input; 
	}while (input != 0);//若輸入0則不做 

system("pause");
return 0;
 
}
int Random(int x)
{
	x = ((rand() % 9000) +1000);
	bool is_pnumber = true;
	
	for(int i = 2; i< x-1; i++){
		if (x % i == 0){
			is_pnumber = false;
			break;
		}
	}
	
	if (is_pnumber){
		return x;
	}else
		return Random(x);
}

int Getnew_number(int n)
{
int a=n/1000;
int b=(n-a*1000)/100;
int c=(n-a*1000-b*100)/10;
int	d=(n-a*1000-b*100-c*10);
	if(a<d)
	{
		int temp=a; 
		a=d;
		d=temp;	
	}
	else if(a==d)
		{
			a=8;
			d=8;
		}
int new_number=a*1000+b*100+c*10+d;
return new_number;
}

int password(int new_number){
	for (int i=new_number ; i>0 ; i--){ 
		if (i%4==0 && i%6==0){
		cout<<"密碼為："<<i<<endl;
		break;
		}
	}
}
