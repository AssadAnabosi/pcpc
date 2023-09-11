#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    int sum = 0;
    cin >> N >> K;
    // 2d vector
    vector<vector<char>> vec(N, vector<char>(N));

    // read input
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> vec[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        int k = 0;
        int missedThieves = 0;
        for (int j = 0; j < N; j++) {
            if (vec[i][j] == 'P') {
                // reset k to K
                k = K;
                if (missedThieves) {
                    // if there exists thieves behind P, add min(missedThieves, K) to sum
                    // where missedThieves is the number of thieves behind P
                    // and we take the minumum with K because we can only catch thieves that are K blocks away
                    sum += min(missedThieves, K);
                    // reset the thieves counter
                    missedThieves = 0;
                }
            }
            else {
                if (k) {
                    k--;
                    sum++;
                }
                else {
                    missedThieves++;
                }
            }
        }
    }

    cout << sum << endl;

    return 0;

}