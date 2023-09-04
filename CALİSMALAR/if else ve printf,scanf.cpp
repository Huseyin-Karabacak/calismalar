//Koþul deyimi çalýþmasý
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,z,w,sonuc,a,b;
	printf("1.sayiyi giriniz:");
	scanf("%.2f\n",&x);
	printf("\n");
	printf("2.sayiyi giriniz:");
	scanf("%.2f\n",&w);
	printf("3.sayiyi giriniz:");
	scanf("%.2f\n",&z);
	printf("4.sayiyi giriniz:");
	scanf("%.2f\n",&w);
	printf("girilen sayilar:%f %f %f %f",x,y,z,w);
	if(x>y)
	{
		if(y>z)
		{
			if(z>w)
			{
				sonuc=x+y+z+w;
				printf("tüm sayýlarýn toplamý:");
				printf("%.2f",sonuc);
			}
			else
			{
				sonuc=x+y+z-w;
				printf("dördüncü girilen sayýyý ilk üçünden çýkarýlmasý:");
				printf("%.2f",sonuc);
			}
		}
		else
		{
			sonuc=(x+y)-(z+w);
			printf("birinci ile ikinci giriþlerin tolamýndan üçüncü ve dörduncü giriþlerin farký:");
			printf("%.2f",sonuc);
		}
	}
	if(x==y)
	printf("birinci ve ikinci giriþleriniz ayný.");
	
	else
	{
		a=pow(y,3)/x ;
		b=z*w;
	sonuc= a/b;
	printf("ikinci girilenin kupunun birinci girilene bölünmesinden kalanýn üçüncð ve dördðncð girilen deðerlerin çarpýmýna bölümü:");
	printf("%.4f",sonuc);
    }
	
	return 0;
}
