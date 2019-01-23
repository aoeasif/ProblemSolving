#include <iostream>
#include <cstdio>
using namespace std;

const int SZ = 3;
int p[SZ][SZ], b[SZ][SZ]={{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

void toggle(int i, int j) {
	if(b[i][j] == 1) {
		b[i][j] = 0;
	}else{
		b[i][j] = 1;
	}
}

int main() {
	int i, j;
	
	for(i=0; i<SZ; i++) {
		for(j=0; j<SZ; j++) {
			scanf("%d ", &p[i][j]);
		}
	}
	
	for(i=0; i<SZ; i++) {
		for(j=0; j<SZ; j++) {
			if(p[i][j]%2 == 0 || p[i][j] == 0) {
				continue;
			}
			toggle(i,j);
			if(j+1<SZ) {toggle(i,j+1);}
			if(j-1>-1) {toggle(i,j-1);}
			if(i+1<SZ) {toggle(i+1,j);}
			if(i-1>-1) {toggle(i-1,j);}
		}
	}
	
	for(i=0; i<SZ; i++) {
		for(j=0; j<SZ; j++) {
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}