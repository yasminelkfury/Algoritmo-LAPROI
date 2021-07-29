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
	}
       	}
}
}
