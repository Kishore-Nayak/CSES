#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
    //write your code here
    int n;
    cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    for(int i=2; i<=n; i+=2) cout<<i<<" ";
    for(int i=1; i<=n; i+=2) cout<<i<<" ";
    cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //for calculating run time
    clock_t z = clock();
    
    //no of testcases
    int t = 1;
    // cin>>t;
    
    //initiating loop for every test case
    while(t--) solution();
    
    cerr<<"Run Time : "<<((double)(clock()-z)*1000/CLOCKS_PER_SEC)<<" ms";

    return 0;
}
