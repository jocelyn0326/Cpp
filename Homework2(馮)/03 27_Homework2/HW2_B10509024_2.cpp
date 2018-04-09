# include <iostream>
# include <stdlib.h>
#include <stdio.h>
using namespace std;

#define ROW 3
#define COL 4

void average(int arr[ROW][COL]);

int main(void){
	int class_grade[ROW][COL];
	
	cout << "請輸入成績：\n" << endl; 
	
	for(int i = 0 ; i <= (ROW-1); i++){
		for(int j = 0 ; j <= (COL-1); j++){
			cout << "　　請輸入第" << (i+1) << "班的第" << (j+1) << "位同學的成績：";
			cin >> class_grade[i][j];
		}
		cout << endl;	
	}
	
	cout << "\n============================================\n\n計算結果：" << endl;
	average(class_grade);
	return 0;
} 

void average(int arr[ROW][COL]){
	
	for(int i = 0 ; i <= (ROW-1); i++){
		int sum = 0;
		
		for(int j = 0 ; j <= (COL-1); j++){
			sum += arr[i][j];
		}
		cout << "　　第"<< (i+1) << "班學生的平均成績為：";
		printf("%.2f",(float)((float)sum / COL));	
		cout << endl;
	}
}
