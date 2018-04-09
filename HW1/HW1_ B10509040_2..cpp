#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
	float BMI;
	float height;
	float weight;
	cout<<"請輸入您的身高<單位：公尺>"<<"";
	cin>>height;
	cout<<"請輸入您的體重<單位：公斤>"<<"";	 
	cin>>weight;
	BMI = weight/(height*height);
	cout<<"您的BMI值為："<<BMI<<endl;
	system("pause");
	 return 0;
}
