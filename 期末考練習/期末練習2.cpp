#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>

using namespace std;

class Student{
	public:
		string name;//�ǥͩm�W
		int ch,eng,ma,sum;//�ǥͤ��^�Ʀ��Z
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
     double avg;//�ӯZ����
	 int top,top_index;//�ӯZ�̰����H�γ̰�������m
     
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

	double operator+(Class &win)    // �w�q�u+�v�B��l���h���A��Z�����ۥ[��2(5%)
	{
		return (this->cal()+win.cal())/2;
	}
	 
    int operator>(Class &win)  // �w�q�B��l�u>�v���h���A�T�w�̰����b���@�Z(5%)
    {
    	return this->findtop() > win.findtop();

	}
    
	double cal(void)//�p�⥭���ӯZ������(5%)
    {	
    	avg=0;
       	for(int i =0;i<3;i++){
       	avg+=students[i].average;
		}
		return (avg/3);
	}
    	
	    
	int findtop(void)//��X�ӯZ���̰���(10%)
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
			cout<<"�п�J��"<<i+1<<"�Z��"<<j+1<<"��P�Ǫ��m�W�G";
			cin>>n;
			cout<<"�Ш̧ǿ�J�ӦP�Ǫ���B�^�B�Ʀ��Z(�ΪŮ�j�})�G";
			scanf("%d %d %d",&c, &e, &m);
			classes[i].students[j].set_data(n,c,e,m);
		}
	}


//	classes[0].findtop();
//	classes[1].findtop();
	if (classes[0].cal()>classes[1].cal()){
		cout<<"�̰����b�Ĥ@�Z�A�Ĥ@�W���P�Ǭ�"<<classes[0].students[classes[0].top_index].name<<"�`����"<<classes[0].students[classes[0].top_index].sum<<endl;
	}else{
		cout<<"�̰����b�ĤG�Z�A�Ĥ@�W���P�Ǭ�"<<classes[1].students[classes[1].top_index].name<<"�`����"<<classes[0].students[classes[1].top_index].sum<<endl;

	}
	cout<<"�Ĥ@�Z������:"<<classes[0].cal()<<endl;
	cout<<"�ĤG�Z������:"<<classes[1].cal()<<endl;
	cout<<"���ե������G"<<classes[0]+classes[1]<<endl; 
	 
	system("pause");
	return 0;
}

