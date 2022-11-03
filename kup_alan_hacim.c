#include <stdio.h>
// Klavyeden girilen bir kenara göre küpün alanını ve hacmini hesaplar

int main() 

{

 int k;
 
 printf("kupun bir kenar uzunlugunu girin: ");
 scanf("%d",&k);
 
 printf("kupun alani: %d\n",6*k*k);
 printf("kupun hacmi: %d",k*k*k);
 
 return 0;

}