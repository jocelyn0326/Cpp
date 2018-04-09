# include <iostream>
# include <stdlib.h>
# include <stdio.h>
using namespace std;

int getNumber1(int n);
int getNumber2(int n);
int getNumber3(int n);
int getNumber4(int n);
int getNewNumber(int num);

int getRandom();

int main(void){
	
	
	do{
		int num = getRandom();
		
		cout << "原始的亂數為：" << num << endl ; 
	 
		for (int i = getNewNumber(num); i >= 24; i--){
			if (i % 4 == 0 && i % 6 == 0){
				cout << "計算的密碼為：" << i << endl ;
				break;
			}
		}
		
		cout << "\n\n是否繼續產生密碼(輸入0結束)：";
		int exit_num;
		cin >> exit_num;
		
		if (exit_num == 0)
			break;
		else
			cout << "\n============================\n\n";
			
	}while(true);

	
	
	
	return 0 ;
}

int getRandom(){
	int aa = ((rand() % 9000) +1000);
	bool is_pnumber = true;
	
	for(int i = 2; i< aa; i++){
		if (aa % i == 0){
			is_pnumber = false;
			break;
		}
	}
	
	if (is_pnumber){
		return aa;
	}else
		return getRandom();
}

int getNewNumber(int num){
	int newNum[] = {getNumber1(num),getNumber2(num),getNumber3(num),getNumber4(num)};
	
	if (newNum[0] < newNum[3]){
		int t = newNum[0];
		newNum[0] = newNum[3];
		newNum[3] = t;
	}else if(newNum[0] == newNum[3]){
		newNum[0] = 8;
		newNum[3] = 8;
	}
	
	return (newNum[0]*1000 + newNum[1]*100 + newNum[2] * 10 + newNum[3]);
}

int getNumber1(int n){
	return (n-(n%1000))/1000;
}

int getNumber2(int n){
	return (n-(n%100) - (getNumber1(n)*1000))/100;
}

int getNumber3(int n){
	return (n-(n%10) - (getNumber1(n)*1000) - (getNumber2(n)*100))/10;
}

int getNumber4(int n){
	return (n % 10 );
}
