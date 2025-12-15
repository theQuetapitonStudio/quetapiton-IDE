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

void modohtml() {
    system("title Erromadeite Love156 IDE [HTML]");
    char projectname[256];
    system("cls");
    printf("Selecione o nome do projeto \n>");
    scanf("%255s", &projectname);
    _chdir("C:\\Users");
    _chdir(getenv("USERNAME"));
    _chdir("Desktop");

    _mkdir(projectname);
    _chdir(projectname);
    _mkdir("css");
    _mkdir("scripts");
    _mkdir("libs");
    _mkdir("imgs");
    _mkdir("sounds");
    _chdir("scripts");
    createFile("", "index.js");
    _chdir("..");
    _chdir("css");
    createFile("", "index.css");
    _chdir("..");
    createFile(
        "<!DOCTYPE html>\n"
        "<html lang=\"en\">\n"
        "<head>\n"
        "  <meta charset=\"UTF-8\">\n"
        "  <title></title>\n"
        "  <link rel=\"stylesheet\" href=\"css/index.css\">\n"
        "</head>\n"
        "<body>\n"
        "  <script src=\"scripts/index.js\"></script>\n"
        "</body>\n"
        "</html>\n",
        "index.html"
    );
    printf("Projeto criado com sucesso!, agora voce pode fechar o aplicativo!\n");
}

void modoC() {
    system("title Erromadeite Love156 IDE [C]");
    char projectname[256];
    system("cls");
    printf("Selecione o nome do projeto \n>");
    scanf("%255s", &projectname);
    _chdir("C:\\Users");
    _chdir(getenv("USERNAME"));
    _chdir("Desktop");
    _mkdir(projectname);
    _chdir(projectname);
    _mkdir("libs");
    createFile("#include <stdlib.h> \n #include <stdio.h> \n int main() {}", "main.c");
    printf("Projeto criado com sucesso!, agora voce pode fechar o aplicativo!\n");
}


int main() {
    system("title Erromadeite Love156 IDE");
    int escolha;
    printf("Selecione um ponto de entrada\n");
    printf("1. Html\n");
    printf("2. C\n");
    printf(">");
    scanf("%d", &escolha);
    if (escolha == 1) {
        modohtml();
    } else if (escolha == 2){
        modoC();
    }
    system("pause >nul");
    return 0;
}
