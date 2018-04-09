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
		cout<<"第"<<i+1<<"位員工的薪水"<<salary[i]<<endl;
		cout<<"所有員工薪資為："<<salary_sum<<endl;
		
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
		cout<<"1.查看各員工工資\n2.發薪\n3.查看人事總成本"<<endl;
		cout<<"請輸入：";
		cin>>input;

		switch (input){
			case 1:
				store.output_salary();
				break;
			case 2:
				store.pay_employee();
				break;
			case 3:
				cout<<"人事總成本為："<<store.return_salary_sum()<<endl;
				break;
			default:
				cout<<"請輸入1、2、3"<<endl;
		}
		cout<<"動作完成，是否繼續(y/n)";
		cin>>again;
	}while (again =='y');
	
	system("pause");
	return 0;
}
 
