//fibonacci sayý dizisi oluþturma
#include<stdio.h>
int main()
{
	int birincisayi=1,ikincisayi=1,i;
	printf("%d\n%d\n",birincisayi,ikincisayi);
	
	for(i=0;i<12;i++)
	{
		int a = ikincisayi;
		
		ikincisayi += birincisayi;
		
		birincisayi = ikincisayi;
		
		printf("%d\n",ikincisayi);
	}
	
}
