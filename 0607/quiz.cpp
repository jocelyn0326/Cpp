#include <iostream>
#include <cstdlib>
using namespace std;
int main (void){
	int num[4]={2, 7, 11, 15};
	int target=0;
	bool again = 0;
	cout<<"請輸入目標值:";
	cin>>target;
		for (int i = 0; i<4;i++){
			if(again == 1){
				break;
			}			
			for(int j =0 ; j<4;j++){
			if(i == j){
			continue;
			}else if(num[i]+num[j] == target){
				cout<<"Because num["<<i<<"]+num["<<j<<"]="<<target<<","<<endl;
				cout<<"return["<<i<<","<<j<<"]"<<endl;
				if(num[i]+num[j] == target){
					again =1;
				}
				break;
			}
			
		}
	}
	if (again == 0){
		cout<<"no result"<<endl;
	}
	system("pause");
	return 0;

}
