#include <iostream>

using namespace std;

int main() {


    // IF- IF ELSE
}
/*
int edad;

    cout <<"Calcular mayor o menor de edad";
    cout <<"ingrese su edad en años:";
    cin >> edad;


    if (edad>=18){

cout <<"Eres mayor de edad";
    }else {

cout <<"Eres menor de edad";
    }

    return 0;
}
*/

/*
int num1, num2;

    cout << "Ingrese dos numeros" << endl;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    if (num1>num2) {
        cout <<"El primer numero es mayor al segundo" << endl;
    } else {

    cout <<"El segundo numero es mayor al primero" << endl;
    }

    return 0;
}
*/


/*
int num;

cout <<"ingresa un numero entero" << endl;
cin >> num;

    if (num%2==0)  {
      cout <<"El numero es par" << endl;
    }
else {
    cout<< "El numero es impar" << endl;

}
   return 0;

} */

// FOR-WHILE

/*
//calcular factorial
int num, i, factorial;
    cout << "Introduce un numero: ";
    cin >> num;
    factorial=1;
    for(i=1;i<=num;i++)
        factorial = factorial * i;
    cout << endl << "Factorial de " << num << " es: " << factorial << endl;
    return 0;

}  */


/*
    int n1, n2;
    do {
        cout << "Ingrese un numero mayor que 10, menor que 30: ";
        cout << endl;
        cin >> n1;
    } while (n1 <= 10 || n1 > 30);
    {
        cout << " Los numeros impares hasta llegar a " << n1 << " son:" << endl;
    }
    for (n2 = 1; n2 <= n1; n2++) {
        if (n2 % 2 != 0) {
            cout << " " << n2 << endl;
        }
    }
    return 0;
} */


/*
        int num,i=1;

        cout<<"Por favor, Ingrese un numero mayor o igual a 10, menor o igual a 30:" << endl;
        cin>>num;

        if(num>9 && num<31) {
            cout<<"Los numeros impares del 1 hasta "<<num<<" son :\n";
            while(i<=num) {
                if(i%2!=0){
                    cout<<i<<"\n";
                }
                i++;
            }
            cout<<endl;
        }else{
            cout<<"error";
        }

        return 0;
    }
 */

    // SWITCH




/*

using namespace std;
int main() {
    int num = 0;
cout<< "Por favor ingresa un numero de uno a cinco:\n";

cin>>num;

switch  (num) {

    case 1:
        cout << "Dia lunes\n";
    case 2:
        cout << "Dia Martes\n";
    case 3:
        cout << "Dia Miercoles\n";
    case 4:
        cout << "Dia Jueves\n";
    case 5:
        cout << "Dia Viernes\n";

        break;
}
}
*/


