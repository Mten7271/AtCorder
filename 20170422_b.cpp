#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define PRINT(n) cout << n << endl;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    string A, B;
    cin >> A >> B;
    int num_A = int(A.size());
    int num_B = int(B.size());
    if(num_A > num_B){
        cout << "GREATER" << endl;
        return 0;
    }else if(num_A < num_B){
        cout << "LESS" << endl;
        return 0;
    }else{
        REP(i, num_A){
            if((A.at(i)-'0') > (B.at(i)-'0')){
                cout << "GREATER" << endl;
                return 0;
            }else if((A.at(i)-'0') < (B.at(i)-'0')){
                cout << "LESS" << endl;
                return 0;
            }
        }
    }
    cout << "EQUAL" << endl;
    return 0;
}