#include <stdio.h>

int main(void)
{
	int scoreA = 0;
	int scoreB = 0;
	int player2_score = 0;

	int wanna_start;

	int response1;
	int response2;
	int response3;
	int response4;
	int response5;
	int response6;
	int response7;
	int response8;
	int response9;
	int response10;

	int response1pB;
	int response2pB;
	int response3pB;
	int response4pB;
	int response5pB;
	int response6pB;
	int response7pB;
	int response8pB;
	int response9pB;
	int response10pB;

	printf("Sejam bem-vidos ao C Quiz!\n");
	printf("O Quiz pedagógico da Linguagem C\n");

	printf("\n1 - Verdadeiro / Sim \n0 - Falso / Não\n");

	printf("\nDeseja começar?\n");
	scanf("\nDeseja começar? %d\n", &wanna_start);

	// 1º Question
	printf("\nA linguagem C é interpretada?\n");
	printf("\nJogador A:");
	scanf("%d", &response1);
	scanf("%d", &response1); // Não sei o porquê, mas funcionou (POG na veia);
	printf("Jogador B:");
	scanf("%d", &response1pB);

	if (response1 == 0)
	{
		scoreA++;
	}
	if (response1pB == 0)
	{
		scoreB++;
	}

	// printf("\n1º Question:  %d/10", scoreA);

	// 2º Question
	printf(
			"\nA C suporta recursão, ou seja, uma função pode chamar a si mesma.\n");
	printf("\nJogador B:");
	scanf("%d", &response2pB);
	printf("Jogador A:");
	scanf("%d", &response2);

	if (response2 == 1)
	{
		scoreA++;
	}
	if (response2pB == 1)
	{
		scoreB++;
	}

	// printf("\n2º Question:  %d/10", scoreA);

	// 3º Question
	printf("\nA linguagem C é a mesma coisa que C#.\n");
	printf("\nJogador A:");
	scanf("%d", &response3);
	printf("Jogador B:");
	scanf("%d", &response3pB);

	if (response3 == 0)
	{
		scoreA++;
	}
	if (response3pB == 0)
	{
		scoreB++;
	}

	// printf("\n3º Question:  %d/10", scoreA);

	// 4º Question
	printf("\nOs comentários de linha única em C são colocados APENAS com apenas "
				 "barra barra? \n");
	printf("\nJogador B:");
	scanf("%d", &response4pB);
	printf("Jogador A:");
	scanf("%d", &response4);

	if (response4 == 0)
	{
		scoreA++;
	}
	if (response4pB == 0)
	{
		scoreB++;
	}

	// printf("\n4º Question:  %d/10", scoreA);

	// 5º Question
	printf("\nA linguagem C não tem o tipo de dado booleano. \n");
	printf("\nJogador A:");
	scanf("%d", &response5);
	printf("Jogador B:");
	scanf("%d", &response5pB);

	if (response5 == 1)
	{
		scoreA++;
	}
	if (response5pB == 1)
	{
		scoreB++;
	}

	// 6º Question
	printf("\nO C permite a declaração de funções sem especificar o tipo de "
				 "retorno, assumindo um tipo padrão.\n");
	printf("\nJogador B:");
	scanf("%d", &response6pB);
	printf("Jogador A:");
	scanf("%d", &response6);

	if (response6 == 0)
	{
		scoreA++;
	}
	if (response6pB == 0)
	{
		scoreB++;
	}

	// 7º Question
	printf("\nO C permite a criação de ponteiros, que são variáveis que "
				 "armazenam endereços de memória. \n");
	printf("\nJogador A:");
	scanf("%d", &response7);
	printf("Jogador B:");
	scanf("%d", &response7pB);

	if (response7 == 1)
	{
		scoreA++;
	}
	if (response7pB == 1)
	{
		scoreB++;
	}

	// 8º Question
	printf("\nA linguagem C suporta programação orientada a objetos.\n");
	printf("\nJogador B:");
	scanf("%d", &response8pB);
	printf("Jogador A:");
	scanf("%d", &response8);

	if (response8 == 0)
	{
		scoreA++;
	}
	if (response8pB == 0)
	{
		scoreB++;
	}

	// 9º Question
	printf("\nO C não permite a passagem de argumentos por referência, apenas "
				 "por valor.\n");
	printf("\nJogador A:");
	scanf("%d", &response9);
	printf("Jogador B:");
	scanf("%d", &response9pB);

	if (response9 == 0)
	{
		scoreA++;
	}
	if (response9pB == 0)
	{
		scoreB++;
	}

	// 10º Question
	printf("\nA linguagem C permite a realização de operações bitwise, como "
				 "deslocamento de bits e operações lógicas a nível de bit. \n");
	printf("\nJogador B:");
	scanf("%d", &response10pB);
	printf("Jogador A:");
	scanf("%d", &response10);

	if (response10 == 1)
	{
		scoreA++;
	}
	if (response10pB == 1)
	{
		scoreB++;
	}

	printf("\nJogador A, sua pontuação é de %d/10", scoreA);
	printf("\nJogador B, sua pontuação é de %d/10", scoreB);

	if (scoreA > scoreB)
	{
		printf("\n\nVitória do Jogador A!");
	}
	else if (scoreB > scoreA)
	{
		printf("\nVitória do Jogador B!");
	}
	else
	{
		printf("\nEmpate!");
	}
}