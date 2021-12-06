#include <cstdio>
#include <iostream>
#include <vector>


int main () {
  
  const int N=32;
  std::vector<int64_t>a(N,0);
  scanf("%lld",&n);
  while (n--){
    
    scanf("%lld",&x);
    for (int p=0;p<n;p++){
      a[p] +=(x%2);
      x/=2;
      
      if (x<=0){break;}
      
    }
  
  }
      
   int_t sum(0);
   int_t binPower(1);
  
  for (int p=0;p<n;p++)
  {
   sum += (a[p] * (a[p] - 1) / 2) * binPower;
        binPower *= 2;
  }
      
   printf("%lld\n",sum);
  
  
  return 0;
      
      
}    
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
