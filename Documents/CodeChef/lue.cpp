#include<stdio>

using namespace std;

void main() {
	int i=0;
	while(1) {
		scanf("%d", &i);
		if(i==42) break;
		printf("%d\n", i);
	}
}
