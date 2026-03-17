#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int nombre;
	srand(time(NULL));
	nombre = rand() % 2000;
	printf("Nombre aleatoire : %d\n", nombre);

	int billet;
	printf("Donner la valeur du billet que vous allez donner pour payer : \n");
	scanf("%d", &billet);
	return 0;
}

