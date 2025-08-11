#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindromo(char palavra[]){
    int esq = 0;
    int dir = strlen(palavra)-1;
    
    while (esq < dir) {
    if (palavra[esq] != palavra[dir]) {
         return false; 
    }
    esq++;
    dir--;
}

return true; 
}

int main()
{
    char palavra[100];
    scanf("%s", palavra);
    while(palavra != 'FIM'){
    printf("Digite uma palavra: \n");
    scanf("%s", palavra);
    if(palindromo(palavra)){
        printf("SIM");
    }
    else{
        printf("NAO");
    }
    }

    return 0;
}