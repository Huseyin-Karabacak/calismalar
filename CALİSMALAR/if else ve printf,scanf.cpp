//Ko�ul deyimi �al��mas�
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
				printf("t�m say�lar�n toplam�:");
				printf("%.2f",sonuc);
			}
			else
			{
				sonuc=x+y+z-w;
				printf("d�rd�nc� girilen say�y� ilk ���nden ��kar�lmas�:");
				printf("%.2f",sonuc);
			}
		}
		else
		{
			sonuc=(x+y)-(z+w);
			printf("birinci ile ikinci giri�lerin tolam�ndan ���nc� ve d�rdunc� giri�lerin fark�:");
			printf("%.2f",sonuc);
		}
	}
	if(x==y)
	printf("birinci ve ikinci giri�leriniz ayn�.");
	
	else
	{
		a=pow(y,3)/x ;
		b=z*w;
	sonuc= a/b;
	printf("ikinci girilenin kupunun birinci girilene b�l�nmesinden kalan�n ���nc� ve d�rd�nc� girilen de�erlerin �arp�m�na b�l�m�:");
	printf("%.4f",sonuc);
    }
	
	return 0;
}
