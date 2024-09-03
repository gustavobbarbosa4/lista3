#include <stdio.h>
int main () {
	int i, n;
	i = 1;
	
	printf("digite um numero inteiro maior que zero: ");
	scanf("%d", &n);
	
	while(i <= n) {
		printf("%d ", i++);
	}
	return 0;
}