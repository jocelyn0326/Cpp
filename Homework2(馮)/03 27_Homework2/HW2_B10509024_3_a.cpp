# include <iostream>
# include <stdlib.h>
using namespace std;

int rFibonacci(int n); 

int main(void){
	while(true){
		cout << "�п�J�w�p���Fibonacci�ƦC���ĴX��(��J0�Y����)�G";
		int arr_length = 0;
		cin >> arr_length;
		
		
		if (arr_length == 0)
			break;
		
		
		cout << "==>fib(" << arr_length << ") = " <<  rFibonacci(arr_length) << "\n\n\n";
	}
	return 0;
}

int rFibonacci(int n){
	int arr_fibon[n];
	
	if (n == 1)
		arr_fibon[0]= 0;
	else if (n == 2){
		arr_fibon[0]= 0;
		arr_fibon[1]= 1;
	}else if (n > 2){
		arr_fibon[0]= 0;
		arr_fibon[1]= 1;
		
		for (int i = 2 ; i <  n; i++){
			arr_fibon[i] = arr_fibon[i-1] + arr_fibon[i-2];
		} 
	}
	
	return arr_fibon[n-1];
}
