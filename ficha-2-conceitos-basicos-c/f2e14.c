#include <stdio.h>
#include <stdlib.h>


int main ()
{
 char nome [100], emprego [100], local [100], cidade [100], pais [100], planeta [100]; 
 float sb, sl; 
 int idade;
 
 printf ("\n\n\t\tPrograma gerenciador de salario liquido dos funcionarios\n\n");
 printf ("\t\t\t\t\t\t\t\t\t\t\tpowered by Saiman EIC 1ano\n\n");
 printf ("\t\tVamos calcular o seu salario liquido considerando imposto de 20%% sobre o salario bruto\n");
 printf ("\t\tEntrada em vigor pelo governo de Cabo Verde em 14 de Novembro de 2017\n\n\n");
 

 printf ("\t\tBenvindo!\n\n ");
 
 printf ("\n\t\tIntroduza o seu nome\n\n\t\t");
 scanf ("%s",nome);

 printf ("\n\t\tIntroduza a sua idade\n\n\t\t");
 scanf ("%d",&idade);
 
 printf ("\n\t\tIntroduza o seu salario bruto\n\n\t\t");
 scanf ("%f",&sb);
 
 printf ("\n\t\tIntroduza o seu emprego\n\n\t\t");
 scanf ("%s",emprego);
 
 printf ("\n\t\tIntroduza o local de trabalho\n\n\t\t");
 scanf ("%s",local);
 
 printf ("\n\t\tIntroduza a sua cidade\n\n\t\t");
 scanf ("%s",cidade);
 
 printf ("\n\t\tIntroduza o seu pais\n\n\t\t");
 scanf ("%s",pais);
 
 printf ("\n\t\tIntroduza o seu planeta\n\n\t\t");
 scanf ("%s",planeta);
 
 
 
 sl=sb-(0.20*sb);
 
 printf ("\n\t\tNome do funcionario: %s\n", nome);
 printf ("\n\t\tIdade do funcionario: %d\n", idade);
 printf ("\t\tSalario bruto mensal: %.2f\n", sb);
 printf ("\t\tSalario liquido recebido: %.2f\n", sl);
 printf ("\t\tLocal de trabalhol: %s\n", local);
 printf ("\t\tCidade: %s\n", cidade);
 printf ("\t\tPais: %s\n", pais);
 printf ("\t\tPlaneta situado: %s\n", planeta);
 
system ("pause");
return 0;

}
 
 
 
 
 
 
 
 
	

