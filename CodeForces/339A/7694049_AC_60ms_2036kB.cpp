#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int SZ = 100+10;
char str[SZ];

void SWAP(int i, int j) {
	int temp = str[i];
	str[i] = str[j];
	str[j] = temp;
}

int main() {
	int i, j, len;

	scanf("%s", str);

	len = strlen(str);
	for (i = 0; i < len; i += 2) {
		for (j = i + 2; j < len; j += 2) {
			if (str[i] > str[j]) SWAP(i, j);
		}
	}

	printf("%s\n", str);

    return 0;
}
