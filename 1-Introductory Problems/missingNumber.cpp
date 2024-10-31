#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long sum = 0;
    for(int i=1; i<t; i++){
        int n;
        cin>>n;
        sum += n;
    }
    long long totalSum = (long long)t*(t+1)/2;
    cout<<totalSum-sum<<endl;
    return 0;
}