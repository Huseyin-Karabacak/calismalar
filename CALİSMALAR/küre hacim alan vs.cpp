//yarýçapý girilen bir kürenin alaný ve hacmi ve bu kürenin merkez dairenin alaný ve çevresinin hesabý
#include<stdio.h>
#define PI 3.14
#include<math.h>
int main()
{
	float r,hacim,kurealan,dairealan,dairecevre;
	printf("yaricap degerini giriniz:");
	scanf("%f",&r);
	
	hacim=(4/3.0)*PI*pow(r,3);
	kurealan=4*PI*pow(r,2);
	dairealan=PI*pow(r,2);
	dairecevre=PI*r*2;
	printf("kurenin hacmi= %.3f\n",hacim);
	printf("kurenin alani= %.3f\n",kurealan);
	printf("dairenin alani= %.3f\n",dairealan);
	printf("dairenin cevresi= %.3f\n",dairecevre);
	
	return 0;
}
