#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*kullan�c�dan dizi uzunlugunu (n) al�n�z. N adet say� alarak diziye ekleyiniz. Diziyi ters s�rada yazd�r�n�z ve dizinin elemanlar�n� toplay�n�
 ekrana yazan C program� kodu yaz�n�z*/
 
 
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
