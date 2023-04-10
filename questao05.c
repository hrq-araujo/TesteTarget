#include <stdio.h>
#include <string.h>

void inverteString(char *string){
    int tamanho = strlen(string);
    for(int i = 0; i < tamanho/2; i++){
        char temp = string[i];
        string[i] = string[tamanho-i-1];
        string[tamanho-i-1] = temp;
    }
}

int main(){
    char string[100];
    printf("Digite uma string: ");
    scanf("%s", string);

    inverteString(string);

    printf("String invertida: %s", string);

    return 0;
}