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
		cout<<"第"<<j+1<<"位員工的薪水"<<salary[j]<<endl;
		
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
			cout<<"給第"<<i+1<<"家員工每位要發多少薪水"<<endl;
			cin>>money;
			stores[i].pay_employee(money);
			}

	}
	void output_stores(){      
	 for(int i=0; i<STORES;i++){
	 	cout<<"第"<<i+1<<"家便利商店的員工薪水資料:"<<endl;
		 stores[i].output_salary();
		 cout<<"這一家便利商店所有員工薪水總和："<<stores[i].salary_sum<<endl; 
	 }
	 cout<<"三家店總金額："<<stores_sum()<<endl;
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
		cout<<"請選擇要執行的工作："<<endl;
		cout<<"1.查看員工薪資\n2.發薪"<<endl;
		cin>>input;

		switch (input){
			case 1:
					enterprise.output_stores();
				break;
			case 2:
				enterprise.pay_stores();
				break;

			default:
				cout<<"請輸入1、2、3"<<endl;
		}
		cout<<"動作完成，是否繼續(y/n)";
		cin>>again;
		cout<<"============================================================="<<endl;
	}while (again =='y');
	
	system("pause");
	return 0;
}
 
 
 
