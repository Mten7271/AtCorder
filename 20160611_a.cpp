#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;

    int ans = A*B*2 + A*C*2 + B*C*2;

    cout << ans << endl;
}