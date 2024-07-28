#include <stdio.h>

int main(void)
{

	int question1 = 0;
	int question2 = 0;
	int question3 = 0;
	int question4 = 0;
	int again = 0;

	printf("Olá, sou o assistente virtul da Marca.\n");
	printf("minha missão é proporcionar a melhor experiência para você, "
				 "cliente..\n");

	printf("\nO que deseja?\n");
	printf("\n1 - Mudança de plano;");
	printf("\n2 - Cancelamento;");
	printf("\n3 - Reclamações;\n\n");
	scanf("%d", &question1);

	if (question1 == 1)
	{
		printf("\nTemos uma série de ofertas especiais para você que com "
					 "investimento você terá beféficios impressiontantes! nosso sistema "
					 "irá processar o novo pagamento em breve!");
	}
	else if (question1 == 2)
	{
		printf("\nInfelizmente, nosso sistema está offline! por favor tente outro "
					 "dia!");
	}
	else if (question1 == 3)
	{
		printf("\nInfelizmente, nosso sistema está offline! por favor tente outro "
					 "dia!");
	}

	printf("\nDeseja mais alguma coisa?\n");
	printf("\n1 - Sim \n0 - Não\n\n");
	scanf("%d", &again);

	if (again == 0)
	{
		return 0;
	}

	printf("\nO que deseja?\n");
	printf("\n1 - Mudança de plano;");
	printf("\n2 - Cancelamento;");
	printf("\n3 - Reclamações;\n\n");
	scanf("%d", &question2);

	if (question2 == 1)
	{
		printf("\nTemos uma série de ofertas especiais para você que com "
					 "investimento você terá beféficios impressiontantes! nosso sistema "
					 "irá processar o novo     pagamento em breve!");
	}
	else if (question2 == 2)
	{
		printf("\nInfelizmente, nosso sistema está offline! por favor tente outro "
					 "dia!");
	}
	else if (question2 == 3)
	{
		printf("\nInfelizmente, nosso sistema está offline! por favor tente outro "
					 "dia!");
	}

	return 0;
}