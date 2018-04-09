#include <iostream>
#include <stdlib.h>
using namespace std;

int save(int save_money);
int withdraw(int save_money);
void check();

int user_balance = 10000;


int main(void){
    do{
        cout << "請輸入你想進行的動作（1.存款 2.提款 3.查看餘額）：";
        char user_active;
        cin >> user_active;
        
        int user_money = 0;
        int wres;
        switch (user_active) {
            case '1':
                cout << "\n==>請輸入欲存款的金額：";
                cin >> user_money;
                
                cout << "\n==>交易完成" << endl << "　　　存款，帳戶目前餘額為：" << save(user_money) << endl << endl;
                break;
                
            case '2':
            	cout << "\n==>請輸入欲提款的金額：";
                cin >> user_money;
                
                wres = withdraw(user_money);
                
                if (wres < 0){
				 	cout << "\n==>交易失敗" << endl << "　　　提款，帳戶餘額不足" << endl << endl;
                }else{
                	cout << "\n==>交易完成" << endl << "　　　提款，帳戶目前餘額為：" << wres << endl << endl;
            	}
            	break;
            	
            case '3':
            	check();
            	break;
                
            default:
            	cout << "您輸入的動作 " << user_active << "為不合法的指令" << endl;
                break;
        }
        
        cout << "\n是否離開（y）：";
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
	cout << "\n==>交易完成" << endl << "　　　餘額查詢，帳戶目前餘額為：" << user_balance << endl << endl;
}
