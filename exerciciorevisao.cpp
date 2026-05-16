#include <iostream>

using namespace std;

int main()
{
    string vendedor;
    int nivel;
    double total_venda;
    int sn;

    while (true)
    {
        cout << " 1 - Calcular a bonificacao\n 2- sair \n";
        cin >> sn;
        if (sn == 1)
        {

            cout << "Digite o nome do vendedor ";
            cin >> vendedor;

            cout << "\nDigite o nivel do vendedor ";
            cin >> nivel;

            cout << "\nDigite o valor de venda ";
            cin >> total_venda;

            if (nivel == 1)
            {
                if (total_venda > 80000)
                {
                    cout << "O vendedor " << vendedor << " Nivel " << nivel << " Foi promovido ao nivel 2" << endl;
                }
                else if (total_venda > 50000)
                {
                    double valorDaBonificacao = total_venda * 0.35;
                    cout << "o vendedor " << vendedor << " nivel " << nivel << " devera receber uma bonificacao de " << valorDaBonificacao << endl;
                }
                else if (total_venda > 20000)
                {
                    double valorDaBonificacao = total_venda / 5;
                    cout << "o vendedor " << vendedor << " nivel " << nivel << " devera receber uma bonificacao de " << valorDaBonificacao << endl;
                }
                else if (total_venda < 5000)
                {
                    cout << "O vendedor " << vendedor << " nivel 1 esta com risco de demissao";
                }
            }
            else if (nivel == 2)
            {
                if (total_venda > 200000)
                {
                    cout << "O vendedor " << vendedor << " Nivel " << nivel << " Foi promovido ao nivel 3" << endl;
                }
                else if (total_venda > 120000)
                {
                    double valorDaBonificacao = total_venda * 0.40;
                    cout << "o vendedor " << vendedor << " nivel " << nivel << " devera receber uma bonificacao de " << valorDaBonificacao << endl;
                }
                else if (total_venda > 90000)
                {
                    double valorDaBonificacao = total_venda / 4;
                    cout << "o vendedor " << vendedor << " nivel " << nivel << " devera receber uma bonificacao de " << valorDaBonificacao << endl;
                }
                else if (total_venda < 50000)
                {
                    cout << "O vendedor " << vendedor << " nivel " << nivel << " esta com risco de ir para nivel 1";
                }
            }
            else if (nivel == 3)
            {
                if (total_venda > 500000)
                {
                    cout << "O vendedor " << vendedor << " Nivel " << nivel << " Foi promovido a dono da firma" << endl;
                }
                else if (total_venda > 250000)
                {
                    double valorDaBonificacao = total_venda * 0.45;
                    cout << "o vendedor " << vendedor << " nivel " << nivel << " devera receber uma bonificacao de " << valorDaBonificacao << endl;
                }
                else if (total_venda > 210000)
                {
                    double valorDaBonificacao = total_venda * 0.3;
                    cout << "o vendedor " << vendedor << " nivel " << nivel << " devera receber uma bonificacao de " << valorDaBonificacao << endl;
                }
                else if (total_venda < 100000)
                {
                    cout << "O vendedor " << vendedor << " nivel " << nivel << " esta com risco de ir para nivel 2";
                }
            }
            else {
                cout << "Nivel invalido";
                continue;
            }
            

            /* code */
        }
        else if (sn == 2)
        {
            cout << "Programa finalizado";
            break;
        }
        else {
            continue;
        }
        /* code */
    }
