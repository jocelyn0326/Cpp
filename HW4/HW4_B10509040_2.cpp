#include <iostream>
#include <cstdlib>
#define Employees 5
#define STORES 3
using namespace std;

class Store{
public:
	int salary[Employees];
	int salary_sum;
	
	Store(){
		for (int j=0;j<Employees;j++){
		salary[j]=0;
		}
	}
	
	void pay_employee(int money) {
			salary_sum= 0;
			for(int j=0;j<Employees;j++){
				salary[j]+=money;
				salary_sum+=salary[j];
			}
		}
	
	
	void output_salary(){
		for (int j=0;j<Employees;j++){
		cout<<"��"<<j+1<<"����u���~��"<<salary[j]<<endl;
		
		}
	}
	
	int return_salary_sum(){
		for (int j; j<STORES;j++){
			return salary_sum;
		}
	}
	
};

class Enterprise{
public:
	int money;
	int totalSalary; 
	Store stores[STORES];
	Enterprise(){
		for(int i=0; i<STORES;i++) {
			for (int j=0; j<Employees;j++){
			stores[i].salary[j]= 0;
			}
		}
	}
	void pay_stores(){
		for(int i=0; i<STORES;i++) {
			cout<<"����"<<i+1<<"�a���u�C��n�o�h���~��"<<endl;
			cin>>money;
			stores[i].pay_employee(money);
			}

	}
	void output_stores(){      
	 for(int i=0; i<STORES;i++){
	 	cout<<"��"<<i+1<<"�a�K�Q�ө������u�~�����:"<<endl;
		 stores[i].output_salary();
		 cout<<"�o�@�a�K�Q�ө��Ҧ����u�~���`�M�G"<<stores[i].salary_sum<<endl; 
	 }
	 cout<<"�T�a���`���B�G"<<stores_sum()<<endl;
	}
	
	int stores_sum (){
		totalSalary = 0;
	 	for(int i; i<STORES;i++){
	 		totalSalary += stores[i].salary_sum;
	 		}
	 		return totalSalary;
	}
};

int main(void){
	Enterprise enterprise;
	int input=0;
	char again;
	do{
		cout<<"�п�ܭn���檺�u�@�G"<<endl;
		cout<<"1.�d�ݭ��u�~��\n2.�o�~"<<endl;
		cin>>input;

		switch (input){
			case 1:
					enterprise.output_stores();
				break;
			case 2:
				enterprise.pay_stores();
				break;

			default:
				cout<<"�п�J1�B2�B3"<<endl;
		}
		cout<<"�ʧ@�����A�O�_�~��(y/n)";
		cin>>again;
		cout<<"============================================================="<<endl;
	}while (again =='y');
	
	system("pause");
	return 0;
}
 
 
 
