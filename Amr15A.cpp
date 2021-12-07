#include <cstdio>

int main () {
  
  int n;
  scanf ("%d\n",&n);
  int ready(0);
  while (n--){
   int a ;
    scanf("%d",&a);
    ready +=(a%2)?(-1):1;
  }
  
  puts((ready >0) ?"Ready for battle ":"Not ready");
  
  
  return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
