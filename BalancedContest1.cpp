#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int uli;
int main()
  
{
  jaadu;
  int t;
  cin>>t;
  while(t--){
    
    int n,i;
    uli p;
    cin>>n>>p;
    uli arr;
    uli cakewalk=p/2;
    uli hard=p/10;
    int cakeWalkCount = 0, hardCount = 0;
		for(i=0;i<n;i++){
			cin>>arr;
			if(arr >= cakeWalk){
				cakeWalkCount++;
			}else if(arr <= hard){
				hardCount++;
			}
		}
		if(cakeWalkCount == 1 && hardCount == 2){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}








}
