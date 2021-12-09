#include <stdio>

int main ()
{
  int numcases;
  scanf("%d",&numcases);
  unsigned long long output, N;
  while (numcases--)
  {
        
        scanf("%lld",&N);
        output = 250*(N-1) + 192;
        printf("%lld\n", output);
  }
}
