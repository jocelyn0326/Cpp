# include <iostream>
# include <stdlib.h>
#include <stdio.h>
using namespace std;

#define ROW 3
#define COL 4

void average(int arr[ROW][COL]);

int main(void){
	int class_grade[ROW][COL];
	
	cout << "�п�J���Z�G\n" << endl; 
	
	for(int i = 0 ; i <= (ROW-1); i++){
		for(int j = 0 ; j <= (COL-1); j++){
			cout << "�@�@�п�J��" << (i+1) << "�Z����" << (j+1) << "��P�Ǫ����Z�G";
			cin >> class_grade[i][j];
		}
		cout << endl;	
	}
	
	cout << "\n============================================\n\n�p�⵲�G�G" << endl;
	average(class_grade);
	return 0;
} 

void average(int arr[ROW][COL]){
	
	for(int i = 0 ; i <= (ROW-1); i++){
		int sum = 0;
		
		for(int j = 0 ; j <= (COL-1); j++){
			sum += arr[i][j];
		}
		cout << "�@�@��"<< (i+1) << "�Z�ǥͪ��������Z���G";
		printf("%.2f",(float)((float)sum / COL));	
		cout << endl;
	}
}
