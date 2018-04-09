#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 4 
#define max 5
int  main(void)
{
	float sum[4];
	int score[MAX][max];
	for (int i=1; i<=3 ; i++ )
	{
		for(int j=1; j<=4 ; j++)
		{
			cout<<"請輸入第"<<i<<"班第"<<j<<"位同學成績：";
			cin>>score[i][j];
			sum[i]+= score[i][j];
			}
	
	}
	for (int i=1; i<=3 ; i++){
	cout<<"第"<<i<<"班平均為";
	printf("%.2f\n",sum[i]/4);
	}
	
	system("pause");
	return 0;
}
