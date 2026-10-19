#include <iostream>
using namespace std;

// --- PROTOTIPOS DE FUNCIONES DEL MENÚ ---
void EjecutarBisiesto();
void EjecutarSerieAlternada();
void EjecutarMayorMenor();
void EjecutarVocalConsonante();
void EjecutarProductoSumas();
void PresioneContinuar();

// ==========================================
// PROGRAMA PRINCIPAL (MENÚ)
// ==========================================
int main() {
    int opcion = 0;

    while (opcion != 6) {
        system("cls"); // Limpia la pantalla en Windows
        cout << "=== MENÚ PRINCIPAL - 5 EJERCICIOS (C++) ===" << endl;
        cout << "1. Verificar Año Bisiesto" << endl;
        cout << "2. Serie Alternada de Signos" << endl;
        cout << "3. Mayor de Dos Números (o Iguales)" << endl;
        cout << "4. Identificar Vocal o Consonante" << endl;
        cout << "5. Producto de Dos Números por Sumas Sucesivas" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opción (1-6): ";
        
        if (cin >> opcion) {
            switch (opcion) {
                case 1:
                    EjecutarBisiesto();
                    break;
                case 2:
                    EjecutarSerieAlternada();
                    break;
                case 3:
                    EjecutarMayorMenor();
                    break;
                case 4:
                    EjecutarVocalConsonante();
                    break;
                case 5:
                    EjecutarProductoSumas();
                    break;
                case 6:
                    cout << "\n¡Gracias por usar el programa! Saliendo..." << endl;
                    break;
                default:
                    cout << "\nOpción no válida. Intente de nuevo." << endl;
                    PresioneContinuar();
                    break;
            }
        } else {
            // Por si escriben una letra en vez de un número
            cout << "\nPor favor, ingrese un número válido." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            opcion = 0;
            PresioneContinuar();
        }
    }

    return 0;
}

// ==========================================
// EJERCICIO 1: AÑO BISIESTO
// ==========================================
void leerAnio(int &a) {
    cout << "Ingrese el año: ";
    cin >> a;
}

void verificarAnio(int a) { 
    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                cout << "Es año bisiesto\n"; 
            } else {
                cout << "No es año bisiesto\n"; 
            }
        } else {
            cout << "Es año bisiesto\n";     
        }
    } else {
        cout << "No es año bisiesto\n";      
    }
}

void EjecutarBisiesto() {
    system("cls");
    cout << "--- VERIFICAR AÑO BISIESTO ---" << endl;
    int a;
    leerAnio(a);
    verificarAnio(a);
    PresioneContinuar();
}

// ==========================================
// EJERCICIO 2: SERIE ALTERNADA DE SIGNOS
// ==========================================
void leerSerie(int &n) {
    cout << "Ingrese la cantidad de terminos a generar: ";
    cin >> n;
}

void generarSerie(int n) {
    int signo = 1;
    cout << "Serie alterna de signo:\n";
    for (int i = 1; i <= n; i++) {
        cout << signo << " ";
        signo = signo * (-1);
    }
    cout << endl;
}

void EjecutarSerieAlternada() {
    system("cls");
    cout << "--- SERIE ALTERNADA DE SIGNOS ---" << endl;
    int n;
    leerSerie(n);
    generarSerie(n);
    PresioneContinuar();
}

// ==========================================
// EJERCICIO 3: MAYOR DE DOS NÚMEROS
// ==========================================
void leerNumerosMayor(int &A, int &B) {
    cout << "Ingrese el primer numero A: ";
    cin >> A;
    cout << "Ingrese el segundo numero B: ";
    cin >> B;
}

void mostrarMayoroigual(int A, int B) {
    if (A > B) {
        cout << "A es mayor\n";
    } else if (B > A) {
        cout << "B es mayor\n";
    } else {
        cout << "Son iguales\n";
    }
}

void EjecutarMayorMenor() {
    system("cls");
    cout << "--- MAYOR DE DOS NÚMEROS ---" << endl;
    int A, B;
    leerNumerosMayor(A, B);
    mostrarMayoroigual(A, B);
    PresioneContinuar();
}

// ==========================================
// EJERCICIO 4: VOCAL O CONSONANTE
// ==========================================
void leerLetra(char &m) {
    cout << "Ingrese una letra minuscula: ";
    cin >> m;
}

void verificarLetra(char m) {
    if (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u') {
        cout << "Vocal\n";
    } else {
        cout << "Consonante\n";
    }
}

void EjecutarVocalConsonante() {
    system("cls");
    cout << "--- IDENTIFICAR VOCAL O CONSONANTE ---" << endl;
    char m;
    leerLetra(m);
    verificarLetra(m);
    PresioneContinuar();
}

// ==========================================
// EJERCICIO 5: PRODUCTO POR SUMAS SUCESIVAS
// ==========================================
void leerNumerosProducto(int &a, int &b) {
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
}

void mostrarSumaProducto(int a, int b) {
    int c = 0;
    for (int i = 1; i <= b; i++) {
        c = c + a;
    }
    cout << "El producto de ambos numeros es:\n";
    cout << c << endl;
}

void EjecutarProductoSumas() {
    system("cls");
    cout << "--- PRODUCTO POR SUMAS SUCESIVAS ---" << endl;
    int a, b;
    leerNumerosProducto(a, b);
    mostrarSumaProducto(a, b);
    PresioneContinuar();
}

// ==========================================
// FUNCIÓN AUXILIAR DE PAUSA
// ==========================================
void PresioneContinuar() {
    cout << "\nPresione Enter o cualquier tecla para volver al menú...";
    cin.ignore();
    cin.get();
}
