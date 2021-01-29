//Good job! (Max time used: 0.00/1.00, max memory used: 9146368/536870912.)

#include <iostream>
#include <cassert>

int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n) {
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
    // if(n<=1) return n;
	// if(dp[n]!=-1) return dp[n];

    // return dp[n]=fibonacci_fast(n-1)+fibonacci_fast(n-2);
    
 
  
  int f[n+1]; 
  int i; 
  
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 


void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int n = 0;
    std::cin >> n;

    // std::cout << fibonacci_naive(n) << '\n';
    // memset(dp,-1,sizeof(dp));
	// dp[0]=0;
	// dp[1]=1;
    // test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
