#include<stdio.h>
int main()
{
	int x=75;
	char y1= 72;
	char y2='H';
	float z=5.25;
	double w= 0.25;
	
	printf("%d %c %d %.1f %.2f %s\n",x,y1,y2,z,w,"merhaba");
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	return 0;
}

