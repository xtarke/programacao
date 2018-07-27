  #include <stdio.h>
  
  #define concat(a,b)  a ## b
 
  int main()
  {
    int xy = 10;
    printf("%d \n", concat(x,y));
  }
