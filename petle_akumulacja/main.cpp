#include <cmath>
#include <iostream>
using namespace std;

int suma_szeregu(int n)
{
    //    1+2+3+4+5+..+n
    int acc = 0;
    for (int i = 0; i <= n; i++) {
        acc += i;
    }
    return acc;
}
int silnia_rec(int n)
{
    if (n == 0)
        return 1;
    return n * silnia_rec(n - 1);
}
int silnia(int n)
{
    //    1*2*3*4*5*..+n
    int acc = 1;
    for (int i = 1; i <= n; i++) {
        acc *= i;
    }
    return acc;
}

double pi(int n)
{
    double acc = 0;
    for (int i = 1; i < n; i++) {
        acc += pow(-1, i - 1) / (2 * i - 1);
    }
    return 4 * acc;
}

double pi(double precyzja)
{
    double acc = 0;

    for (int i = 1; 1.0 / (2 * i - 1) >= precyzja; i++) {
        acc += pow(-1, i - 1) / (2 * i - 1);
    }

    return 4 * acc;
}
int main()
{
    cout << "suma szeregu 5: " << suma_szeregu(5) << endl;
    cout << "silnia 5 " << silnia(1000000) << endl;
    cout << "silnia 5 rekursywna" << silnia_rec(1000000) << endl;

    for (int i = 1000; i < 10000; i += 1000) {
        std::cout << i << " - " << pi(i) << std::endl;
    }

    std::cout << pi(0.00001);
    return 0;
}
