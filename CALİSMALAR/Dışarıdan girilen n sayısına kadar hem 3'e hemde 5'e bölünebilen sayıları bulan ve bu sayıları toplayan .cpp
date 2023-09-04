//Dýþarýdan girilen n sayýsýna kadar hem 3'e hemde 5'e bölünebilen sayýlarý bulan ve bu sayýlarý toplayan program.
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
	printf("belirttiginiz sayi içinde bolunebilenlerin toplami= %d",toplam);
	
	return 0;
}
