#include<stdio.h>
int main(){
	
	int i,a,b,enkucuksayi,sonuc = 1;
	
	printf("iki sayi giriniz:");
	
	scanf("%d %d",&a ,&b);
	
		if(a > b){
			
		enkucuksayi = b;	
	}
	else if(b > a){
		
		enkucuksayi = a;	
	}else{
		
	enkucuksayi = a;	
	}
			for(i=2 ; i<= enkucuksayi ; i++){
	
	if(a%i== 0 && b%i== 0){
		
		sonuc = i;	
	}	
	}
	
	printf("sonuc=%d",sonuc);
	
	return 0;
}
