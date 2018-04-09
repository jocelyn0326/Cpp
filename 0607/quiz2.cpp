#include <iostream>
#include <cstdlib>
#include<string>
using namespace std;

class Computer{
	public:
		string brand,cpu;
		int money, storage, ram;
	public:
	Computer(string brand="ASUS", string cpu="i5", int ram=0,int storage=0, int money=0):brand(brand),cpu(cpu),ram(ram),storage(storage),money(money){

		}
	void show_member(void){
		cout<<"\nBrand:"<<brand<<"\nCPU:"<<cpu<<"\nRAM:"<<ram<<"\nStorage:"<<storage<<"\nTotal Price:"<<money<<"\n\n";
	}
	
	void calculate(){
		
		if(cpu == "i3"){
			money +=20000;
		}else if(cpu =="i5"){
			money+=23000;
		}else if(cpu =="i7"){
			money+=25000;
		}
		
		if(ram>=8){
			money+=3000;
		}else{
			money+=1500;
		}
		
		if(storage>=80){
			money+=4000;
		}else{
			money+=2000;
		}
		

	}
	int operator>(Computer &win){
		return this->money > win.money?this->money:win.money;
	}
	
	Computer operator+(Computer &win){
		int r,s;
		r=this->ram+win.ram;
		s=this->storage+win.storage;
		return Computer("Asus",this->cpu,r,s,0);
	}
		
};
int main (void){
	Computer com1,com2,com3;
	cout<<"Com1 Brand:";
	getline(cin,com1.brand);
	cout<<"Com1 CPU:";
	getline(cin,com1.cpu);
	cout<<"Com1 RAM:";
	cin>>com1.ram;
	cout<<"Com1 Storage:";
	cin>>com1.storage;
	
	com1.calculate();
	
	cout<<"\nCom2 Brand:";
	cin>>com2.brand;
	cout<<"Com2 CPU:";
	cin>>com2.cpu;
	cout<<"Com2 RAM:";
	cin>>com2.ram;
	cout<<"Com2 Storage:";
	cin>>com2.storage;
	
	com2.calculate();
	
	com3=com1+com2;
	
	if(com1>com2){
		com3.storage=com1.storage;
		com3.money=com1.money;
	}else{
		com3.storage=com3.storage;
		com3.money=com2.money;
	}
	
	com1.show_member();
	com2.show_member();
	com3.show_member();
			
	system("pause");
	return 0;

}

