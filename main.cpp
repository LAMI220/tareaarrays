#include<iostream>

using namespace std;

int main() {
    int numero, i, n, *p, suma = 0, vector1[] = {};
    int a, menor, mayor, numeros[10];
    int *vtr;

    cout << "Segun lo que desee realizar seleccione las siguientes opciones" << endl;
    cout << endl;
    cout << "1. Escribir un programa que calcule la suma de los elementos de un array de enteros de 10 posiciones.\n"
            "\n"
            "2.Escribir un programa que encuentre el numero mayor en un array de enteros de 6 posiciones.\n"
            "\n"
            "3. Escribir un programa que invierta el orden de los elementos en un array de enteros de 8 posiciones.\n"
            "\n"
            "4. Escribir un programa que muestre la suma de todos los numeros de un array de enteros de 10 posiciones.\n"
            "\n"
            "5. Escribir un programa que cuente el numero de veces que aparece cada fruta en el siguiente array: ";
    cout << endl;
    cin >> numero;

    switch (numero) {
        case 1:
            cout << "Ingresa el tamaño del arreglo:";
            cin >> n;
            p = new int[n];
            for (i = 0; i < n; ++i) {

                cout << "Ingresa un numero:";
                cin >> p[i];

            }

            for (i = 0; i < n; ++i) {

                suma += p[i];

            }
            cout << "La suma de los numeros es:" << suma;
            break;
        case 2:
            cout << "Ingresa el tamaño del array";
            cin >> n;
            for (i = 0; i < n; i++) {
                cout << "Digite un numero ";
                cin >> numeros[i];
            }
            menor = numeros[0];
            mayor = numeros[0];
            for (i = 0; i < n; i++) {
                if (numeros[i] < menor) {
                    menor = numeros[i];
                }
                if (numeros[i] > mayor) {
                    mayor = numeros[i];
                }
            }
            cout << "El numero menor es: " << menor << endl;
            cout << "El numero mayor: " << mayor;
            break;

        case 3:
            int n, i, VA, nums[8];
            cout << "digite el numero de elementos: " << endl;
            cin >> n;
            for (int i = 0; i < n; i++) {
                cout << i + 1 << ". Digite un numero: " << endl;
                cin >> nums[i];
            }
            cout << "------------DATOS EN FORMA ASCENDENTE-----------------     " << endl;
            for (i = 0; i < n; i++) {
                cout << "elementos " << i + 1 << " : " << nums[i] << endl;
            }
            for (i = 0; i < n / 2; i++) {
                VA = nums[i];
                nums[i] = nums[n - 1 - i];
                nums[n - 1 - i] = VA;
            }
            cout << "-----------------DATOS EN FORMA DESCENDENTE----------------------------" << endl;
            for (i = 0; i < n; i++) {
                cout << "elementos " << i + 1 << " : " << nums[i] << endl;
            }
            break;
        case 4:
            int num[10] = {6, 8, 7, 4, 1, 4, 4, 7, 5, 3,};
            int sum = 0;
            cout << "Se digitara una serie de numeros";
            for (i = 0; i < 10; i++) {
                cout << "numero " << i + 1 << " es: " << num[i] << endl;
            }
            for (i = 0; i < 10; i++) {
                sum += num[i];
                cout << "las suma es: " << sum << endl;
            }
            break;
        case 5:
            string frut;
            int contador;
            string fruta[] = {"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
            contador = 0;
            for (i = 0; i < 9; i++) {
                cout << i + 1 << " frutas: " << fruta[i] << endl;
            }//nos imprime todos nuestros datos del arreglo
            cout << "*********************************************************************" << endl;
            cout << "Escriba la fruta que quiere saber cuantas veces se repite: ";
            cin >> frut;
            for (i = 0; i < 9; i++) {
                if (frut == fruta[i])
                    contador++;
            }
            cout << "la fruta: " << frut << " se repite: " << contador << endl;
            break;
    }
    return 0;
}
