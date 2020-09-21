#include <iostream>
using namespace std;

int main() {

    // Problema 1. //

/*
long long resultado = 0; 
for (int i = 0; i <= 1000000 ; i++ ){
    if (i%3 == 0)
        resultado = resultado + i;
    else if (i%5 == 0)
        resultado = resultado + i;
}
cout << resultado;
*/

    // Problema 2. //

/*
int n;
cout << "ingrese un numero ";
cin >> n;
for (int i = 1; i< n; i++){
    if (i%2 != 0)
        cout << i;
    if (i != n-1 && i%2 != 0) 
        cout << ",";
}
*/

    // Problema 3. //

/*
int n;
cout << "ingrese un numero ";
cin >> n;
for (int i = 1; i< n; i++){
    if (i%2 != 0)
        cout << i << " ";
}
*/

    // Problema 4. //

/*
cout << "Escribe un numero: ";
int n;
cin >> n;
int result = 0 ;
for(int i=1; i<n ; i++){
    if (n%i == 0){
        result = i+result;
    }
}
if (n == result)
    cout << result << " es un numero perfecto";
*/

    // Problema 5. //

    // Problema 6. //

/*
long long n = 600851475143;
bool primo = true;
for(int i = 1; i<n; i++){
    if (n%i == 0){
        for(int j=2; j<i && primo == true; j++){
            if (i%j == 0)
                primo = false;
            cout << i << " ";
        }
    }
}
*/


}