#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Cardapio.h"
#include "Paciente.h"
#include "Receita.h"


//////
////// Assinaturas das funções
//////
char telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);
//////
////// Programa principal
//////
int main(void) {
    char opcao;
    do {
        opcao = telaPrincipal();
        switch(opcao) {
            case '1':   moduloCardapio();
                        break;
            case '2':   moduloPaciente();
                        break;
            case '3':   moduloReceita();
                        break;
            case '4':   // Módulo Relatórios
                        break;
            case '5':   telaSobre();
                        telaEquipe();
                        break;
        }
    } while (opcao != '0');
  
    return 0;
}

        

char telaPrincipal(void) {
    char op;
  
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                             ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte                   ///\n");
    printf("///               Centro de Ensino Superior do Seridó                           ///\n");
    printf("///               Departamento de Computação e Tecnologia                       ///\n");
    printf("///               Disciplina DCT1106 - Programação                              ///\n");
    printf("///               Projeto Sistema de Planejamento de Dieta                      ///\n");
    printf("///               Desenvolvido por mariana                                      ///\n");
    printf("///                                                                             ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                             ///\n");
    printf("///             = = = = = Sistema de Planejamento de Dieta = = = = =            ///\n");
    printf("///                                                                             ///\n");
    printf("///               1. Módulo Cardápio                                            ///\n");
    printf("///               2. Módulo Paciente                                            ///\n");
    printf("///               3. Módulo Receita                                            ///\n");
    printf("///               4. Módulo Relatórios                                          ///\n");
    printf("///               5. Módulo Sobre                                               ///\n");
    printf("///               0. Sair                                                       ///\n");
    printf("///                                                                             ///\n");
    printf("///               Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                             ///\n");
    printf("///                                                                             ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    sleep(1);
    return op;
}