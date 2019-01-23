#include <iostream>
using namespace std;

int ABS(int x) {return (x<0) ? x*(-1) : x;}

int main() {
	int n, i, j;
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			scanf("%d", &n);
			if(n==1) break;
		}
		if(j<5) break;
	}
	i++;
	j++;
	i = ABS(3-i);
	j = ABS(3-j);
	printf("%d\n", i+j);
	return 0;
}