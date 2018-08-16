#include <stdio.h>

#define con(a,b) a ## b
#define mkstr(x) #x

int main(){

    printf("%s\n", (con(mkstr(a\),b)));
}
