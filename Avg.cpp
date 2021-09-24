#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int t;
 cin>>t;
 while (t--){
     int n,k,v;
     cin>>n,k,v;
     vector<int> arr(n);
		uli sum = 0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum += arr[i];
		}
		int remSum = v*(n+k) - sum;
		if(remSum <= 0 || remSum%k != 0){
			cout<<"-1"<<endl;
		}else{
			cout<<remSum/k<<endl;
		}
	}
	return 0;
}
