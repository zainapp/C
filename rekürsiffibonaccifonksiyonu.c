#include <stdio.h>
//rek�rsif fibonacci

      int fib(int);
      
      int main(){
      	
     	printf("%d", fib(5));
    }
	  int fib(int num){
	  	
 		if(num == 0){
 			
			return 0;
			
	}else if(num == 1){
		
		return 1;
	}
	return fib(num-1) + fib(num-2);
}
