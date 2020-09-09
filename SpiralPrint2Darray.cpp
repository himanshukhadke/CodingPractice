// Created by Himanshu Khadke
#include<bits/stdc++.h>
#define Fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define int long long
#define endl "\n"
#define mod7 1000000007
using namespace std;
int a[1001][1001];

void spiralPrint(int n,int m){
	int sr=0,er=n-1,ec=m-1,sc=0;
	while(sr<=er and sc<=ec){
		for(int i=sc;i<=ec;++i){
			cout<<a[sr][i]<<" ";
		}
		sr++;
		for(int i=sr;i<=er;++i){
			cout<<a[i][ec]<<" ";
		}
		ec--;
		if(sr<er){
			for(int i=ec;i>=sc;--i){
				cout<<a[er][i]<<" ";
			}
			er--;
		}
		if(sc<ec){
			for(int i=er;i>=sr;--i){
				cout<<a[i][sc]<<" ";
			}
		}	
		sc++;
	}
}

void solve(){
	int n,m;
	cin>>n>>m;
	int  k=1;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j)
			a[i][j]=k++;
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	spiralPrint(n,m);
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
