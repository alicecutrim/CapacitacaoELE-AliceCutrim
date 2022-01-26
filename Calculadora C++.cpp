// Calculadora Básica em C++
#include <iostream>
using namespace std;

int main() {

    int num1, num2, result;
    char operacao;

    cout << "Digite o primeiro número: " << endl;
    cin >> num1;

    cout << "Digite uma das operacoes [+, -, /, *]" << endl;
    cin >> operacao;

    cout << "Digite o segundo número: " << endl;
    cin >> num2;

    switch(operacao)
    {
        case "+":
        result = num1 + num2 
        case "-":
        result = num1 - num2 
        case "*":
        result = num1 * num2 
        case "/":
        try
        {
            if (num2 == 0)
            {
                throw num2;
            }
            result = num1 / num2 
        }
        catch(int ex)
        {
            cout << "Exception: Zero Division" << '\n';
        }
        
    }
    cout << num1 << operacao << num2 << " = " << result << endl;


    return 0;
}