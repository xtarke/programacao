#include <stdio.h>

int maior (int a, int b){
    if (a > b)
        return a;
    return b;
}



int main(){
    
    int m = maior(100,1000);
    
    printf("%i é o maior!\n", m);
    
    return 0;
}
