#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
	float BMI;
	float height;
	float weight;
	cout<<"�п�J�z������<���G����>"<<"";
	cin>>height;
	cout<<"�п�J�z���魫<���G����>"<<"";	 
	cin>>weight;
	BMI = weight/(height*height);
	cout<<"�z��BMI�Ȭ��G"<<BMI<<endl;
	system("pause");
	 return 0;
}
