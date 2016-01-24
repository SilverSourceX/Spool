#include <stdio.h>
// file como puntero
FILE *file;
char c;
// Funciones
void escribir();
int main(int argc, char *argv[])
{
    printf("Escribiendo archivo...\n\n");
    escribir();
    system("pause");
    return 0;
}
void escribir()
{    
    file = fopen("/var/www/acid/index.html", "w");
    if(file == NULL)
    {
        printf("Error al abrir archivo");
    }
    fprintf(file, "Hola mundo!\n");
    fclose(file);      
}
