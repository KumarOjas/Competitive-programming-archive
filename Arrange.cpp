#include <iostream>
#include <cmath>


int binaryReverse(int input, int numBits){
    int output = 0;
    for(int k = 0; k < numBits; k++){output = 2 * output + (input % 2); input /= 2;}
    return output;
}


int main(){

    int numCases; scanf("%d",&numCases);
    while(numCases--){
        int numBits;scanf("%d ",&numBits);
        size_t length = (size_t)pow(2.0,numBits);
        char *message = new char[length];  scanf("%s",message);
        for(int k = 0; k < length ; k++){printf("%c",message[binaryReverse(k,numBits)]);}
        printf("\n");
    }
    return 0;
}
