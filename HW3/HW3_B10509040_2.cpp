#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Member{
	public:
		string account;
		string password;
		
		void newMember(string ac, string pw){
			account = ac;
			password = pw;
		}
};

class MySystem{
	public:
		Member members[10];
		string input_account, input_password;
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
					members[i].newMember(input_account,input_password);
				}
		 }
		  int check(string account,string password){
		  	
			  for(int i=0;i<10;i++){
			  	if(members[i].account==account && members[i].password == password){
			  		cout<<"�n�J����!!"<<endl;
					return 0; //�n�J���\ 
			  		
				  }else if(members[i].account == account && members[i].password != password){
				  	cout<<"�K�X���~!!"<<endl;
					return 1; //�K�X���~
				  	}else{
				  		return -1;//�S�����ƪ��b�� 
					  }
				  }
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
