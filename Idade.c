// idade.c
#include <stdio.h>
#include <conio.h>

void voltar();

int main() {
    int idade;
    
    while(idade != -1) {
    
        voltar();
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        
        if(idade >= 100){
            printf("\nVocê é um centenário.\n\n");
            }else{
                if(idade >= 65){
                    printf("\n>> Você é um idoso.\n\n");
                    }else{
                    if(idade <= 65 && idade >= 30){
                        printf("\n>> Você é um adulto.\n\n");
                    }else {
                        if(idade < 30 && idade > 19){
                            printf("\n>> Você é um jovem adulto.\n\n");
                        }else{
                            if(idade <= 17 && idade >= 11){
                                printf("\n>> Você é um adolescente.\n\n");
                            }else{
                                if(idade < 11 && idade >= 0){
                                    printf("\n>> Você é uma criança.\n\n");
                                }else{
                                    if(idade <= -1){
                                        printf("\n>> Você digitou para sair.");
                                    }else{
                                        printf("");
                                    }
                                }
                            }
                        }
                    }
                 }
            }
    }
    return 0;
 }
    
void voltar(){
    printf("--------------------------------------");
    printf("\n\tDigite -1 para sair. ");
    printf("\n--------------------------------------\n\n");
}


    
