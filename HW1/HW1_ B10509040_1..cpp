#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
	int price;
	float residualValue,rate,depreciation;
	int year=0;

	cout<<"�п�J���~����:"<<"";
	cin>>price;
	residualValue=price;
	cout<<"�п�J���²v%"<<"";
	cin>>rate;
	depreciation= price*rate*0.01; //�@�~�������B 
	while(residualValue>0)
	{
	year+=1;
	residualValue-=depreciation;
	}
	cout<<"�C�~�`�@��֤F"<<rate<<"%������"<<endl;
	cout<<"�`�@��F"<<year<<"�~����"<<endl;
	system("pause");
	return 0;
}
