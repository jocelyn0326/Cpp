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
		 		cout<<"�H�Ƥw�F10�H�W��!!�L�k�A�s�W!"<<endl;
				}else{
					while(true){
						cout<<"�п�J�b���G";
						cin>>input_account;
						if(check(input_account,"") == -1){
						break;
						}else{
							
							cout<<"�b���w����!!"<<endl;
						}
					}
					cout<<"�п�J�K�X:";
					cin>>input_password;
					cout<<"�п�J�w�s���B:";
					cin>>input_balance; 
					members[i].newMember(input_account,input_password,input_balance);
				}
		 }
		  int check(string account,string password){
		  	
			  for(int i=0;i<10;i++){
			  	if(members[i].account==account && members[i].password == password){
			  		cout<<"�n�J����!!"<<endl;
			  		moneyadj(members[i]);
					return 0; //�n�J���\ 
			  		
				  }else if(members[i].account == account && members[i].password != password){
				  	cout<<"�K�X���~!!"<<endl;
					return 1; //�K�X���~
				  	}else{
				  		return -1;//�S�����ƪ��b�� 
					  }
				  }
			  }
		
		void moneyadj(Member login){
			
			int money,withdraw,input;
			do{
				money=0;
				withdraw=0;
				cout<<"�п�J�z�Q�i�檺�ʧ@ 1.�s�� 2.���� 3.�n�X"<<endl;
				cin>>input;
				switch(input){
				case 1:
					cout<<"�z�n�s�J�h�֪��B:"<<endl;
					cin>>money;				 
					login.balance+=money;
					cout<<"You saved "<<money<<" dollars successfully, your balance is "<<login.balance<<" dollars."<<endl; 
					break;
				case 2:
					cout<<"�z�n���X�h�֪��B:";
					cin>>withdraw;
					if(withdraw < login.balance){
						login.balance-=withdraw;
						cout<<"you withdrew "<<withdraw<<" dollars successfully, your balance is "<<login.balance<<" dollars."<<endl; 
					}else{
						cout<<"�l�B����!"<<endl; 
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
	cout<<"---------�п�ܭn(1)���U(2)�n�J:";
	cin>>input;	
	switch(input){
		case 1:
			if (number<10){
				mySystem.add(number);
				number++;
			}
			break;
		case 2:
			cout<<"�п�J�b���G";
			cin>>a;
			cout<<"�п�J�K�X�G";
			cin>>p;
			mySystem.check(a,p);
			break;
		default:
			cout<<"�п�J1��2"<<endl;
	}
	
	cout<<"�п�J�O�_�n�~��:(y/n)"<<endl;
	cin>>again; 
	}while(again == 'y');

	system("pause");
	return 0;
}
