  #include <stdio.h>
  
  #define MKSTR(S) # S
 
  int main()  {    
      printf(MKSTR(Teste de string));
            
      return 0;
  }
