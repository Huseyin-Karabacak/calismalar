//D��ar�dan girilen n say�s�na kadar hem 3'e hemde 5'e b�l�nebilen say�lar� bulan ve bu say�lar� toplayan program.
#include<stdio.h>
int main()
{
	int n,toplam=0,i;
	printf("bir sayi giriniz=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
		printf("%d,",i);
		toplam=i+toplam;
		}
	}
	printf("belirttiginiz sayi i�inde bolunebilenlerin toplami= %d",toplam);
	
	return 0;
}
