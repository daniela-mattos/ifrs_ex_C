#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota[4];
    int faltas;
} cadastro;

//usando protótipo de função
int notas(cadastro aluno[], int cad);
void cadastraAluno(cadastro aluno[]);
void mostraNotas(cadastro aluno[], int cad);
int media(cadastro aluno[], int cad);
int situacao(cadastro aluno[], int cad);
void mostraCadastro(cadastro aluno[], int menu);


int main()
{
    int menu;
    
    cadastro aluno[5];
    cadastraAluno(aluno);
    
    do {
        printf("\nDigite um número: ");
        scanf("%d", &menu);
        
        if(menu<6 && menu>0) {        
            mostraCadastro(aluno, menu-1);
        }
        
    } while (menu<6 && menu>0);    

    return 0;
}


//declaração das funções

int notas(cadastro aluno[], int cad) {
    int i;
    for(i=0;i<4;i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &aluno[cad].nota[i]);
    }
    
}

void cadastraAluno(cadastro aluno[]) {
    int i;
    for(i=0;i<5;i++) {
        printf("\nInforme os dados do cadastro %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", aluno[i].nome);
        fflush(stdin);
        
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);
            	  
        notas(aluno, i);
        
        printf("Faltas: ");
        scanf("%i", &aluno[i].faltas);
        fflush(stdin);
          
        printf("\n");
    }
}



void mostraNotas(cadastro aluno[], int cad) {
    int i;
    for(i=0;i<4;i++) {
        printf("\nNota %d: %f", i, aluno[cad].nota[i]);
    }
}

int calculaMedia(cadastro aluno[], int cad) {
    int i;
    float media = 0;
    for(i=0;i<4;i++) {
        media += aluno[cad].nota[i]; 
    }
    media = media/4;
    printf("\nMédia Aluno %s: %f", aluno[cad].nome, media);
}

int situacao(cadastro aluno[], int cad) {
    int medias; 
    medias = calculaMedia(aluno, cad);
    if(medias>6) {
        printf("\nAluno %s: Aprovado", aluno[cad].nome);        
    } else {
        printf("\nAluno %s: Aprovado", aluno[cad].nome);
    }

}


void mostraCadastro(cadastro aluno[], int menu) {
    
        if(menu<5) {
            printf("\nContato %d:", menu);
            printf("\n\tNome: %s\n\tMatricula: %d\n\tFaltas: %d\n", aluno[menu].nome, aluno[menu].matricula, aluno[menu].faltas);
            mostraNotas(aluno, menu);
            situacao(aluno, menu);
        }
}






