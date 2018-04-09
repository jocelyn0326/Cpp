#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
	int price;
	float residualValue,rate,depreciation;
	int year=0;

	cout<<"請輸入物品價格:"<<"";
	cin>>price;
	residualValue=price;
	cout<<"請輸入折舊率%"<<"";
	cin>>rate;
	depreciation= price*rate*0.01; //一年的折舊額 
	while(residualValue>0)
	{
	year+=1;
	residualValue-=depreciation;
	}
	cout<<"每年總共減少了"<<rate<<"%的價值"<<endl;
	cout<<"總共花了"<<year<<"年折舊"<<endl;
	system("pause");
	return 0;
}
