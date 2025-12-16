#include <stdlib.h>
#include <stdio.h>
#include <direct.h>

void createFile(const char *conteudo, const char *nome) {
    FILE *f = fopen(nome, "w");
    if (!f) {
        printf("erro ao criar arquivo");
    }
    fprintf(f, "%s", conteudo);
    fclose(f);
}
