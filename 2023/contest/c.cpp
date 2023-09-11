#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maxSubArr(vector<int>& vec) {
    int N = vec.size();
    long long sum = 0;
    long long maxSum = -3e9;
    for (int i = 0; i < N; i++) {
        sum += vec[i];
        maxSum = max(sum, maxSum);
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
}

int main() {
    int T, N, X, maxSum;
    cin >> T;
    for (int z = 0; z < T; z++) {
        cin >> N >> X;
        vector <int> vec(N);
        for (int i = 0; i < N; i++)
            cin >> vec[i];
        maxSum = maxSubArr(vec);
        if (maxSum > 0)
            cout << maxSum * X << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}