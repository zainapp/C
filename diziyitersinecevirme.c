//Dýþarýdan girilen n elemanlý bir diziyi tersine çeviren program
#include<stdio.h>

int main(){
	
	int i,dizi[6];
	
	for(i=0;i<6;i++){
		
	printf("%d.ci elemani gir :",i+1);
	scanf("%d",&dizi[i]);	
}

   for(i=5;i>=0;i--){
   	
   printf("%d",dizi[i]); 	
}

	return 0;
}
