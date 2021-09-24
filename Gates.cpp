#include <bits/stdc++.h>
using namespace std;
int main ()
{
int t,n,k;
  cin >>t;
  while(t--){
    cin>>n>>k;
    char A[n+1];
    for (int i=0;i<n;i++)
       cin>>A[i];
        int j = 1;
        int m = K;
        while(K--) {
            if(A[N-j]=='H') {
                for(int p=0;p<(N-j);p++) {
                    if(A[p]=='H')
                        A[p]='T';
                    else
                        A[p]='H';
                }
            }
            j++;
        }
        int c=0;
        for(int i=0;i<N-m;i++) {
            if(A[i]=='H')
                c++;
        }
            cout<<c<<endl;
        }
}
