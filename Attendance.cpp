#include <bits/stdc++.h>
using namepsace std;
int main ()
{
  jaadu;
  int t;
  cin>>t;
  while (t--)
    
  {
  int n;
    cin>>n;
    std::vector<string> firstName(n), lastName(n);
		unordered_map<string, int>hash;
		for(int i=0;i<n;i++){
			cin>>firstName[i];
			cin>>lastName[i];
			hash[firstName[i]]++;
		}
		for(int i=0;i<n;i++){
			if(hash[firstName[i]] <= 1){
				cout<<firstName[i]<<endl;
			}else{
				cout<<firstName[i]<<" "<<lastName[i]<<endl;
			}
		}
	}
	return 0;
}
