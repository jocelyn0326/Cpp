#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Member{
	public:
		string account;
		string password;
		int balance;
		
		void newMember(string ac, string pw, int b){
			account = ac;
			password = pw;
			balance = b;
		}
};

class MySystem{
	public:
		
		Member members[10];
		string input_account, input_password;
		int input_balance;
		
		void add(int i){
			if(i>10){
		 		cout<<"人數已達10人上限!!無法再新增!"<<endl;
				}else{
					while(true){
						cout<<"請輸入帳號：";
						cin>>input_account;
						if(check(input_account,"") == -1){
						break;
						}else{
							
							cout<<"帳號已重複!!"<<endl;
						}
					}
					cout<<"請輸入密碼:";
					cin>>input_password;
					cout<<"請輸入預存金額:";
					cin>>input_balance; 
					members[i].newMember(input_account,input_password,input_balance);
				}
		 }
		  int check(string account,string password){
		  	
			  for(int i=0;i<10;i++){
			  	if(members[i].account==account && members[i].password == password){
			  		cout<<"登入完成!!"<<endl;
			  		moneyadj(members[i]);
					return 0; //登入成功 
			  		
				  }else if(members[i].account == account && members[i].password != password){
				  	cout<<"密碼錯誤!!"<<endl;
					return 1; //密碼錯誤
				  	}else{
				  		return -1;//沒有重複的帳號 
					  }
				  }
			  }
		
		void moneyadj(Member login){
			
			int money,withdraw,input;
			do{
				money=0;
				withdraw=0;
				cout<<"請輸入您想進行的動作 1.存款 2.提款 3.登出"<<endl;
				cin>>input;
				switch(input){
				case 1:
					cout<<"您要存入多少金額:"<<endl;
					cin>>money;				 
					login.balance+=money;
					cout<<"You saved "<<money<<" dollars successfully, your balance is "<<login.balance<<" dollars."<<endl; 
					break;
				case 2:
					cout<<"您要提出多少金額:";
					cin>>withdraw;
					if(withdraw < login.balance){
						login.balance-=withdraw;
						cout<<"you withdrew "<<withdraw<<" dollars successfully, your balance is "<<login.balance<<" dollars."<<endl; 
					}else{
						cout<<"餘額不足!"<<endl; 
					}
					break;
				case 3:
					break; 
				 }
	
			}while(input != 3);
					
	}
};

		 
		


int main(void){
	int input;
	char again;
	MySystem mySystem;
	int number=0;
	string a,p;

	do{
	//fflush(stdin);
	cout<<"---------請選擇要(1)註冊(2)登入:";
	cin>>input;	
	switch(input){
		case 1:
			if (number<10){
				mySystem.add(number);
				number++;
			}
			break;
		case 2:
			cout<<"請輸入帳號：";
			cin>>a;
			cout<<"請輸入密碼：";
			cin>>p;
			mySystem.check(a,p);
			break;
		default:
			cout<<"請輸入1或2"<<endl;
	}
	
	cout<<"請輸入是否要繼續:(y/n)"<<endl;
	cin>>again; 
	}while(again == 'y');

	system("pause");
	return 0;
}
