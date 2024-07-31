#include <iostream>
#include <string>

using namespace std;

const int tamanho = 5;
string alunos[tamanho] = {"joao", "maria", "jose", "carlos", "claudio"};
bool vaiPraExcursao[tamanho] = {true, true, false, true, false};

int main() {
    string nomeAluno;
    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;

    bool encontrado = false;
    for (int i = 0; i < tamanho; i++) {
        if (alunos[i] == nomeAluno) {
            encontrado = true;
            if (vaiPraExcursao[i]) {
                cout << nomeAluno << " Vai pra Excursao!" << endl;
            } else {
                cout << nomeAluno << " Nao vai pra excursao!" << endl;
            }
            break;
        }
    }

    if (!encontrado) {
        cout << nomeAluno << " Nao esta na lista." << endl;
    }

    return 0;
}

