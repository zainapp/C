#include<stdio.h>

int main(){
	
	char cumle[100];   //metin girmesini iste kullan�c�dan ka� kelime oldu�unu buldur
	
	printf("cumle giriniz:");
	
	gets(cumle);
	
	int i;
	
	int kelimesayisi=1;
	
	for(i=0;cumle[i]!='\0';i++){
		
		if(cumle[i]==' ')
		
		{
			kelimesayisi++;
		}
		
	}
	printf("%d",kelimesayisi);
	
	return 0;
}
