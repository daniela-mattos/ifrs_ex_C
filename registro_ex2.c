#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char fone[11];
    char contato[50];
} cadastro;

cadastro aluno[5];


void cadastraAluno(int cont) {
    printf("\nInforme os dados do cadastro %d:\n", cont+1);
    printf("Nome: ");
    scanf("%s", aluno[cont].nome); getchar(); 
    
    printf("Idade: ");
    scanf("%d", &aluno[cont].idade); getchar(); 
        	  
    printf("Telefone: ");
    scanf("%s", aluno[cont].fone); getchar(); 
    
    printf("Contato: ");
    scanf("%s", aluno[cont].contato); getchar(); 
      
    printf("\n");
}


void mostraCadastro(int menu) {
    
        if(menu<5) {
            printf("\nContato %d:", menu);
            printf("\n\tNome: %s\n\tTelefone: %s\n\tIdade: %d\n\tContato: %s\n", aluno[menu].nome, aluno[menu].fone, aluno[menu].idade, aluno[menu].contato);
        }
}

int main()
{
    int i, menu;
    
    
    for(i=0;i<5;i++) {
        cadastraAluno(i);
    }    
    
    
    
    do {
        printf("\nDigite um número: ");
        scanf("%d", &menu);
        
        if(menu<6 && menu>0) {        
            mostraCadastro(menu-1);
        }
        
    } while (menu<6 && menu>0);    

    return 0;
}








