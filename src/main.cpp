#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void menu()
{
    cout << endl;
    cout << ":d -> Dividir em tags a string do arquivo informado" << endl;
    cout << ":c -> Carregar um arquivo com definicoes de tags" << endl;
    cout << ":o -> Especificar o caminho do arquivo de saida para a divisao em tags" << endl;
    cout << ":p -> Realizar a divisao em tags da entrada informada" << endl;
    cout << ":a -> Listar as definicoes formais dos automatos em memoria" << endl;
    cout << ":l -> Listar as definicoes de tag validas" << endl;
    cout << ":s -> Salvar as tags" << endl;
    cout << ":q -> Sair do programa" << endl;
}

int main()
{
    string opcao;

    // Posicao 0 do vetor aux armazena funcionalidade.
    // Posicao 1 (quando existe) armazena nome de arquivo ou string.
    vector<string> aux;
    string delimiter = " ";

    // Vetor de Tags quer armazena tags validas.
    //vector<Tag> tagsValidas;

    vector<string> input_string;
    vector<string> input_tags;

    do
    {
        menu();
        getline(cin, opcao);

        switch (aux[0].at(1))
        {
        case 'd':
            //input_string = leArquivo(aux[1]);
            cout << "[WARNING] Funcionalidade de dividir string nao implementada." << endl;
            // FAZER ----> Dividir a string em tags.
            break;
        case 'c':
            //input_tags = leArquivo(aux[1]);
            //tagsValidas = divideTag(input_tags, tagsValidas);
            break;
        case 'o':
            cout << "[WARNING] Funcionalidade nao implementada." << endl;
            break;
        case 'p':
            cout << "[WARNING] Funcionalidade nao implementada." << endl;
            break;
        case 'a':
            cout << "[WARNING] Funcionalidade nao implementada." << endl;
            break;
        case 'l':
            // Lista todas as definicoes das tags validas.
            //listaTags(tagsValidas);
            break;
        case 's':
            //salvarTags(tagsValidas, aux[1]);
            break;
        case 'q':
            cout << "[INFO] Encerrando Programa." << endl;
            break;
        default:
            cout << "Opcao Invalida" << endl;
            break;
        }
        aux.clear();

    } while (aux[0] != ":q");
}