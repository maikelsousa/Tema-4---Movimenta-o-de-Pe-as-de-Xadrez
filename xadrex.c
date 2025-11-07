
#include <stdio.h>
#include <stdlib.h>

void moverCavalo(char direcao1[], char direcao2[], int casas1, int casas2)
{
	if (casas1 > 0 && casas1 < 3)
	{
		int i;
		for ( i = 0; i <= casas1; i++)
		{
			printf("Movendo Cavalo para %s\n", direcao1);

			while (casas2 > 0)
			{
				printf("Movendo Cavalo para %s\n", direcao2);
				casas2--;
			}
			break;
		}

	}
	else
	{
		printf("Movimento invalido para o Cavalo. Tente novamente.\n");
		return 0;
	}
}

void moverRei(char direcaoRei[])
{

	printf("Movendo Rei para %s\n", direcaoRei);
}

void movimentoBispo(int option, int casas)
{
	switch (option)
	{
	case 1: // Diagonal Esquerda Cima
	// Utilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.
	// o loop externo é o ultimo movimento do bispo, e o loop interno é o primeiro movimento do bispo.
	printf("Movendo Bispo para Diagonal Esquerda Cima , %d casa(s)\n ");
		for (int i = 0; i < casas; i++)
		{
			printf("Movendo Bispo para Cima , %d casa(s)\n ", i);
			for (int j = 0; j < casas; j++)
			{
				printf("Movendo Bispo para Esquerda , %d casa(s)\n ", j);
			}
		}
		break;

	case 2: // Diagonal Esquerda Baixo
	printf("Movendo Bispo para Diagonal Esquerda Baixo , %d casa(s)\n ");

		for (int i = 0; i < casas; i++)
		{
			printf("Movendo Bispo para Baixo , %d casa(s)\n ", i);
			for (int j = 0; j < casas; j++)
			{
				printf("Movendo Bispo para Esquerda , %d casa(s)\n ", j);

			}
		}
		break;
	case 3: // Diagonal Direita Cima
		printf("Movendo Bispo para Diagonal Direita Cima , %d casa(s)\n ");
		for (int i = 0; i < casas; i++)
		{
			printf("Movendo Bispo para Cima , %d casa(s)\n ", i);
			for (int j = 0; j < casas; j++)
			{
				printf("Movendo Bispo para Direita , %d casa(s)\n ", j);
			}	
		}
		break;
	case 4: // Diagonal Direita Baixo
		printf("Movendo Bispo para Diagonal Direita Baixo , %d casa(s)\n ");
		for (int i = 0; i < casas; i++)
		{
			printf("Movendo Bispo para Baixo , %d casa(s)\n ", i);
			for (int j = 0; j < casas; j++)
			{
				printf("Movendo Bispo para Direita , %d casa(s)\n ", j);
			}
		}
		break;
	
	default:
		break;
	}
}

void movimentoTorre(char direcao[], int casas)
{
	for (int i = 0; i < casas; i++)
	{
		printf("Movendo Torre para %s , %d casa(s)\n ", direcao, i);
	}
}

void movimentoRainha(char direcao[], int casas)
{
	for (int i = 0; i < casas; i++)
	{
		printf("Movendo Rainha para %s , %d casa(s)\n ", direcao, i);
	}
}

//entrada principal do programa

int main()
{
	int peca;

	int i = 0;

	printf("Digite qual peça voce quer mover\n");
	printf("1-Bispo\n2-Torre\n3-Cavalo\n4-Rainha\n5-Rei\n6-Peão\n");
	scanf("%d", &peca);

	switch (peca)
	{
	case 1: // o movimento do Bispo
		printf("Movimento do Bispo:\n");
		printf("O Bispo pode mover-se qualquer número de casas diagonalmente.\n");
		printf("Digite a direção para mover o Bispo (1-Diagonal Esquerda Cima, 2-Diagonal Esquerda Baixo,3-Diagonal Direita Cima, 4-Diagonal Direita Baixo):\n");
		int option;
		scanf("%d", &option);

		switch (option)
		{
		case 1:
			printf(option, "Diagonal Esquerda Cima");
			break;
		case 2:
			printf(option, "Diagonal Esquerda Baixo");
			break;
		case 3:
			printf(option, "Diagonal Direita Cima");
			break;
		case 4:
			printf(option, "Diagonal Direita Baixo");
			break;
		default:
			printf("Opcao invalida. Tente novamente.\n");
			return 0;
		}

		int casas;
		printf("Quantas casas deseja mover:\n");
		scanf("%d", &casas);
		if (casas < 1) {
    	printf("Movimento inválido para o Bispo. Tente novamente.\n");
		} else {
	    movimentoBispo(option, casas);
		}

		break;

	case 2: //  movimento da Torre
		printf("Movimento da Torre:\n");
		printf("A Torre pode mover-se qualquer número de casas horizontalmente ou verticalmente.\n");
		printf("Digite a direção para mover a Torre (Cima, Baixo, Direita, Esquerda):\n");
		char direcaoTorre[10];
		scanf("%s", direcaoTorre);
		int casasTorre;
		printf("Quantas casas deseja mover:\n");
		scanf("%d", &casasTorre);
		if (casasTorre < 0) {
    	printf("Número inválido, digite novamente > 0\n");
		} else {
    	movimentoTorre(direcaoTorre, casasTorre);
		};

		break;

	case 3: // Movimento do Cavalo

		char direcao1[10];
		char direcao2[10];

		int casas1;
		int casas2;

		printf("Movimento do Cavalo:\n");
		printf("O Cavalo move-se em um padrão de 'L', ou seja, duas casas em uma direção e depois uma casa perpendicularmente.\n");
		printf("qual linha sera o primeiro movimento?\n");
		printf("Digite Cima, Baixo, Direita ou Esquerda\n");
		scanf("%s", direcao1);

		printf("Quantas casas deseja mover: (ate 2)\n");
		scanf("%d", &casas1);

		printf("qual lado sera o segundo movimento?\n");
		printf("Digite Cima, Baixo, Direita ou Esquerda\n");
		scanf("%s", direcao2);

		printf("Quantas casas? (ate 2)\n");
		scanf("%d", &casas2);
		moverCavalo(direcao1, direcao2, casas1, casas2);

	case 4:
		// Lógica para o movimento da Rainha

		printf("Movimento da Rainha:\n");
		printf("A Rainha pode mover-se em qualquer direção.\n");
		printf("Digite a direção desejada:\n");
		char direcaoRainha[30];
		scanf("%s", direcaoRainha);

		int casasRainha;
		printf("Quantas casas deseja mover:\n");
		scanf("%d", &casasRainha);
		if (casasRainha < 1) {
    printf("Movimento inválido para a Rainha. Tente novamente.\n");
	} else {
    movimentoRainha(direcaoRainha, casasRainha);
    movimentoTorre(direcaoRainha, casasRainha);
	}
	break;

	case 5: // Lógica para o movimento do Rei
		printf("Movimento do Rei:\n");
		printf("O Rei pode mover-se uma casa em qualquer direção.\n");
		printf("Digite a direção para mover o Rei (Cima, Baixo, Direita, Esquerda, Diagonal):\n");
		char direcaoRei[30];
		scanf("%s", direcaoRei);
		moverRei(direcaoRei);
		break;

	default:
		printf("Peça inválida. Tente novamente.\n");
		return 0;
	}
	return 0;
}