//���NE G�NDER�LEN KEL�MEN�N PAL�NDROM OLUP OLMADI�INI KONTROL EDEN FONKS�YON

#include<stdio.h>

char palindrom_bul(char metin[]){
	
	int sayac = 0 , i ;
	
	int boyut = 0 ;
	
	while( metin[boyut] != NULL ){
		
		boyut++;
	}
		printf("girdiginiz metin %d boyutludur\n", boyut);


	for(i=0;i<boyut;i++){
			
	if(metin[i] == metin[boyut-i-1] ){
		
		sayac++;
	}		
		}	

	if(sayac==boyut){
		
		printf("palindromdur.");
		
	}else{
		
		printf("palindrom degildir");
	}
}

int main(){
	
    char metin[50];
    
	printf("metin gir:");
	
	//scanf("%c",&metin[50]);
 	 gets(metin);
 	 
	palindrom_bul(metin);
	
	return 0;
}



