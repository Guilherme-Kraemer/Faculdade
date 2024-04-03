#include <iostream>
using namespace std;

const int a = 4;
const int b= 5;

void somaa(int matriz[a][b], int vetorSomas[]) {
    for (int j = 0; j < b; ++j) {
        vetorSomas[j] = 0; 
        for (int i = 0; i < a; ++i) {
            vetorSomas[j] += matriz[i][j]; 
        }
    }
}

int main() {
    int matriz[a][b];
    int vetorSomas[b];


    cout << "digite os elementos da matriz 4x5:\n";
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
    somaa(matriz, vetorSomas);

    bool maiorquedez = false;
    cout << "a soma das colunas sao:\n";
    for (int j = 0; j < b; ++j) {
        if (vetorSomas[j] > 10) {
            cout << vetorSomas[j] << endl;
                 maiorquedez = true;
        }
    }
    if (!maiorquedez) {
        cout << "nao existe soma.\n";
    }

    return 0;
}