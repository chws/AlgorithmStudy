#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        dp[i] = arr[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j < i; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[j] + arr[i], dp[i]);
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (ans < dp[i]) {
            ans = dp[i];
        }
    }
    cout << ans << '\n';

    return 0;
}