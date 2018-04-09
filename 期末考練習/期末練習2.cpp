#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>

using namespace std;

class Student{
	public:
		string name;//學生姓名
		int ch,eng,ma,sum;//學生中英數成績
		double average = 0;
	public:
		void set_data(string n,int chinese, int english, int math){
			name=n;
			ch=chinese;
			eng=english;
			ma=math;
			sum=ch+eng+ma;
			average=sum/3;
		}
};

class Class                          
{
     public:
	 Student students[3];
     double avg;//該班平均
	 int top,top_index;//該班最高分以及最高分的位置
     
   public: 
    Class(){
    	for(int i=0;i<3;i++){
    		students[i].name="";
			students[i].ch=0;
    		students[i].eng=0;
    		students[i].ma=0;
    	}
    	avg=0;
    	top=0;
    	top_index=0;
	
	}

	double operator+(Class &win)    // 定義「+」運算子的多載，兩班平均相加除2(5%)
	{
		return (this->cal()+win.cal())/2;
	}
	 
    int operator>(Class &win)  // 定義運算子「>」的多載，確定最高分在哪一班(5%)
    {
    	return this->findtop() > win.findtop();

	}
    
	double cal(void)//計算平均該班的平均(5%)
    {	
    	avg=0;
       	for(int i =0;i<3;i++){
       	avg+=students[i].average;
		}
		return (avg/3);
	}
    	
	    
	int findtop(void)//找出該班的最高分(10%)
    {
		top=0;
		top_index=0;
    	for(int i = 0;i<3;i++){
    		if(students[i].sum > top){
    			top=students[i].sum;
    			top_index=i;
			}
		}
		return top;
	}
    
};

int main (void){
	Class classes[2];
	string n;
	int c,e,m;
	
	for (int i =0;i<2;i++){
		for (int j = 0;j<3;j++){
			cout<<"請輸入第"<<i+1<<"班第"<<j+1<<"位同學的姓名：";
			cin>>n;
			cout<<"請依序輸入該同學的國、英、數成績(用空格隔開)：";
			scanf("%d %d %d",&c, &e, &m);
			classes[i].students[j].set_data(n,c,e,m);
		}
	}


//	classes[0].findtop();
//	classes[1].findtop();
	if (classes[0].cal()>classes[1].cal()){
		cout<<"最高分在第一班，第一名的同學為"<<classes[0].students[classes[0].top_index].name<<"總分為"<<classes[0].students[classes[0].top_index].sum<<endl;
	}else{
		cout<<"最高分在第二班，第一名的同學為"<<classes[1].students[classes[1].top_index].name<<"總分為"<<classes[0].students[classes[1].top_index].sum<<endl;

	}
	cout<<"第一班平均為:"<<classes[0].cal()<<endl;
	cout<<"第二班平均為:"<<classes[1].cal()<<endl;
	cout<<"全校平均為："<<classes[0]+classes[1]<<endl; 
	 
	system("pause");
	return 0;
}

