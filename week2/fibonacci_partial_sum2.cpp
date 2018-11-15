#include <iostream>
#include <vector>
using namespace std;

/*
last digit of Fibonacci is periodic function and cycle is 60.
add_all_fibonacci_last_digit(0,60) is 0
so add_all_fibonacci_last_digit(0,60k) is 0  (when, k is integer)
and add_all_fibonacci_last_digit(0,60k+n) == add_all_fibonacci_last_digit(0,n)

*/
int LDSF(long long A, long long B){
	
	if(B<=2)
		return B;
	
	int temp = (B-A)%60;
	A %= 60;

	
	int fib_first = 0;
	int fib_second = 1;
	int fib_temp = 0;
	int sum = 0;
	

	for(int i = 1; i <= A+temp ; i++){
		
		fib_temp = fib_first;
		fib_first = fib_second;
		fib_second = (fib_second + fib_temp)%10;
		if(i >= A){
			sum+=fib_first;
		
			sum%=10;
		}
	}	
	return sum;
}

int main() {
	// your code goes here
	
	long long n,m;
	cin>> n >> m ;

	cout << LDSF(n,m) << endl;
	return 0;
}