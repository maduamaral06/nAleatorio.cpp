#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    int nAleatorio = rand() %51;
    int nDigitado;
    cout << "    ===Adivinhe o Numero===";
    cout << "\n🎯Tente a sorte e use sua intuição";
    cout << "\n para adivinhar um número misterioso entre 0 e 50";
    cout << "\n Será que você comsegue acertar?";
    cout << "\n Digite seu palpite: ";
    cin >> nDigitado;

    if(nDigitado < 0 || nDigitado > 50){
        cout << "Número Inválido";
        return 0;
    }

    while (nDigitado != nAleatorio)
    {
        if(nDigitado < nAleatorio){
            cout << "\n🔺 Quase! O número é maior que isso. Tente novamente";
            cout << "\n Digite seu palpite: ";
            cin >> nDigitado;
        }
        if(nDigitado > nAleatorio){
            cout << "\n🔻 Ih, passou! O número é menor. Tente de novo!";
            cout << "\n Digite seu palpite: ";
            cin >> nDigitado;  
        }
    }

    if (nDigitado == nAleatorio)
    {
        cout << "\n🎉 Incrível! Você adivinhou corretamente! O número era mesmo " << nAleatorio;
    }
    
    return 0;
}