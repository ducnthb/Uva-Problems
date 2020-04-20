#include <bits/stdc++.h>
using namespace std;
int G[3], B[3], C[3];
int main(){
    ifstream cin ("uva102.i1");
    ofstream cout("uva102.o1");
    while(cin >> B[0] >> G[0] >> C[0] >> B[1] >> G[1] >> C[1]>> B[2]>> G[2]>>C[2]){
        int ans = 0x7FFFFFFF, tmp;
        string s = "";
        //BCG
        tmp = B[1] + B[2] + C[0] + C[2] + G[0] + G[1];
        if(tmp < ans) ans = tmp, s = "BCG";
        //BGC
        tmp = B[1] + B[2] + G[0] + G[2] + C[0] + C[1];
        if(tmp < ans) ans = tmp, s = "BGC";
        //CBG
        tmp = C[1] + C[2] + B[0] + B[2] + G[0] + G[1];
        if(tmp < ans) ans = tmp, s = "CBG";
        //CGB
        tmp = C[1] + C[2] + G[0] + G[2] + B[0] + B[1];
        if(tmp < ans) ans = tmp, s = "CGB";
        //GBC
        tmp = G[1] + G[2] + B[0] + B[2] + C[0] + C[1];
        if(tmp < ans) ans = tmp, s = "GBC";
        //GCB
        tmp = G[1] + G[2] + C[0] + C[2] + B[0] + B[1];
        if(tmp < ans) ans = tmp, s = "GCB";
        cout<<s<<' '<<ans<<endl;
    }
    return 0;
}
