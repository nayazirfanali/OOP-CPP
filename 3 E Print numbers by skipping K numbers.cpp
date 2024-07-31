#include <iostream>
using namespace std;

class Number {
protected:
    int M, N, K;
public:
    Number(int m, int n, int k) : M(m), N(n), K(k) {}
};

class Skipper : public Number {
public:
    Skipper(int m, int n, int k) : Number(m, n, k) {}
    void print_numbers() {
        for (int i = M; i <= N; i += K) {
            cout << i << ", ";
        }
        cout << endl;
    }
};

int main() {
    int M = 50, N = 100, K = 7;
    Skipper skipper(M, N, K);
    skipper.print_numbers();
    return 0;
}
