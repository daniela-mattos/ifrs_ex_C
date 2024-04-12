#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char fone[11];
    char contato[50];
} cadastro;


void cadastraAluno(cadastro vetor[], int cont) {
    printf("\nInforme os dados do cadastro %d:\n", cont+1);
    printf("Nome: ");
    scanf("%s", vetor[cont].nome); getchar(); 
    
    printf("Idade: ");
    scanf("%d", &vetor[cont].idade); getchar(); 
        	  
    printf("Telefone: ");
    scanf("%s", vetor[cont].fone); getchar(); 
    
    printf("Contato: ");
    scanf("%s", vetor[cont].contato); getchar(); 
      
    printf("\n");
}


void mostraCadastro(cadastro aluno[], int menu) {
    
        if(menu<5) {
            printf("\nContato %d:", menu);
            printf("\n\tNome: %s\n\tTelefone: %s\n\tIdade: %d\n\tContato: %s\n", aluno[menu].nome, aluno[menu].fone, aluno[menu].idade, aluno[menu].contato);
        }
}

int main()
{
    int i, menu;
    
    cadastro aluno[5];
    
    for(i=0;i<5;i++) {
        cadastraAluno(aluno, i);
    }    
    
    
    
    do {
        printf("\nDigite um número: ");
        scanf("%d", &menu);
        
        if(menu<6 && menu>0) {        
            mostraCadastro(aluno, menu-1);
        }
        
    } while (menu<6 && menu>0);    

    return 0;
}







