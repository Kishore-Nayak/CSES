#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
    //write your code here
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<m; i++) cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    int ans = 0;
    int i = 0, j = 0;
    while(i<n && j<m){
        if(v2[j] >= v1[i]-k && v2[j] <= v1[i]+k){
            ans++;
            i++;
            j++;
        }
        else if(v2[j] < v1[i]-k) j++;
        else i++;
    }
    
    cout<<ans<<endl;
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
