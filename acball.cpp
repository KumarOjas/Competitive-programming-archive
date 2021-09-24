#include <bits/stdc++.h>
using namespace std;
int main ()
{
   jaadu;
  int t;
  cin>>t;
  while(t--)
  {
  string x,y,result="";
    cin>>x,y;
    int n=x.size();
    for (int i=0;i<n;i++)
    {
  if(x[i] == 'W' && y[i] == 'W'){
				result += 'B';
			}else if(x[i] == 'B' && y[i] == 'B'){
				result += 'W';
			}else{
				result += 'B';
			}
		}
		cout<<result<<endl;
	}
	return 0;
}    
}
