//ax^2+bc+c þeklindeki denklemin köklerini bulan program
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2,delta;
	printf ("a sayisini giriniz=");
	scanf("%d",&a);
	printf ("b sayisini giriniz=");
	scanf("%d",&b);
	printf ("c sayisini giriniz=");
	scanf("%d",&c);
	
	delta= pow(b,2)-4*a*c;
	printf("delta= %.2f\n",delta);
	
	if(delta>0)
	{
	  x1=(-b+ (sqrt(delta)))/2*a;
	  x2=(-b- (sqrt(delta)))/2*a;	
	  printf("girmis oldugunuz verilere bu denklemin iki reel koku var bunlar: x1 = %.2f, x2= %.2f ",x1,x2);
	}
	if(delta==0)
	{
		x1=-b/(2*a);
		x2=x1;
		printf("girmis oldugunuz verilere gore tek kok vardir  x1 = x2 = %.2f ",x2);
	}
	else
	{
		printf("bu denklemin reel bir koku yok");
	}
	
	return 0;
}
