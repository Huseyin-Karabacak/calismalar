//d��ar�dan girilen n say�s�n�n fakt�riyelini hesaplayan program.
#include<stdio.h>
int main()
{
	int n,i;
	float sonuc;
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	sonuc=1;
	for(i=1;i<=n;i++)
	{
		sonuc =sonuc*i;
	}
	
	printf("girmis oldugunuz sayinin faktoriyel degeri = %d",sonuc);
	
	return 0;
}
