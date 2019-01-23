#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int SZ = 200+10;
char bc[SZ];

int main() {
	int i;
	scanf("%s", bc);
	for(i=0; i<strlen(bc); i++) {
		if(bc[i] == '.') printf("0");
		if(bc[i] == '-' && bc[i+1] == '.') {
			printf("1");
			i++;
		}
		if(bc[i] == '-' && bc[i+1] == '-') {
			printf("2");
			i++;
		}
	}
	printf("\n");
	return 0;
}