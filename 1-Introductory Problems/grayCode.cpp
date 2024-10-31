//TIME LIMIT EXCEEDED (BRUTE FORCE)
void solution(){
    int n;
    cin>>n;
    vector<string> v;
    string str = "";
    for(int i=0; i<n; i++) str += "0";
    v.push_back(str);
    for(int i=1; i<pow(2,n); i++){
        for(int i=n-1; i>=0; i--){
            string temp = str;
            if(str[i]=='0') str[i]='1';
            else str[i]='0';
            if(find(v.begin(),v.end(),str) != v.end()){
                str = temp;
                continue;
            }
            else{
                v.push_back(str);
                break;
            }
        }
    }
    for(auto it : v) cout<<it<<endl;
}



//OPTIMAL SOLUTION
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

vector<string> generateGray(int n){
    if(n==1){
        vector<string> v;
        v.push_back("0");
        v.push_back("1");
        return v;
    }
    vector<string> k = generateGray(n-1);
    
    int x = k.size();
    for(int i=x-1; i>=0; i--) k.push_back("1"+k[i]);
    for(int i=0; i<x; i++) k[i] = "0"+k[i];
    return k;
}

void solution(){
    //write your code here
    int n;
    cin>>n;
    vector<string> ans = generateGray(n);
    for(auto it : ans) cout<<it<<endl;
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
