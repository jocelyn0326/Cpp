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
			cout<<"�п�J��"<<i<<"�Z��"<<j<<"��P�Ǧ��Z�G";
			cin>>score[i][j];
			sum[i]+= score[i][j];
			}
	
	}
	for (int i=1; i<=3 ; i++){
	cout<<"��"<<i<<"�Z������";
	printf("%.2f\n",sum[i]/4);
	}
	
	system("pause");
	return 0;
}
