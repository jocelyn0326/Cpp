#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Person{
	public:
		string name;
		int age;
		double BMI,height,weight;
	Person(string n,int a,double h,double w):name(n),age(a),height(h),weight(w){
		
	}
	double countBMI(double h,double w){
		BMI = w/((h/100)*(h/100));
		return BMI;
	}
	
		
};

class Son :public Person{
	public:
		string major;
	public:
		Son(string n,int a,double h,double w,string m):Person(n,a,h,w){
		major=m;
		cout<<"Son's name:"<<n;
		cout<<" age:"<<a<<endl;
		cout<<"height:"<<h;
		cout<<" weight:"<<w;
		cout<<"\nBMI:"<<countBMI(h,w)<<endl;
		cout<<"Major in "<<major<<endl;
		
	}
};
class Daughter : public Person{
	public:
		string major,boyfriend;
	public:	
		Daughter(string n,int a,double h,double w,string b):Person(n,a,h,w){
		boyfriend = b;
		cout<<"\nDaughter's name:"<<n;
		cout<<" age:"<<a<<endl;
		cout<<"height:"<<h;
		cout<<" weight:"<<w;
		cout<<"\nBMI:"<<countBMI(h,w)<<endl;
		cout<<"Boyfriend:"<<boyfriend;
	}
};
int main(void){
	Son son("Tom",23,180,70,"MIS");
	Daughter daughter("Mary",18,163,50,"Jack");
	system("pause");
	return 0;
}
