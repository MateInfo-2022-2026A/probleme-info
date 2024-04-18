#include <iostream>
using namespace std;
int impare(int n) {

    int a = 0, p = 1, m = n;
    while(n) {
        if(n % 2 == 1) {
            a = n % 10 * p + a;
            p = p * 10;
        }

        a = n % 10 * p + a;
        p = p * 10;
        n /= 10;
    }

    if(a == m)
        return -1;
    else
        return a;
}

int main() {

    int n;
    cin >> n;
    cout << impare(n);

    return 0;
}
