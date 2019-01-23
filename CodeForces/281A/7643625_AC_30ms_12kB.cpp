#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int SZ = 1e3+10;
char word[SZ];

int main() {
	scanf("%s", word);
	word[0] = toupper(word[0]);
	printf("%s\n", word);
	return 0;
}