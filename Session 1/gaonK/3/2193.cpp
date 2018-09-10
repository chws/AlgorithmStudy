#include <iostream>
using namespace std;

long long arr[91][2];

int main() {
    int N;
    cin >> N;

    arr[1][1] = 1;
    for (int i = 2; i <= N; i++) {
        arr[i][0] = arr[i - 1][0] + arr[i - 1][1];
        arr[i][1] = arr[i - 1][0];
    }

    cout << arr[N][0] + arr[N][1] << '\n';

    return 0;
}