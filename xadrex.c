#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int peca;

	int i = 0;

	printf("Digite qual peça voce quer mover\n");
	printf("1-Bispo\n2-Torre\n3-Cavalo\n4-Rainha\n5-Rei\n6-Peão\n");
	scanf("%d", &peca);

	switch (peca)
	{
	case 1:
		// Lógica para o movimento do Bispo
		break;

	case 2:
		// Lógica para o movimento da Torre
		break;

	case 3:

		char direcao1[10];
		char direcao2[10];

		int casas1;
		int casas2;

		printf("Movimento do Cavalo:\n");

		printf("qual linha sera o primeiro movimento?\n");
		printf("Digite Cima, Baixo, Direita ou Esquerda\n");
		scanf("%s", &direcao1);

		printf("Quantas casas deseja mover: (ate 2)\n");
		scanf("%d", &casas1);

		printf("qual lado sera o segundo movimento?\n");
		printf("Digite Cima, Baixo, Direita ou Esquerda\n");
		scanf("%s", direcao2);

		printf("Quantas casas? (ate 2)\n");
		scanf("%d", &casas2);

		if (casas1 > 0 && casas1 < 3)
		{

			for (i = 0; i <= casas1; i++)
			{
				printf("Movendo Cavalo para %s\n", direcao1);

				while (casas2 > 0)
				{
					printf("Movendo Cavalo para %s\n", direcao2);
					casas2--;
				}
			}

			break;
	case 4:
			// Lógica para o movimento da Rainha
			break;
		} else {
        printf("Movimento invalido para o Cavalo. Tente novamente.\n");
		
        }
        
	{
		
	}
    return 0;
}