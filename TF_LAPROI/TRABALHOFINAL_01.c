#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Loja {
    char NomeVinho[30];
    char NomeVinicula[30];
    char pais[20];
    int anodovinho;
    int codigodovinho;
    float precodovinho;
    struct Loja *proximo;
};

struct Loja *V;

void cadastrar_vinho(char NomeVinho[30], char NomeVinicula[30], char pais[20], int codigodovinho, int anodovinho, float precodovinho){
struct Loja *aux, *b;
    aux = malloc(sizeof(struct Loja));
    int i;


        aux->anodovinho = anodovinho;
        strcpy(aux->NomeVinho, NomeVinho);
        strcpy(aux->NomeVinicula, NomeVinicula);
        strcpy(aux->pais, pais);
        aux->codigodovinho = codigodovinho;
        aux->precodovinho = precodovinho;
        aux->proximo = 0;



        if(V == 0){
           V = aux;
    }
        else{
           b = V;
               while(b->proximo != 0){
                 b = b->proximo;

                }
                b -> proximo = aux;
    }


}
void Imprimir_Lista(){
struct Loja *aux;

aux = V;

    while(aux != 0){
        printf("Nome do vinho: %s\n", aux->NomeVinho);
        printf("Vinicula: %s\n", aux->NomeVinicula);
        printf("Pais: %s\n", aux->pais);
        printf("Ano: %d\n", aux->anodovinho);
        printf("Codigo: %d\n", aux->codigodovinho);
        printf("Preço: %.2f\n\n", aux->precodovinho);

        aux = aux->proximo;
    }
}
void Remover_Vinho(int codigodovinho) {
struct Loja *aux, *anterior, *apagar=0;
aux = V;

  if(V->codigodovinho == codigodovinho){
    apagar = V;
    V = aux->proximo;
  }
  else{
    while(aux != 0){
       if(aux->codigodovinho == codigodovinho){
        anterior->proximo = aux->proximo;
        apagar = aux;
         printf("Item removido");

       }
       anterior = aux;
       aux = aux->proximo;
    }
  }

    if(apagar!=0)
      free(apagar);

}
void Buscar_Vinho(int codigodovinho){
struct Loja *aux;
aux = V;
    while(aux != 0){
        if(aux->codigodovinho == codigodovinho){
            printf("Nome do vinho: %s\n", aux->NomeVinho);
            printf("Vinicula: %s\n", aux->NomeVinicula);
            printf("Pais: %s\n", aux->pais);
            printf("Ano: %d\n", aux->anodovinho);
            printf("Codigo: %d\n", aux->codigodovinho);
            printf("Preço: %.2f\n\n", aux->precodovinho);
         }
        aux = aux->proximo;
    }
}
void Ordenar_Vinho(char opcao){
struct Loja *aux, *B, *C, *A;
aux = V;
int x,n;
float w,D;
char l[20],k[30],m[30];
    while(aux->proximo != 0){
        C = aux->proximo;
        while(C != 0){
            if(opcao == 'C' || opcao == 'c'){
                x = aux->codigodovinho;
                if(x < C->codigodovinho){

                	A->codigodovinho = B->codigodovinho;
                	B->codigodovinho = C->codigodovinho;
                	C->codigodovinho = A->codigodovinho;

                	A->anodovinho = B->anodovinho;
                	B->anodovinho = C->anodovinho;
                	C->anodovinho = A->anodovinho;

                	strcpy(A->NomeVinho, B->NomeVinho);
                	strcpy(B->NomeVinho, C->NomeVinho);
                	strcpy(C->NomeVinho, A->NomeVinho);

                	strcpy(A->NomeVinicula, B->NomeVinicula);
                	strcpy(B->NomeVinicula, C->NomeVinicula);
                	strcpy(C->NomeVinicula, A->NomeVinicula);

                	strcpy(A->pais, B->pais);
                	strcpy(B->pais, C->pais);
                	strcpy(C->pais, A->pais);

                	A->precodovinho = B->precodovinho;
                	B->precodovinho = C->precodovinho;
                	C->precodovinho = A->precodovinho;
                }
                else{
                    printf("\nTerminei!");
                        Imprimir_Lista();
           	 }
	 }
            else if(opcao == 'A' || opcao == 'a'){
                n = aux->anodovinho;
                if(n < C->anodovinho){

            		A->anodovinho = B->anodovinho;
            		B->anodovinho = C->anodovinho;
            		C->anodovinho = A->anodovinho;

            		A->codigodovinho = B->codigodovinho;
            		B->codigodovinho = C->codigodovinho;
            		C->codigodovinho = A->codigodovinho;

            		strcpy(A->NomeVinho, B->NomeVinho);
            		strcpy(B->NomeVinho, C->NomeVinho);
            		strcpy(C->NomeVinho, A->NomeVinho);

            		strcpy(A->NomeVinicula, B->NomeVinicula);
            		strcpy(B->NomeVinicula, C->NomeVinicula);
            		strcpy(C->NomeVinicula, A->NomeVinicula);

            		strcpy(A->pais, B->pais);
            		strcpy(B->pais, C->pais);
            		strcpy(C->pais, A->pais);

            		A->precodovinho = B->precodovinho;
            		B->precodovinho = C->precodovinho;
            		C->precodovinho = A->precodovinho;
                }
                else{
                    printf("\nTerminei!");
                        Imprimir_Lista();
            }
        }
            else if(opcao == 'R' || opcao == 'r'){
                w = aux->precodovinho;
                if(w < C->precodovinho){

			A->precodovinho = B->precodovinho;
			B->precodovinho = C->precodovinho;
			C->precodovinho = A->precodovinho;

			A->anodovinho = B->anodovinho;
			B->anodovinho = C->anodovinho;
			C->anodovinho = A->anodovinho;

			A->codigodovinho = B->codigodovinho;
			B->codigodovinho = C->codigodovinho;
			C->codigodovinho = A->codigodovinho;

			strcpy(A->NomeVinho, B->NomeVinho);
			strcpy(B->NomeVinho, C->NomeVinho);
			strcpy(C->NomeVinho, A->NomeVinho);

                        strcpy(A->NomeVinicula, B->NomeVinicula);
			strcpy(B->NomeVinicula, C->NomeVinicula);
			strcpy(C->NomeVinicula, A->NomeVinicula);

			strcpy(A->pais, B->pais);
			strcpy(B->pais, C->pais);
			strcpy(C->pais, A->pais);
                }
                else{
                    printf("\nTerminei!");
                        Imprimir_Lista();
                }
            }
            else if(opcao == 'P' || opcao == 'p'){
                strcpy(l, aux->pais);
                if(strcmp(l, C->pais)){

			strcpy(A->pais, B->pais);
            		strcpy(B->pais, C->pais);
            		strcpy(C->pais, A->pais);

			A->precodovinho = B->precodovinho;
			B->precodovinho = C->precodovinho;
			C->precodovinho = A->precodovinho;

			A->anodovinho = B->anodovinho;
			B->anodovinho = C->anodovinho;
			C->anodovinho = A->anodovinho;

			A->codigodovinho = B->codigodovinho;
			B->codigodovinho = C->codigodovinho;
			C->codigodovinho = A->codigodovinho;

			strcpy(A->NomeVinho, B->NomeVinho);
            		strcpy(B->NomeVinho, C->NomeVinho);
            		strcpy(C->NomeVinho, A->NomeVinho);

            		strcpy(A->NomeVinicula, B->NomeVinicula);
            		strcpy(B->NomeVinicula, C->NomeVinicula);
            		strcpy(C->NomeVinicula, A->NomeVinicula);
                }
                else{
                    printf("\nTerminei!");
                        Imprimir_Lista();
                }
            }
            else if(opcao == 'N' || opcao == 'n'){
                strcpy(k, aux->NomeVinicula);
                strcpy(m, aux->NomeVinho);
                if(strcmp(k, C->NomeVinicula)){

			strcpy(A->NomeVinicula, B->NomeVinicula);
            		strcpy(B->NomeVinicula, C->NomeVinicula);
            		strcpy(C->NomeVinicula, A->NomeVinicula);

			strcpy(A->pais, B->pais);
            		strcpy(B->pais, C->pais);
           		strcpy(C->pais, A->pais);

			A->precodovinho = B->precodovinho;
                    	B->precodovinho = C->precodovinho;
                    	C->precodovinho = A->precodovinho;

                    	A->anodovinho = B->anodovinho;
                    	B->anodovinho = C->anodovinho;
                    	C->anodovinho = A->anodovinho;

                    	A->codigodovinho = B->codigodovinho;
                    	B->codigodovinho = C->codigodovinho;
                    	C->codigodovinho = A->codigodovinho;

                        strcpy(A->NomeVinho, B->NomeVinho);
            		strcpy(B->NomeVinho, C->NomeVinho);
            		strcpy(C->NomeVinho, A->NomeVinho);
                    if(strcmp(m, C->NomeVinho)){

                        strcpy(A->NomeVinho, B->NomeVinho);
            		strcpy(B->NomeVinho, C->NomeVinho);
            		strcpy(C->NomeVinho, A->NomeVinho);

            		strcpy(A->NomeVinicula, B->NomeVinicula);
            		strcpy(B->NomeVinicula, C->NomeVinicula);
            		strcpy(C->NomeVinicula, A->NomeVinicula);

                        strcpy(A->pais, B->pais);
           		strcpy(B->pais, C->pais);
            		strcpy(C->pais, A->pais);

                        A->precodovinho = B->precodovinho;
                        B->precodovinho = C->precodovinho;
                        C->precodovinho = A->precodovinho;

                        A->anodovinho = B->anodovinho;
                        B->anodovinho = C->anodovinho;
                        C->anodovinho = A->anodovinho;

                        A->codigodovinho = B->codigodovinho;
                        B->codigodovinho = C->codigodovinho;
                        C->codigodovinho = A->codigodovinho;
                    }
                }
                else{
                    printf("Terminei!");
                        Imprimir_Lista();
                	}
		}
       	}
}
}
int main(void) {
char x,y;
int codigodovinho, anodovinho;
char NomeVinho[30], NomeVinicula[30], pais[20];
float precodovinho;
    V = 0;
    do{
        printf("\nEscolha uma opção abaixo:\n");
        printf("C - Para cadastrar o vinho\n");
        printf("R - Para remover um vinho\n");
        printf("B - Para buscar um vinho\n");
        printf("O - Para ordenar a lista\n");
        printf("I - Para imprimir a lista\n");
        printf("S - Para sair do programa\n");
        scanf("\n%c", &x);

        if(x == 'S' || x == 's'){
            break;
        }
        if(x == 'C'||x == 'c'){
        printf("\nDigite o codigo: ");
            scanf("\n%d", &codigodovinho);
        printf("\nDigite o nome: ");
            scanf("\n%[^\n]s", NomeVinho);
        printf("\nDigite a vinicula: ");
             scanf("\n%[^\n]s", NomeVinicula);
        printf("\nDigite o ano: ");
            scanf("\n%d", &anodovinho);
        printf("\nDigite o preço ");
            scanf("\n%f", &precodovinho);
        printf("\nDigite o pais: ");
            scanf("\n%s", pais);


        cadastrar_vinho(NomeVinho, NomeVinicula, pais, codigodovinho, anodovinho, precodovinho);

        }
        if (x == 'I' || x == 'i') {
        Imprimir_Lista();
        }
        if (x == 'R'||x == 'r') {
            printf("\nDigite o codigo do vinho para remover: ");
            scanf("\n%d", &codigodovinho);
        Remover_Vinho(codigodovinho);
        }
        if ( x== 'B' || x == 'b'){
            printf("Digite o codigo do vinho: ");
            scanf("\n%d", &codigodovinho);
        Buscar_Vinho(codigodovinho);
        }
        if(x == 'O' || x == 'o'){
            printf("\nEscolha uma opÃ§Ã£o abaixo:");
            printf("\nN - Para ordenar por Nome e Vinicula");
            printf("\nC - Para ordenar por codigo");
            printf("\nA - Para ordenar por ano");
            printf("\nP - Para ordenar por pais");
            printf("\nR - Para ordenar por preÃ§o");
            scanf("\n%c", &y);
                Ordenar_Vinho(y);
        }


    }while(x != 'S' || x != 's');
return 0;
}
