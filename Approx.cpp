#include <iostream>
using namespace std;

int main () {
  size_t num = 103993, den = 33102, numDigits = 0;

    int numCases; scanf("%d\n",&numCases);
    while(numCases--){
        num = 103993; den = 33102;
        scanf("%zd",&numDigits);
        printf("%zd", num / den); 
        num = 10*(num % den);
        if(numDigits == 0){printf("\n");continue;}

        printf(".");
        for(size_t k = 0; k < numDigits; k++){printf("%zd", num/den); num = 10 * (num % den);}
        printf("\n");
    }
    return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
