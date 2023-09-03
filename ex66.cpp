#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    int pos = 0;
    int indexIN = 0;
    cout << "Введите количество строк: ";
    cin >> pos;
    setlocale(0, "rus");
    string path = "Filep.txt";
    string str = "";
    string out = "";
    ofstream fs;
        fs.open(path, ofstream::app);
    if (!fs.is_open()) {
        cout << "Ошибка открытия файла";
    }
    else {
        cout << "Файл открыт" << endl;
    }
    for (int i = 0; i < pos; i++) {
        cin >> str;
        int r = str.length() + 1;
         for (int i = 0; i < r; i++){
            if (str[indexIN] >= '0'&& str[indexIN] <= '9')
                indexIN++;
            else {
                out = out + str[indexIN];
                indexIN++;

            }
            fs << out << endl;
    }

    fs.close();
    ifstream fl;
    fl.open(path);
        while (fl.eof()) {
            string r = "";
            fl >> r;
            cout << r << endl;
            }


        }


}
