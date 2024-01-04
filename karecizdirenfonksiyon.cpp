//KULLANICIDAN ALINAN KENAR UZUNLUÐUNA GÖRE EKRANA YILDIZLA ‘*’ KARE ÇÝZEN FONKSÝYONU YAZINIZ

#include<stdio.h>

	int kare_ciz(int a){
	
	int i,k;
	for(i=0;i<a;i++){
		
		for(k=0;k<a;k++){
			
		printf(" *");
			
		}
   		 printf("\n");
	}
	
}

	int main(){
	
	int boyut ;
	
	printf("karenini uzunlugu kac olsun :");
	
	scanf("%d",&boyut);
	
	kare_ciz(boyut);
	
	return 0;
}
