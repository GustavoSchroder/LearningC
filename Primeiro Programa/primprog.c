#include <stdio.h>

int main(){
    int n;
    int par;
    int impar;
    int num;
    int cont;

    printf("Digite o tamanho da sequencia: \n"); //mensagem na tela
    scanf("%d", &n); // le informa��o do teclado

    par=0;
    impar=0;
    cont=0;

    while(cont < n){
        printf("Digite o %do. n�mero: ", cont+1);
        scanf("%d", &num);

        if(num%2 == 0){
            par++;
        }
        else{
            impar++;
        }
        cont++;
    }

    printf("A sequ�ncia � foramada por %d n�mero �mpares e %d n�meros pares. \n\n", impar, par);

    return 0;

}
