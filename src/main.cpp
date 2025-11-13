//Jakub Grątkiewicz

#include <iostream>
#include <fstream>

using namespace std;

// Zadanie 2
// Zadanie 2.1
string z2_1_path_symbole_txt = "../zalaczniki-2025/symbole.txt";

bool czy_palindrom(string tekst){
    int ile_znakow = tekst.length();
    for(int i =0; i < ile_znakow/2 ; i++){
        if(tekst[i] != tekst[ile_znakow-i-1])
            return false;
    }
    return true;
}

void Zadanie2_1(){
    ifstream plik(z2_1_path_symbole_txt);
    if(!plik.is_open()){
        cerr << "Nie mozna otworzyc pliku" << endl;
    }

    ofstream wynik("wynik2_1.txt");

    string linia;
    while(plik >> linia){
        if(czy_palindrom(linia)){
            cout << linia << endl;
            wynik << linia << endl;
        }
    }
    wynik.close();
    plik.close();
}

// Zadnaie 2.2

bool czyKwadrat2_2(string linia[3], int start) {
    char znak = linia[0][start];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (linia[i][start + j] != znak) {
                return false;
            }
        }
    }
    return true;
};

struct wspolrzedne{
    int x;
    int y;
};

void Zadanie2_2() {
    ifstream plik(z2_1_path_symbole_txt);
    if (!plik.is_open()) {
        cerr << "Nie udalo sie otworzyc pliku!" << endl;
        return;
    }

    ofstream wynik("../wynik2_2.txt");

    string linia[3];
    plik >> linia[0];
    plik >> linia[1];
    int row = 1;
    int num = 0;
    struct wspolrzedne wspolrzedne[2000];
    while (plik >>linia[2]) {
        for (int i = 0; i < linia[0].size()-2; i++) {
            if (czyKwadrat2_2(linia, i)) {
                wspolrzedne[num].x = row+1;
                wspolrzedne[num].y = i+2;
                num ++;
            }
        }
        row ++;
        linia[0] = linia[1];
        linia[1] = linia[2];
    }

    cout << num << " ";
    for (int i = 0; i < num; i++) {
        cout << wspolrzedne[i].x << " ";
        cout << wspolrzedne[i].y << " ";
    }

    wynik << num << " ";
    for (int i = 0; i < num; i++) {
        wynik << wspolrzedne[i].x << " ";
        wynik << wspolrzedne[i].y << " ";
    }

    plik.close();
    wynik.close();
}

int main() {
    cout << "Zadanie 2.1" << endl;
    Zadanie2_1();
    cout << "Zadanie 2.2" << endl;
    Zadanie2_2();
    return 0;
}
