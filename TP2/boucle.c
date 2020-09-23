#include<stdlib.h>
#include<stdio.h>

void somme1() {
	int somme = 0;
	int n;
	for (n = 1; n <= 100; n++) {
		somme = somme + n;
	}
	printf("%d %d", somme, n);
}

void somme2() {
	int somme = 0;
	int n=1;
	while (n <= 100) {
		somme = somme + n;
		n = n + 1;
		
	}
	printf("%d %d", somme,n);
}

void somme3() {
	int n = 1;
	int somme = 0;
	do {
		n = n + 1;
		somme = somme + n;
	} while (n < 100);
	printf("%d %d", somme, n);
}

void depassement() {
	unsigned short int somme = 0;
	int n = 0;
	while (USHRT_MAX - somme>=n) {
		n = n + 1;
		somme = somme + n;

	}
	printf("%u %d %d", USHRT_MAX, somme, n);
}

void demande() {
	unsigned short somme = 0;
	unsigned short n;
	scanf_s("%hu", &n);
	for (int i = 1; i <= n; i++) {
		somme = somme + i;
	}
	printf("%d %d", somme, n);

}

void recommencer() {
	unsigned short somme = 0;
	unsigned short n;
	printf("Rentrer une valeur de n ");
	scanf_s("%hu", &n);
	while (n > 361) {
		printf("Valeur trop grande, redonner une valeur de n ");
		scanf_s("%hu", &n);
	}
	for (int i = 1; i <= n; i++) {
		somme = somme + i;
	}
	printf("La somme est de %d et le n vaut %d", somme, n);

}

int main() {
	recommencer();
}
