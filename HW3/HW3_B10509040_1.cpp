#include <iostream>
#include <cstdlib>
#define SIZE 5
using namespace std;

class Store{
public:
	int salary[SIZE];
	int salary_sum=0;
	
		Store(){
		for (int i=0;i<SIZE;i++)
		salary[i]=0;
	}
	
	void pay_employee() {
		salary_sum = 0;
		for(int i=0;i<SIZE;i++){
		salary[i]+=75;
		salary_sum+=salary[i];
	
		}
	}
	
	void output_salary(){
		for (int i=0;i<SIZE;i++)
		cout<<"��"<<i+1<<"����u���~��"<<salary[i]<<endl;
		cout<<"�Ҧ����u�~�ꬰ�G"<<salary_sum<<endl;
		
	}
	
	int return_salary_sum(){
		return salary_sum;
	}
	
};

int main(void){
	Store store;
	int input=0;
	char again;
	do{
		cout<<"1.�d�ݦU���u�u��\n2.�o�~\n3.�d�ݤH���`����"<<endl;
		cout<<"�п�J�G";
		cin>>input;

		switch (input){
			case 1:
				store.output_salary();
				break;
			case 2:
				store.pay_employee();
				break;
			case 3:
				cout<<"�H���`�������G"<<store.return_salary_sum()<<endl;
				break;
			default:
				cout<<"�п�J1�B2�B3"<<endl;
		}
		cout<<"�ʧ@�����A�O�_�~��(y/n)";
		cin>>again;
	}while (again =='y');
	
	system("pause");
	return 0;
}
 
