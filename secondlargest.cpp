// Created by Himanshu Khadke
#include<bits/stdc++.h>
#define Fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define endl "\n"
#define mod7 1000000007
using namespace std;
int grid[1001][1001];
 
 
 
 
void solve(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)cin>>arr[i];
	int l1=arr[0],l2=arr[0];
	for(int i=0;i<n;++i){
		if(arr[i]>l1){
			l2=l1;
			l1=arr[i];
		}else if (arr[i]>l2){
			l2=arr[i];
		}
	}
	cout<<l2<<endl;
}
 
 
 
int32_t  main(){
	Fastio
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
