#include <stdio.h>
#include <stdlib.h>



/////
// Assinatura das funções

void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);
void telaMenuPacientes(void);
void telaCadastrarPacientes(void);
void telaPesquisarPacientes(void);
void telaAlterarPacientes(void);
void telaExcluirPacientes(void);
void telaMenuReceitas(void);
void telaCadastrarReceitas(void);
void telaAlterarReceitas(void);
void telaPesquisarReceitas(void);
void telaExcluirReceitas(void);


/////
// Programa principal

int main(void) {
    telaSobre();
    telaPrincipal();
    telaEquipe();
    telaMenuPacientes();
    telaCadastrarPacientes();
    telaPesquisarPacientes();
    telaAlterarPacientes();
    telaExcluirPacientes();
    telaMenuReceitas();
    telaCadastrarReceitas();
    telaAlterarReceitas();
    talaPesquisarReceitas();
    telaExcluirReceitas();
    return 0;
}



/////
// Funções

void telaSobre(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    Universidade Federal do Rio Grande do Norte                    ///\n");
    printf("///                    Centro de Ensino Superior do Seridó                            ///\n");
    printf("///                    Departamento de Computação e Tecnologia                        ///\n");
    printf("///                    Disciplina DCT1106 - Programação                               ///\n");
    printf("///                    Projeto Sistema de Planejamento de Dieta                       ///\n");
    printf("///                    Desenvolvido por mariana - 2021.2                              ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///            = = = = = = = = Sistema de Planejamento de Dieta = = = = = = = =       ///\n");
    printf("///                                                                                   ///\n");
    printf("///          Programa  utilizado na disciplina DCT1106 - Programação, para fins       ///\n");
    printf("///          avaliativo no Semestre 2021.2. O programa contém os principais módulos   ///\n");
    printf("///          e funcionalidades que serão exigidos ao longo da disciplina.             ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPrincipal(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   Universidade Federal do Rio Grande do Norte                     ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                             ///\n");
    printf("///                   Departamento de Computação e Tecnologia                         ///\n");
    printf("///                   Disciplina DCT1106 - Programação                                ///\n");
    printf("///                   Projeto Sistema de Planejamento de Dieta                        ///\n");
    printf("///                   Desenvolvido por mariana - 2021.2                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///               = = = = = = = Sistema de Planejamento de Dieta = = = = = = =        ///\n");
    printf("///                                                                                   ///\n");
    printf("///               1. Módulo Cardápio                                                  ///\n");
    printf("///               2. Módulo Paciente                                                  ///\n");
    printf("///               3. Módulo Receita                                                   ///\n");
    printf("///               4. Módulo Relatórios                                                ///\n");
    printf("///               5. Módulo Sobre                                                     ///\n");
    printf("///               0. Sair                                                             ///\n");
    printf("///                                                                                   ///\n");
    printf("///               Escolher a opção desejada: ")
    scanf("%c", &op);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaEquipe(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   Universidade Federal do Rio Grande do Norte                     ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                             ///\n");
    printf("///                   Departamento de Computação e Tecnologia                         ///\n");
    printf("///                   Disciplina DCT1106 - Programação                                ///\n");
    printf("///                   Projeto Sistema de Planejamento de Dieta                        ///\n");
    printf("///                   Desenvolvido por mariana - 2021.2                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///             = = = = = = Sistema de Planejamento de Dieta = = = = = =              ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Este projeto exemplo foi desenvolvido por:                            ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Mariana Araújo de Medeiros                                            ///\n");
    printf("///             E-mail: mariana.medeiros.017@ufrn.edu.br                              ///\n");
    printf("///             Repositório: https://github.com/ Got7mj/mariana                       ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaMenuPaciente(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                  = = = = = = = = = Menu Paciente = = = = = = = = =                ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                                   ///\n");
    printf("///                   1. Cadastrar um novo Paciente                                   ///\n");
    printf("///                   2. Pesquisar por Paciente                                       ///\n");
    printf("///                   3. Atualizar o cadastro de um Paciente                          ///\n");
    printf("///                   4. Excluir um paciente do sistema                               ///\n");
    printf("///                   0. Voltar ao menu anterior                                      ///\n");
    printf("///                                                                                   ///\n");
    printf("///                   Escolha a opção desejada: ");                                      
    scanf("%c", &op);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaCadastrarPaciente(void) {
    char CPF[12];
    char nome[51];
    char idade[12];
    char peso[12];
    char alt[12];
    char email[51];
    char nasc[11];
    char celular[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = = Cadastrar Paciente = = = = = = = =               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                                   ///\n");
    printf("///                    CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                    Nome completo: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("///                    Idade: ");
    scanf("%[0-9]", idade);
    getchar();
    printf("///                    Peso: ");
    scanf("%[0-9]", peso);
    getchar();
    printf("///                    Altura: ");
    scanf("%[0-9]", alt);
    getchar();
    printf("///                    E-mail: ");
    scanf("%[A-Za-z0-9@._]", email);
    getchar();
    printf("///                    Data de Nascimento (dd/mm/aaaa): ");  
    scanf("%[0-9]", nasc);
    getchar();
    printf("///                    Celular (apenas números):  ");
    scanf("%[0-9]", celular);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPesquisarPaciente(void) {
    char CPF[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///               = = = = = = = = Pesquisar Paciente = = = = = = = =                  ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                                   ///\n");
    printf("///                    Informe o CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaAlterarPaciente(void) {
    char CPF[12];
    
    sYSTEM("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = = Alterar Paciente = = = = = = = = =               ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                                   ///\n");
    printf("///                     Informe o CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaExcluirPaciente(void) {
    char cpf[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                = = = = = = = = Excluir Paciente = = = = = = = = =                 ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                                   ///\n");
    printf("///               Informe o CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void telaMenuReceitas(void) {
    char op;
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                = = = = = = = = = Menu Receita = = = = = = = = = =                 ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                                   ///\n");
    printf("///                  1. Cadastrar Receita                                             ///\n");
    printf("///                  2. Pesquisar Receita                                             ///\n");
    printf("///                  3. Alterar Receita                                               ///\n");
    printf("///                  4. Excluir Receita                                               ///\n");
    printf("///                  0. Voltar ao menu anterior                                       ///\n");
    primtf("///                                                                                   ///\n");
    printf("///                  Escolha a opção desejada:  ");                                      
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle<ENTER> para continuar...\n");
    getchar();
    }
    
    
    
void telaCadastrarReceita(void) {
    char num[12];
    char criação[11];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                     = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                    = = = = = = = = Cadastrar Receita = = = = = = = =              ///\n");
    printf("///                     = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                                   ///\n");
    printf("///                  Numeração (apenas números): ");  
    scanf("%[0-9]", num);
    getchar();
    printf("///                  Data da Criação (dd/mm/aaaa): ");
    scanf("%[0-9]", criação);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPesquisarReceita(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = = Pesquisar Receita = = = = = = = = =              ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                                   ///\n");
    printf("///                    Informe a numeração(apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaAlterarReceita(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                  = = = = = = = = Alterar Receita = = = = = = = = =                ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                                                                                   ///\n");
    printf("///                    Informe a numeração(apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaExcluirReceita(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///               = = = = = = = = Excluir Receita = = = = = = = = =                   ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                                   ///\n");
    printf("///                 Informe a numeração (apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}