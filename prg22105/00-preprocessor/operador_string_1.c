  #include <stdio.h>
  
  #define CONCAT(A,B)  A ## B
 
  int main()
  {
    int xy = 10;
    printf("%d \n", CONCAT(x,y));
  }
