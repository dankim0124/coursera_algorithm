#include <iostream>
#include <vector>
using namespace std;

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int fibonacci_fast_last_digit(int n) {
	if (n <= 1)
        return n;
        
	else if (n >1){
		vector<int> v(n+1,0);
		v[0] = 0;
		v[1] = 1;
		for(int i =2; i<n+1 ; i++){
			v[i] = (v[i-1] +v[i-2])%10;
		}
		return v[n];
	}
    return 0;
}


int main() {
    int n;
    std::cin >> n;
    int c =  fibonacci_fast_last_digit(n);
    std::cout << c << '\n';
    }
