#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*kullanýcýdan dizi uzunlugunu (n) alýnýz. N adet sayý alarak diziye ekleyiniz. Diziyi ters sýrada yazdýrýnýz ve dizinin elemanlarýný toplayýný
 ekrana yazan C programý kodu yazýnýz*/
 
 
int main() {
	
	int uzun,  i, j, top=0 ;
	int dizi [uzun];
	printf("dizinizin uzunlugunu giriniz: \n");
	scanf("%d", &uzun);
	
	
	
		
	for (i=0; i<uzun; i++){
   	printf("eklemek istediginiz sayilar: \n");
	scanf("%d", &dizi[i]);
	top += dizi[i];
		
	}

	printf(" \n ters hali : \n");
	
	
	  for (j=uzun-1; j>=0; j--){
	  	printf(" %d", dizi[j]);
	  }
	  
	  
	printf(" \n dizinin eleman toplami: \n %d", top);
	 
	
	
	
	
	return 0;
}
