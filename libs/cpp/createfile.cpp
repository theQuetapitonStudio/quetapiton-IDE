#include <fstream>
#include <iostream>

void createFile(const std::string& conteudo, const std::string& nome) {
    std::ofstream file(nome);

    if (!file.is_open()) {
        std::cerr << "erro ao criar arquivo\n";
        return;
    }

    file << conteudo;
    file.close();
}
