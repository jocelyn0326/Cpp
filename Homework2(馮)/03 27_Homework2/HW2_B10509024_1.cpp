#include <iostream>
#include <stdlib.h>
using namespace std;

int save(int save_money);
int withdraw(int save_money);
void check();

int user_balance = 10000;


int main(void){
    do{
        cout << "�п�J�A�Q�i�檺�ʧ@�]1.�s�� 2.���� 3.�d�ݾl�B�^�G";
        char user_active;
        cin >> user_active;
        
        int user_money = 0;
        int wres;
        switch (user_active) {
            case '1':
                cout << "\n==>�п�J���s�ڪ����B�G";
                cin >> user_money;
                
                cout << "\n==>�������" << endl << "�@�@�@�s�ڡA�b��ثe�l�B���G" << save(user_money) << endl << endl;
                break;
                
            case '2':
            	cout << "\n==>�п�J�����ڪ����B�G";
                cin >> user_money;
                
                wres = withdraw(user_money);
                
                if (wres < 0){
				 	cout << "\n==>�������" << endl << "�@�@�@���ڡA�b��l�B����" << endl << endl;
                }else{
                	cout << "\n==>�������" << endl << "�@�@�@���ڡA�b��ثe�l�B���G" << wres << endl << endl;
            	}
            	break;
            	
            case '3':
            	check();
            	break;
                
            default:
            	cout << "�z��J���ʧ@ " << user_active << "�����X�k�����O" << endl;
                break;
        }
        
        cout << "\n�O�_���}�]y�^�G";
        cin >> user_active;
        if (user_active == 'y')
            break;
        else
             cout << "\n==========================================================\n" << endl;
        
        
    }while(true);
}


int save(int save_money){
	user_balance += save_money;
    return user_balance;
}

int withdraw(int save_money){
	if (save_money > user_balance)
		return -1;
	else{
		user_balance -=  save_money;
		return user_balance;	
	}
}

void check(){
	cout << "\n==>�������" << endl << "�@�@�@�l�B�d�ߡA�b��ثe�l�B���G" << user_balance << endl << endl;
}
