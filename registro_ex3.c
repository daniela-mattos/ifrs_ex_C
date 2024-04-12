#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota[4];
    int faltas;
} cadastro;

cadastro aluno[5];

int notas(int cad) {
    int i;
    for(i=0;i<4;i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &aluno[cad].nota[i]);
    }
    
}

void cadastraAluno() {
    int i;
    for(i=0;i<5;i++) {
        printf("\nInforme os dados do cadastro %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", aluno[i].nome); getchar();
        
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula); getchar();
            	  
        notas(i);
        
        printf("Faltas: ");
        scanf("%i", &aluno[i].faltas); getchar();
          
        printf("\n");
    }
}



void mostraNotas(int cad) {
    int i;
    for(i=0;i<4;i++) {
        printf("\nNota %d: %f", i, aluno[cad].nota[i]);
    }
}

int media(int cad) {
    int i;
    float media = 0;
    for(i=0;i<4;i++) {
        media += aluno[cad].nota[i]; 
    }
    media = media/4;
    printf("\nMédia Aluno %s: %f", aluno[cad].nome, media);
}

int situacao(int cad) {
    int medias; 
    medias = media(cad);
    if(media>6) {
        printf("\nAluno %s: Aprovado", aluno[cad].nome);        
    } else {
        printf("\nAluno %s: Aprovado", aluno[cad].nome);
    }

}


void mostraCadastro(int menu) {
    
        if(menu<5) {
            printf("\nContato %d:", menu);
            printf("\n\tNome: %s\n\tMatricula: %d\n\tFaltas: %d\n", aluno[menu].nome, aluno[menu].matricula, aluno[menu].faltas);
            mostraNotas(menu);
            situacao(menu);
        }
}

int main()
{
    int menu;
    
    cadastraAluno();
    
    
    
    
    do {
        printf("\nDigite um número: ");
        scanf("%d", &menu);
        
        if(menu<6 && menu>0) {        
            mostraCadastro(menu-1);
        }
        
    } while (menu<6 && menu>0);    

    return 0;
}









