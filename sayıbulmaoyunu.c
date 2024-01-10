#include <stdio.h>
int main(){

	int sayi,r,index=0;
	char k;
	do{
		srand(time(NULL));
		r=rand()%100;
		system("CLS");
		
		do{
			printf("Sayi giriniz:");
			 scanf("%d",&sayi);
			index++;
			if (sayi>r){
			 printf("Daha Kucuk Bir Sayi Giriniz\n");
			 }
			else if (sayi<r) {
			printf("Daha buyuk bir sayi giriniz\n");
			}
			else {
			printf("Tebrikler %d. Tahmininizde Buldunuz\n",index);
			}
		}while(sayi!=r);
			printf("Devam etmek ister misiniz?");
			k=getch();	
		}
		while(k =='E'|| k=='e');
	return 0;
	}

//sayý bulma oyunu
