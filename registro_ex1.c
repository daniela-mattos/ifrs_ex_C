#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char fone[11];
    char celular[11];
    char endereco[100];
    char aniver[10];
} agenda;

typedef struct agenda;

int main()
{
    int i, menu;
    agenda contato[3];
    
    for(i=0;i<3;i++) {
        printf("\nInforme os dados do regitro %d: \n ", i+1);
        printf("Nome: ");
        scanf("%s", contato[i].nome); getchar(); 
        	  
        printf("Telefone Fixo: ");
        scanf("%s", contato[i].fone); getchar(); 
        
        printf("celular: ");
        scanf("%s", contato[i].celular); getchar(); 
        	    
        printf("Endereço: ");
        scanf("%s", contato[i].endereco); getchar(); 
        	   
        printf("Aniversario: ");
        scanf("%s", contato[i].aniver); getchar(); 
        
        printf("\n");
    }    
        
        system("clear");
        
        for(i=0;i<3;i++) {
            printf("\nContato %d: %d", i+1, i);
            printf("\n\tNome: %s\n\tTelefone Fixo: %s\n\tCelular: %s", contato[i].nome, contato[i].fone, contato[i].celular);
            printf("\n\tEndereço: %s\n\tAniversario: %s",contato[i].endereco, contato[i].aniver);
        }
    
    system("clear");
    printf("\n");
    
    do {
        printf("\nDigite um número: ");
        scanf("%d", &menu);
 
        if(menu<4) {
            printf("\nContato %d: %d", menu);
            printf("\n\tNome: %s\n\tTelefone Fixo: %s\n\tCelular: %s", contato[menu-1].nome, contato[menu-1].fone, contato[menu-1].celular);
            printf("\n\tEndereço: %s\n\tAniversario: %s",contato[menu-1].endereco, contato[menu-1].aniver);
        }
    
    } while (menu<4 && menu>0);
    
    return 0;
}


