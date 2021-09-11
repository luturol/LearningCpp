#include <stdio.h>
#include <iostream>
#include <queue>
#include <time.h>

using namespace std;

struct Pessoa
{
    string nome;
    string cpf;
    string vacina;
};

string vacinaDisponivel()
{
    int vacina = rand() % 5 + 1;

    switch (vacina)
    {
    case 1:
        return "Coronavac";
    case 2:
        return "Astrazeneca";
    case 3:
        return "Janssen";
    default:
        return "Pfzier";
    }
}

int main()
{
    srand(time(0));

    string opcao;

    bool terminou = false;

    queue<Pessoa> fila;
    int totalVacinados = 0;
    do
    {
        cout << "### Programa de vacinacao ###" << endl;
        cout << "1 - Adicionar pessoa na fila" << endl;
        cout << "2 - Aplicar vacina" << endl;
        cout << "3 - Status da vacinacao" << endl;
        cout << "4 - Sair" << endl;
        cin >> opcao;

        if (opcao == "1")
        {
            Pessoa pessoa;
            cout << "Informe seu nome: " << endl;
            cin >> pessoa.nome;

            cout << "Informe seu CPF" << endl;
            cin >> pessoa.cpf;

            string vacinaATomar = vacinaDisponivel();
            pessoa.vacina = vacinaATomar;

            cout << "Vacina disponivel para tomar " << vacinaATomar << endl;

            fila.push(pessoa);
        }
        else if (opcao == "2")
        {
            if (!fila.empty())
            {
                Pessoa paciente = fila.front();
                fila.pop();
                totalVacinados++;

                cout << "Aplicando vacina na pessoa:" << endl;
                cout << "Nome: " << paciente.nome << endl;
                cout << "CPF: " << paciente.cpf << endl;
                cout << "Vacina: " << paciente.vacina << endl;
            }
            else
            {
                cout << "Nao ha pacientes na fila para vacinacao!" << endl;
            }
        }
        else if (opcao == "3")
        {
            cout << "Vacinados ate o momento " << totalVacinados << endl;
            cout << "Pessoas ainda na fila: " << fila.size() << endl;
        }
        else
        {
            terminou = fila.empty();
            if (terminou)
            {
                cout << "Adeus COVID!! Todos foram vacinados" << endl;
            }
            else
            {
                cout << "Ainda ha pessoas na fila. Necessario vacinar todos os paciente" << endl;
            }
        }
    } while (opcao != "4" || !terminou);

    return 0;
}