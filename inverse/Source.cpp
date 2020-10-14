#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char a[1000], * p;
	scanf("%s", a);
	p = a;
	for (int i = 0; i < strlen(a); i++) {
		if (*p > 64 && *p < 91) {
			printf("%c", *p + 32);
		}
		else if (*p > 96 && *p < 123) {
			printf("%c", *p - 32);
		}
		p++;
	}
	return 0;
}