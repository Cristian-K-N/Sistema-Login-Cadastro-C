#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int argc, char** argv) {
    
    char usuario[50];
    char senha[50];

    while(1) {
        printf("Digite o usuario:");
        scanf("%s",usuario);

        printf("Digite a senha:");

        char c;
        int i;

        while((c = _getch())!= '\r'){
            if(c == 8 && i>0){
                printf ("\b \b");
                i--;

            }
            else {
                senha[i ++] = c;
                printf("*");

            }
            senha[i] = '\0';
        }

        char usuariocorreto[] = "usuario";
        char senhacorreta[] = "senha123";

         if (strcmp(usuario,usuariocorreto)==0 && strcmp(senha,senhacorreta)==0){
            system("cls");
            printf("TELA DE BOAS VINDAS");
            break;
         }
         else {

            printf("Usuario ou senha incorretos");
        while(getch()!='\n');
        getch();

        }
    }
    return 0;
}
