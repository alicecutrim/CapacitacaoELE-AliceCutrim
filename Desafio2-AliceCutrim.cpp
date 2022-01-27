// Calculadora Básica em C++
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float resultado; //Definição dos tipos das variáveis 
    long double fatorial = 1.0;
    int a, b, operacao, resto, erro;
    char repetir;
    
    cout << "CALCULADORA \n";

    do{ //Permite que sejam realizadas mais de uma operação no mesmo código
    system("CLS");
    cout << "Opções de Operação: " << endl << endl;
    cout << "1. Adição" << endl;
    cout << "2. Subtração" << endl;
    cout << "3. Multiplicação" << endl;
    cout << "4. Divisão" << endl;
    cout << "5. Potenciação" << endl;
    cout << "6. Radiciação" << endl;
    cout << "7. Fatorial" << endl;
    cout << "\nDigite a opção desejada: ";
    cin >> operacao;


    switch(operacao){ //switch-case para inicializar o bloco de código de acordo com a operação escolhida
        
        case 1:
        cout << "Entre com dois números: ";
        cout << endl;
        cin >> a >> b;
        resultado = a + b;
        cout << a << " + " << b << " = " << resultado << endl;
        break;
        
        case 2:
        cout << "Entre com dois números: ";
        cout << endl;
        cin >> a >> b;
        resultado = a - b;
        cout << a << " - " << b << " = " << resultado << endl;
        break;
        
        case 3:
        cout << "Entre com dois números: ";
        cout << endl;
        cin >> a >> b;
        resultado = a * b;
        cout << a << " * " << b << " = " << resultado << endl;
        break;
        
        case 4:
        cout << "Entre com dividendo e divisor, respectivamente: ";
        cin >> a >> b;
        try //Exception handling: divisão por zero
        {
            if (b == 0)
            {
                throw b;
            }
            resultado = a / b;
            resto = a % b;
            cout << a << " / " << b << " = " << resultado << endl;
            cout << "Resto = " << resto << endl;
        }
        catch(int c)
        {
            cout << "Exception: Zero Division" << '\n';
        }
        break;
        
        case 5:
        cout << "Entre com base e expoente, respectivamente: " << endl;
        cin >> a >> b;
        resultado = pow(a, b);
        cout << a << " elevado a " << b << " é " << resultado << endl;
        break;
        
        case 6:
        cout << "Entre com o valor cuja raiz quadrada é desejada: " << endl;
        cin >> a;
        resultado = pow(a, 1/2);
        cout << "A raiz quadrada de " << a << " é " << resultado << endl; 
        break;
        
        case 7:
        cout << "Entre com o valor cujo fatorial é desejado: " << endl;
        cin >> a;
        if (a <0)
            cout << "Não existe fatorial de números negativos";
        else 
        {
            for (int i = 1; i <= a; ++i)
            {
                fatorial*= i;
            }
        }
        cout << "O fatorial de " << a << " é " << fatorial << endl;
        break;

    }
    cout << "Gostaria de realizar outra operação? (Digite 's' ou 'n') ";
    cin >> repetir;
    }
    while(repetir == 's' ||repetir  == 'S');

    cin.get();
    return 0;
}