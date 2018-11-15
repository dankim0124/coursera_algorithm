#include <iostream>
using namespace std;
int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd_fast(int a, int b){
	if(a== 0)
		return b;
	else if(b == 0)
		return a;
	
	int A,B;
	if(a >= b){
		A = a;
		B = b;
	}
	else{
		B = a;
		A = b;
	}
	
	A = A%B;
	return gcd_fast(B,A);
}

int main() {
  int a, b;
  std::cin >> a >> b;
 // std::cout << gcd_naive(a, b) << std::endl;
  cout << gcd_fast(a,b) << endl;
  return 0;
}

