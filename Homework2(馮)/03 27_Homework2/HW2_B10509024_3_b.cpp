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
	
	if (n == 1)
		return 0;
	else if (n == 2){
		return 1;
	}else if (n > 2){
		return rFibonacci(n-1) + rFibonacci(n-2);
	}
	
	
}
