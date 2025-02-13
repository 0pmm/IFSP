#include <stdio.h>

int main() {

	int participantes, voltas, t, somat = 0, menort = 100000000, ganhador = 0;
	scanf("%d%d", &participantes, &voltas);
	for (int i = 1; i <= participantes; i++) {
		somat = 0;
		for (int j = 1; j <= voltas; j++) {
			scanf("%d", &t);
			somat += t;
		}
		if (somat < menort) {
			menort = somat;
			ganhador = i;
		}
	}
	printf("%d", ganhador);
	return 0;
}