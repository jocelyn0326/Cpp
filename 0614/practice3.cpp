#include <iostream>
#include <cstdlib>
#include <time.h>
#define NUM 5
using namespace std;
int main(void){
//	int sold[NUM];
//	int price[NUM]={15,20,25,30,35};
//	srand(time(NULL));
//
//	for(int i=0;i<NUM;i++){
//		sold[i]=(rand()%100+1);
//		cout<<"�ӫ~"<<i+1<<"���欰:"<<price[i]<<" �P��q��:"<<sold[i]<<endl; 
//		cout<<"�ӫ~"<<i+1<<"�P���`�B��:"<<sold[i]*price[i]<<endl;
//	}
//	


//	int scores[NUM]={70,65,85,95,35};
//	int max=0;
//
//	for(int i =0;i<NUM;i++){
//		if(scores[i]>max){
//			max = scores[i];
//		}
//		
//	}
//	cout<<"MAX="<<max<<endl;	
//	


//	int nums[]={3,9,56,78,28,79,54,82,17,99};
//	int input;
//	bool exist;
//	cout<<"�п�J�@�ӼƦr�A�N�Ǧ^���ޭ�:";
//	cin>>input;
//	for(int i=0;i<10;i++){
//		if(input == nums[i]){
//		cout<<"���ޭȬ�"<<i<<endl;
//		exist =1;
//		}
//	}
//	if(exist == 0)
//	cout<<"�j�M�Ȥ��s�b���}�C"<<endl; 


//	srand(time(NULL));
//	int target = (rand()%100)+1;
//	int input;
//	int max=100;
//	int min=0;
//	do{
//		cout<<"�вq�@�Ӽƭ�:";
//		cin>>input;
//		if(input == target){
//			cout<<"�������αK�X��:"<<target<<endl; 
//			cout<<"�q����o!!�z��!!"<<endl;
//			 break;
//		}else if (input > target){
//			max =input;
//			cout<<"�p�@�I�A�d��b:"<<min<<"~"<<input<<endl;
//			continue; 
//		}else if (input < target){
//			min = input;
//			cout<<"�j�@�I�A�d��b:"<<input<<"~"<<max<<endl;
//			continue;
//			} 
//	}while(input != target);
//	
	
	
	int scores[NUM]={70,65,85,95,35};
	int temp = 0;
	for(int i=0;i<NUM;i++){
		for(int j=0;j<NUM;j++){
			if(scores[i]<scores[j]){
			temp = scores[j];
			scores[j]=scores[i];
			scores[i]=temp;
			}
		}
	} 
	cout<<"�Ѥp��j�Ƨǫ�:\n";
	for(int i = 0;i<NUM;i++){
	cout<<scores[i]<<endl; 
	}
	

	system("pause");
	return 0;
}
