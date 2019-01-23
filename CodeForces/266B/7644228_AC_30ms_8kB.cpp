#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int SZ = 50+10;
char s[SZ];

void swap(int i, int j) {
	char temp;
	temp = s[i];
	s[i] = s[i+1];
	s[i+1] = temp;
}

int main() {
	int i, n, t;
	char iFalse;
	scanf("%d%d%c%s", &n, &t, &iFalse, s);
	while(t--) {
		for(i=0; i<strlen(s)-1; i++) {
			if(s[i] == 'B' && s[i+1] == 'G') {
				swap(i,i+1);
				i++;
			}
		}
	}
	printf("%s\n", s);
	return 0;
}