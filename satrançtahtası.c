#include<stdio.h>

int main(){
	
	int i;
	int j;
	
	for(i=1;i<=8;i++){
		
		for(j=1;j<=8;j++){
			
			 
		if((i+j)%2==0){
		  printf("%c",219);	
		  }
	    else{ 
	    printf(" ");
	   
	}
		}
		printf("\n");
	}
	
	return 0 ;
}
