#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 2

void menu();
void cadastro();
void consulta();
void relatorios();
void processo_seletivo();
void matricula();
void cadastros();
void turmas();
void cadastro_docentes();
void notas_();
void consulta_seletivo();
void consulta_matricula();
void consulta_turmas();
void consulta_docente();
void consulta_notas();


char nome [TAM ] [100];
char sexo [TAM ] [100];
char validacao [TAM ] [100];
char cpf [TAM] [100];
char idade [TAM] [100];
char matricula1 [TAM] [100];
char opcao_turma [TAM] [100];
char idade_docente [TAM] [100];
char nome_docente [TAM] [100];
char notas  [TAM] [100];


int opcao;
int opcao_cadastro=0;
int i=0;
 
 main (){
	menu();
}
//----------------------------------------------------------------------------------------------------------------
void menu (){
	system("cls");
    while (opcao<4){
	puts("________________________________________________________________");
      puts("                           SGES                                 ");
      puts ("");
      puts("                  Sistema de Gestao Escolar");
      puts("________________________________________________________________");
      puts("");
      puts("          Digite a operacao desejada para continuarmos");
      puts("");
	puts("1.Cadastro");
      //possível cadastrar alunos para o processo seletivo,
      //consultar cadastrados no processo seletivo
      puts("2.Consultar");
      //alunos matriculados
      //consultar docentes
      //consultar turmas
      //notas por alunos
      //consultar cadastrados no processo seletivo
      //docentes ativos
      puts("3.Relatorios");
      //bem como relatórios diversos: relatório de alunos matriculados, alunos
      //por turmas, cadastrados no processo
      //seletivo, notas por alunos individuais, notas dos alunos por turma.
      //alunos por turma
     puts("4.Para sair do sistema");
	  scanf("%d",&opcao);
            system("cls");
         switch (opcao){
         case 1:
        cadastro();
         break;
         case 2:
        consulta();
         break;
         default:
         relatorios();
         break;
         
     }
        }
   
 }
 //----------------------------------------------------------------------------------------------------------------
 void cadastro(){  
   system ("cls");
   while (opcao_cadastro!=6){
   puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
   puts("");
   puts("          Digite a opercao desejada para continuarmos");
   puts("");
      //possível cadastrar alunos para o processo seletivo,
      puts("1.Cadastro de alunos para processo seletivo");
      puts("2.Cadastrar alunos para matricula");
      //cadastrar alunos para matricula
      puts("3.Cadastrar TURMAS");
      //cadastro de turmas *e cadastro de alunos nas turmas*
      puts("4.Cadastro de NOTAS");
      // cadastro dos docentes
      puts("5.Cadastro de Professores");
      // cadastro de notas dos alunos
      puts("6.para Retornar ao menu principal");
      
     scanf("%d",&opcao_cadastro);
    system("cls");
    switch (opcao_cadastro){
    case 1:
    	processo_seletivo();
    break;
	case 2:
    	matricula();
    break;
	case 3:
		turmas();
    break;
	case 4:
    	notas_();
    break;
	case 5:
	cadastro_docentes();
     break;
     default:
     	printf("\n");
     //	menu();
}
	}
}
//---------------------------------------------------------------------------------------
void processo_seletivo(){
	system ("cls");
	
  int opcao_processo;
   int i=0;
   for(i=0;i<TAM;i++){
   fflush(stdin);
      system("cls");
      puts("________________________________________________________________");
      puts("                           SGES                                 ");
      puts("");
      puts("                  Sistema de Gestao Escolar");
      puts("________________________________________________________________");
      puts("Vamos comecar com o cadastro do processo seletivo!");
      puts("");
      puts("Insira o nome completo do(a) candidato");
      gets(nome[i]);
      puts("________________________________________________________________");
      puts("Digite o CPF do(a) candidato");
      gets(cpf[i]);
      puts("________________________________________________________________");
      puts("Qual o Sexo do(a) candidato");
	  gets(sexo[i]);
      puts("________________________________________________________________");
      puts("Qual Idade do(a) candidato");
      gets(idade[i]);
      puts("Qual a situacao do aluno? ap/rp (em letras minusculas)" );
      gets(validacao[i]);
      puts("________________________________________________________________");
}
 system("cls");
   cadastro();
}
//------------------------------------------------------------------------------------------
void matricula(){
	int i;
	system("cls");
   puts("_________ _______________________________________________________");
   puts("                           SGES                                 ");
   puts("");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
   puts("Vamos comecar a matricular os alunos, vamos la!");
	
   
  if (!strcmp(validacao[i],"ap")){
  	fflush(stdin);
   for (i=0;i<TAM;i++){
	system("cls");
    printf("\n Nome: %s",nome[i]);
    printf("\n CPF: %s",cpf[i]);
    printf("\n idade: %s",idade[i]);
    printf("\n Sexo: %s",sexo[i]);
    printf("\n situacao do aluno: %s",validacao[i]);
    printf("\n __________________________________");  
   printf("\n nome do aluno: %s",nome[i]);
   printf("\n Digite um numero de matricula para o novo aluno: \n");
   gets(matricula1[i]);

}

}
else {
   	printf("\n \n ");
	puts("nenhum aluno foi aprovado no precesso seletivo, impossivel continuar !");
   	puts("Aperte qualquer tecla para voltarmos ao menu anterior ");
puts("");
   	system("pause");
   }

system ("cls");
  cadastro();
}
//--------------------------------------------------------------------------------------
void turmas (){
  int i=0;
  system("cls");
  puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
   puts("Bem vindo ao cadastro de turmas, vamos comecar!");;
   puts("alunos sem turmas");
   	fflush(stdin);
  for(i=0;i<TAM;i++){
  	if (!strcmp (validacao[i],"ap")){
    printf("\n Nome: %s",nome[i]);
    printf("\n CPF: %s",cpf[i]);
    printf("\n idade: %s",idade[i]);
    printf("\n Sexo: %s",sexo[i]);
    printf("\n Situacao do aluno: %s",validacao[i]);
    printf("\n Matricula Numero %s \n", matricula1[i]);
      puts("");
      puts("Estas são as turmas disponiveis ");
      puts("TDS01");
      puts("TDS02");
     printf("\n Digite o nome da sala para adicionar o aluno: %s",nome[i],"  Matricula: %s\n ",matricula1[i]);
     puts("");
gets(opcao_turma[i]);
system("cls");
}
}
 system("cls");
 
   cadastro();
   }
//-------------------------------------------------------------------------------------
void cadastro_docentes(){
 int  i=0;
 system("cls");
       puts("________________________________________________________________");
      puts("                           SGES                                 ");
      puts("");
      puts("                  Sistema de Gestao Escolar");
      puts("________________________________________________________________");
      puts("Bem vindo a área de cadastro de docentes, vamos começar!");
 	fflush(stdin);
 	for (i=0;i<TAM;i++){
      puts("Digite o nome do colaborador");
      gets(nome_docente[i]);
      puts("Digite a idade do colaborador");
      gets(idade_docente[i]);
      system("cls");
}

	system ("cls");

   cadastro();
}
//--------------------------------------------------------------------------------------
void notas_(){
	i=0; 
	system("cls");
   puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
   puts("Bem vindo ao cadastro de notas, vamos comecar!");
   puts("alunos ");
   
   	fflush(stdin);
  for(i=0;i<TAM;i++){
  	if (!strcmp (validacao[i],"ap")){
    printf("\n Nome: %s",nome[i]);
    printf("\n CPF: %s",cpf[i]);
    printf("\n idade: %s",idade[i]);
    printf("\n Sexo: %s",sexo[i]);
    printf("\n Situacao do aluno: %s",validacao[i]);
    printf("\n Matricula Numero %s \n",matricula1[i]);
    printf("\n Turma: %s ",opcao_turma[i]);   
    puts("__________________________________");

      printf("\n Digite A nota final do aluno: %s",nome[i]," matricula: %s \n",matricula1[i]);
      puts("");
	  gets(notas[i]);  
	  system("cls");
}
}
 system ("cls");
   cadastro();
}
void consulta(){  
int opcao_cadastro;
   system ("cls");
   while (opcao_cadastro!=6){
   puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
   puts("");
   puts("          Digite a operacao desejada para continuarmos");
   puts("");
      puts("1.Consultar alunos cadastrados no processo seletivo");
      puts("2.Cosultrar alunos matriculados");
      puts("3.Consulta alunos por turma");
      puts("4.Consulta de Professores da unidade");
      puts("5.Consulta de NOTAS finais dos alunos(Aprovados ou reprovados)");
      puts("6.para Retornar ao menu principal");
      scanf("%d", &opcao_cadastro);
      system("cls");
	  switch (opcao_cadastro){
      case 1:
       consulta_seletivo();
      break;
	  case 2:
       consulta_matricula();
      break;
	  case 3:
        consulta_turmas();
      break;
	  case 4:
        consulta_docente();
      case 5:
        consulta_notas();
      break;
      default:
      break;
}
}
    menu();	
}
void consulta_seletivo(){
	i=0;
   system ("cls");
   puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
fflush(stdin);
for (i=0;i<TAM;i++){   	
    printf("\n Nome: %s",nome[i]);
    printf("\n CPF: %s",cpf[i]);
    printf("\n idade: %s",idade[i]);
    printf("\n Sexo: %s",sexo[i]);
    printf("\n situacao do aluno: %s",validacao[i]);
    printf("\n __________________________________\n");
    puts("");
}
    puts("para retornar a tela anterior, aperte qualquer tecla ");
    system("pause");
system ("cls");
consulta();
}
void consulta_matricula(){
   int i;
  system("cls");
   puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
fflush(stdin);
   for (i=0;i<TAM;i++){  
  if (!strcmp(validacao[i],"ap")){
  printf("\n aluno: %s",nome[i]);
  printf("\n Matricula: %s ", matricula1[i]);
  puts("");
  puts("__________________________________________");
  }
}
      puts("aperte qualquer tecla para voltar ao menu");
      system("pause");
      
      consulta();
}
void consulta_turmas(){
	int i;
  system("cls");
   puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
fflush(stdin);
   for (i=0;i<TAM;i++){  
  if (!strcmp(validacao[i],"ap")){
  printf("\n Turma: %s",opcao_turma[i]);
  printf("\n alunos matriculados: %s ",nome[i]);
  puts("");

  }
}
      puts("aperte qualquer tecla para voltar ao menu");
      system("pause");
      
      consulta();
}
void consulta_docente(){
		i=0;
   system ("cls");
   puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
fflush(stdin);
for (i=0;i<TAM;i++){   	
    printf("\n Nome: %s",nome_docente[i]);
    printf("\n Idade: %s",idade_docente[i]);
    printf("\n __________________________________\n");
    puts("");
}
    puts("para retornar a tela anterior, aperte qualquer tecla ");
    system("pause");
system ("cls");
consulta();
}
void consulta_notas(){
		i=0;
   system ("cls");
   puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
fflush(stdin);
  for(i=0;i<TAM;i++){
  	if (!strcmp (validacao[i],"ap")){
    printf("\n Nome: %s",nome[i]);
    printf("\n CPF: %s",cpf[i]);
    printf("\n idade: %s",idade[i]);
    printf("\n Sexo: %s",sexo[i]);
    printf("\n Situacao do aluno: %s",validacao[i]);
    printf("\n Matricula Numero %s \n",matricula1[i]);
    printf("\n Turma: %s ",opcao_turma[i]);   
    printf("\n Notas: %s", notas[i]);
}
    puts("para retornar a tela anterior, aperte qualquer tecla ");
    system("pause");
system ("cls");
consulta();
}

}
void relatorios(){
	i=0; 
   system("cls");
   puts("________________________________________________________________");
   puts("                           SGES                                 ");
   puts("");
   puts("                  Sistema de Gestao Escolar");
   puts("________________________________________________________________");
   puts("Bem vindo ao cadastro de notas, vamos comecar!");
   puts("alunos ");
   fflush(stdin);
  for(i=0;i<TAM;i++){
  	puts("");
  	puts("estes alunos foram inscritos no processo seletivo");
    printf("\n Nome: %s",nome[i]);
    printf("\n CPF: %s",cpf[i]);
    printf("\n idade: %s",idade[i]);
    printf("\n Sexo: %s",sexo[i]);
    printf("\n Situacao do aluno: %s",validacao[i]);
}
if (!strcmp (validacao[i],"ap")){
	puts("");
	puts("Estes foram aprovados e matriculados e inseridos em turmas.");
	printf("\n Nome: %s",nome[i]);
    printf("\n CPF: %s",cpf[i]);
    printf("\n idade: %s",idade[i]);
    printf("\n Sexo: %s",sexo[i]);
    printf("\n Situacao do aluno: %s",validacao[i]);
    printf("\n Matricula Numero %s \n",matricula1[i]);
    printf("\n Turma %s", opcao_turma[i]);
}
if (!strcmp (validacao[i],"ap")){
	puts("");
	puts("Tiveram a nota no fim do modulo de : ");
	printf("Nome do Aluno : %s",nome[i]);
	printf("Nota final: %s", notas[i]);
} 
	puts("para retornar a tela anterior, aperte qualquer tecla ");
    system("pause");
system ("cls");
menu();
}

