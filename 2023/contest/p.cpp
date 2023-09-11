#include<iostream>
using namespace std;

int main(){
    int T, N;
    cin >> T;
    while(T){
        T--;
        cin >> N;
        cout << N * (N-1) << endl;
    }
    return 0;
}