#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
	int num;
	cout<<"�п�J�@�ӥ|��ƪ�����ơG"<<"";
	cin>>num;
	
	cout<<"�d��Ƭ��G" <<num/1000<<endl;
	cout<<"�ʦ�Ƭ��G" <<(num%1000)/100<<endl;
	cout<<"�Q��Ƭ��G" <<(num%100)/10<<endl;
	cout<<"�Ӧ�Ƭ��G" <<num%10<<endl;
	system("pause");
	return 0;
}
 
