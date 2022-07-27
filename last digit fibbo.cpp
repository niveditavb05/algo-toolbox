#include <cassert>
#include <iostream>

int get_fibonacci_last_digit(int n) {
    if (n <= 1) return n;

    long long prev = 0;
    long long curr = 1;
    long long tmp_prev = 0;

    for (int i = 0; i < n - 1; ++i) {
        tmp_prev = prev;
        prev= curr;
        curr = (tmp_prev + curr) % 10;
    }

    return curr;
}

int main() {
    int n;
    std::cin >> n;

    int d = get_fibonacci_last_digit(n);

    std::cout << d << "\n";
}
