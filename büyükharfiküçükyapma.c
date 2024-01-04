#include<stdio.h>

int main(){
	int i;
	char metin[100] , degisen_metin[100];
	int metin_boyutu = 0;
	
	printf("DEGISTIRILECEK OLAN METNI GIRINIZ !!! \n");  
	gets(metin); 
	 

	for( i=0;metin[i]!=NULL;i++){ 
		metin_boyutu++;
	}
	
	
	for( i=0;i<=metin_boyutu;i++){ 
		
		if(metin[i]>=65 && metin[i]<=90){ 
			degisen_metin[i] = metin[i]+32; 
		}
		else{
			degisen_metin[i] = metin[i]-32; 
		}
	}
	
	
	printf("DUZENLENMIS METIN !!! \n"); 
	for( i=0;i<metin_boyutu;i++){
		printf("%c",degisen_metin[i]); 
	}


}
