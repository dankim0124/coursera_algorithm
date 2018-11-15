#include <iostream>
using namespace std;

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
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

long long lcm_fast( int a, int b){
	int gcd = gcd_fast(a,b);
	int atemp = a/gcd;
	int btemp = b/gcd;
	return (long long)gcd*atemp*btemp;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  //std::cout << lcm_naive(a, b) << std::endl;
  cout << lcm_fast(a,b) << endl;
  return 0;
}
