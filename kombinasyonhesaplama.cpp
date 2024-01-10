#include<stdio.h>

int faktoriyelhesapla(int n){
	int fakt=1;
	for(int i=1;i<=n;i++){
		fakt*=i;
	}
	return fakt;
}
float kombinasyon(int a,int b){
	
	int fakt=faktoriyelhesapla(a);
	int fakt2=faktoriyelhesapla(b);
	int fakt3=faktoriyelhesapla(a-b);
	
	float kombinasyon=fakt/(fakt2*fakt3);
	
	return kombinasyon;
}

int main(){

	int elemansayisi,secmesayisi;
	printf("eleman sayisi girin: ");
	scanf("%d",&elemansayisi);
	printf("secme sayisi girin: ");
	scanf("%d",&secmesayisi);
	
	float sonuc=kombinasyon(elemansayisi,secmesayisi);
	printf("kombinasyon:%.2f",sonuc);
	
	return 0;
}
