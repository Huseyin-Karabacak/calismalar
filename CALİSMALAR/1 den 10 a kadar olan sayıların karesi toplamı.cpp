//1'ne 10'a kadar olan say�lar�n karelerinin toplam�n� hesaplayan program.
#include<stdio.h>
int main()
{
	int i,sonuc,a;
	for(i=1;i<=10;i++)
	{
	a=i*i;
	sonuc +=a;
	
	}
printf("%d",sonuc);
	
	return 0;
}
