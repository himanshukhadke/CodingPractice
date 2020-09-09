// Created by Himanshu Khadke
#include<bits/stdc++.h>
#define Fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define endl "\n"
#define mod7 1000000007
using namespace std;
int grid[1001][1001];
 


 bool compare(pair<int ,int > a,pair<int,int> b){
 	if(a.first==b.first){
 	      return b.second>a.second;
 	}else {
 		return a.first<b.first;
 	}
 }
 
 
void solve(){
	int n;cin>>n;
	vector<pair<int,int> > arr;
	arr.push_back({2,2});
	arr.push_back({1,7});
	arr.push_back({2,3});	
	arr.push_back({1,6});
	arr.push_back({2,4});
	arr.push_back({1,8});
	sort(arr.begin(),arr.end(),compare);
	for(auto i:arr){
		cout<<i.first<<" "<<i.second<<endl;
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
