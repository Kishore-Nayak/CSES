#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;

	if(str.length()==1){
		cout<<1<<endl;
	}
	else{
		int ans = INT_MIN;
		int count = 1;
		for(int i=1; i<str.length(); i++){
			if(str[i]!=str[i-1]){
				ans = max(count,ans);
				count = 1;
			}
			else count++;
		}
		ans = max(count,ans);
		cout<<ans<<endl;
	}
	return 0;
}