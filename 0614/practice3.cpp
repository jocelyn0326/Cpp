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
//		cout<<"商品"<<i+1<<"價格為:"<<price[i]<<" 銷售量為:"<<sold[i]<<endl; 
//		cout<<"商品"<<i+1<<"銷售總額為:"<<sold[i]*price[i]<<endl;
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
//	cout<<"請輸入一個數字，將傳回索引值:";
//	cin>>input;
//	for(int i=0;i<10;i++){
//		if(input == nums[i]){
//		cout<<"索引值為"<<i<<endl;
//		exist =1;
//		}
//	}
//	if(exist == 0)
//	cout<<"搜尋值不存在此陣列"<<endl; 


//	srand(time(NULL));
//	int target = (rand()%100)+1;
//	int input;
//	int max=100;
//	int min=0;
//	do{
//		cout<<"請猜一個數值:";
//		cin>>input;
//		if(input == target){
//			cout<<"本輪中及密碼為:"<<target<<endl; 
//			cout<<"猜對值囉!!爆掉!!"<<endl;
//			 break;
//		}else if (input > target){
//			max =input;
//			cout<<"小一點，範圍在:"<<min<<"~"<<input<<endl;
//			continue; 
//		}else if (input < target){
//			min = input;
//			cout<<"大一點，範圍在:"<<input<<"~"<<max<<endl;
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
	cout<<"由小到大排序後:\n";
	for(int i = 0;i<NUM;i++){
	cout<<scores[i]<<endl; 
	}
	

	system("pause");
	return 0;
}
