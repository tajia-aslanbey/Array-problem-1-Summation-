#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << abs(sum) << endl;
    return 0;
}
