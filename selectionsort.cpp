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

	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
	for(auto i:arr){
		cout<<i<<" ";
	}  
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
