#include <iostream>
#include <string>

using namespace std;

bool isCapicua(int in);
void duplicate(int &in);
float dividir(int a, int b);

int main() {
    cout << std::boolalpha;
    cout << isCapicua(121) << endl;
    cout << isCapicua(123) << endl;

    int x;
    cout << "Introduce un numero: ";
    cin >> x;
    duplicate(x);

    cout << "El doble del numero es: " << x << endl;

    cout << "Dividir 8 /5 = " << dividir(8,5);
    return 0;
}

bool isCapicua(int in){
    string number = to_string(in);
    string reverse = "";

    for (int i = number.size() - 1; i >= 0 ; --i) {
        reverse += number[i];
    }

    if(number == reverse){
        return true;
    } else {
        return false;
    }
}

void duplicate(int &in){
    in = in * 2;
}

float dividir(int a, int b){
    return float(a) / float(b);
}