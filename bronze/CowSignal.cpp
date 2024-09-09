#include<bits/stdc++.h>

using namespace std;

void setIO(string name = "") {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if(name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("cowsignal");
    int M,N,K;
    cin >> M >> N >> K;

    char sheet[M][N];

    for(int i = 0; i < M; i++)
        for(int j = 0; j < N; j++)
            cin >> sheet[i][j];

    for(int i = 0; i < M; i++) {
        string l = "";
        for(int j = 0; j < N; j++) {
            for(int g = 0; g < K; g++) 
                l += sheet[i][j];
        }
        for(int j = 0; j < K; j++)
            cout << l << '\n';
    }
}