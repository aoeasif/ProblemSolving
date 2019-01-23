#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int year, y1, y2, y3, y4;
	scanf("%d", &year);
	do{
		year++;
		y4 = year;
		y1 = y4%10;
		y4 /= 10;
		y2 = y4%10;
		y4 /= 10;
		y3 = y4%10;
		y4 /= 10;
	}while(y1==y2 || y1==y3 || y1==y4 || y2==y3 || y2==y4 || y3==y4 );
	printf("%d\n",year);
	return 0;
}