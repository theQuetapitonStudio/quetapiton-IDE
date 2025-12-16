# CMakeList.txt: projeto de CMake para Erromadeite LoveLaVa, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

project ("Erromadeite LoveLaVa")

# Adicione a origem ao executável deste projeto.
add_executable (CMakeTarget "Erromadeite LoveLaVa.cpp" "Erromadeite LoveLaVa.h" "comandos/copyright.h" "comandos/comanddetect.h" "comandos/clear.h" "comandos/erromadeite_programs.h")

# TODO: Adicione testes e instale destinos, se necessário.
