//girilen sayının basamaklarındaki rakamların toplamını ve basamak sayısını veren program.
#include<stdio.h>
int main()
{
	int n,basamak=0,toplam=0;
	printf("sayiyi giriniz:");
	scanf("%d",&n);
	
	do
	{
		toplam += (n%10);
		basamak++;
		
		n = n/10;
	}
	while (n>0);

	printf("rakamlarin toplami : %d , %d basamakli bir sayidir. ",toplam,basamak);
	
	return 0;

}
