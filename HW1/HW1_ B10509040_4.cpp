#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
	int num;
	cout<<"叫块计タ俱计"<<"";
	cin>>num;
	
	cout<<"计" <<num/1000<<endl;
	cout<<"κ计" <<(num%1000)/100<<endl;
	cout<<"计" <<(num%100)/10<<endl;
	cout<<"计" <<num%10<<endl;
	system("pause");
	return 0;
}
 
