//Banka uygulamasý
#include<stdio.h>
int main()
{
	int islem;
	int bakiye=1000.00 ;
	int tutar;
	printf("ISLEMLER\n");
	printf("1 :Para cekme\n 2 :Para yatirma\n 3 :EFT,HAVALE yapma\n 4 :Bakiye sorulama\n 5 :Kart iade\n\n\n");
	printf("yapmak istediginiz islemi seciniz:");
	scanf("%d",&islem);
	
	switch (islem)
	{
		case 1 :
			printf("cekmek istediginiz miktari giriniz: ");
			scanf("%d",&tutar);
			if (tutar>bakiye)
			{
				printf("bakiyeniz yetersiz lutfen tekrar deneyiniz...\n");
				break;
			}
			
			bakiye= bakiye-tutar;
			printf("isleminiz gerceklestirildi ,kalan bakiyeniz : %d",bakiye);
			break;
		
		case 2 :
			printf("yatirmak istediginiz miktari giriniz");
		    scanf("%d",&tutar);
			bakiye +=tutar;
			printf("isleminiz gerceklestirildi ,yeni bakiyeniz : %d",bakiye);
			break;
		
		case 3 :
			printf("EFT veya HAVALE yapmak istediginiz miktari giriniz");
			scanf("%d",&tutar);
			if (tutar>bakiye)
			{
				printf("bakiyeniz yetersiz lutfen tekrar deneyiniz...\n");
				break;
			}
			bakiye -=tutar;
			printf("isleminiz gerceklestirildi ,kalan bakiyeniz : %d",bakiye);
			break;
		case 4 :
			
			printf("suan ki mevcut bakiyeniz : %d",bakiye);
			break;
			
		case 5 :
			printf("Kartiniz iade ediliyor, iyi günler...");
			break;
			
		default:
			
			printf("Gecersiz bir islem tusladiniz,lutfen menu üzerindeki islemlerden birini tuslayýnýz.");
			break;
			
		
	}

return 0;	
}
