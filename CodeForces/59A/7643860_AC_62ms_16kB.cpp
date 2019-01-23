#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int SZ = 100+10;
char s[SZ];

int main() {
	int i, lc=0, uc=0;
	scanf("%s", s);
	for(i=0; i<strlen(s); i++) {
		if(s[i]>='a') {
			lc++;
		}else{
			uc++;
		}
	}
	
	if(uc>lc) {
		for(i=0; i<strlen(s); i++) {
			s[i] = toupper(s[i]);
		}
	}else{
		for(i=0; i<strlen(s); i++) {
			s[i] = tolower(s[i]);
		}
	}
	
	printf("%s\n", s);
	return 0;
}