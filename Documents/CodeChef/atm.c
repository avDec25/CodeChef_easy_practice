#include<stdio.h>

int main(void) {
	int x;
	double y;

	scanf("%d %lf",&x,&y);
	
	if(x>0 && x<=2000 && y<=2000 && y>=0 && x%5 == 0 && (y-(double)x-0.5)>=0.0)
		printf("%.2lf\n",y-(double)x-0.5);
	else
		printf("%.2lf\n",y);
	return 0;
}
