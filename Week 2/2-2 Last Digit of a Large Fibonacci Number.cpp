//Good job! (Max time used: 0.00/1.00, max memory used: 9113600/536870912.)

#include <iostream>

int get_fibonacci_last_digit(long long n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;
    int temp;

    for (int i = 2; i <= n; ++i) {
       temp = (previous + current)%10;
       previous = current;
       current = temp;
    }

    return temp;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';
    
    return 0;
}
