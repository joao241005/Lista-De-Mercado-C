#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//VARIAVEIL GLOBAIS
#define true 1 // Definindo variavel global pra usar o TRUE 



int main(){
    int MaximoDeItens = 0; 
    int Tamanho = 100; // caracteres para cada String (item)
    int i,qtd = 0; // contador, os itens serão armazenados em qtd
   
    FILE *pont_arq;//variavel para a criação do arquivo

    pont_arq = fopen("ListaCompras.txt","w");

    printf("Quantos itens tera na lista?\n");
    scanf("%d",&MaximoDeItens);
   
    char items[MaximoDeItens][Tamanho]; //vetor onde ficarão armazenados os Itens

   printf("Digite os itens da lista:\n");
   for(i=1;i<MaximoDeItens+1;i++){
      scanf(" %[^\n]s", items[qtd]);//os itens serão armazenados no em qtd no vetor itens
      qtd++;
   }

    fprintf(pont_arq,"\t\t LISTA DE MERCADO\n");
    fprintf(pont_arq,"\t ====================================\n");
    for(int i = 1; i <= qtd; i++) {
        fprintf(pont_arq,"\t%d - %s\n",i, items[i-1]);
    }
    fprintf(pont_arq,"\t ====================================\n");
    fclose(pont_arq);
    printf("Sua lista esta criada com sucesso. Verifique sua pasta Output\n");

    system("pause");
    return 0;
}