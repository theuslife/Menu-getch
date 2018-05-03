#include <iostream>
#include <locale.h>
#include <iomanip>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

//Programmer by: Matheus Rodrigues

int main(){

    //PT-BR
    setlocale(LC_ALL, "portuguese");

    //Funções e procedimentos
    void menu();
    void conversaoMenu();
    void linha();

    //Variáveis
    char caracter = '0';
    float celsius = 0, fahrenheit = 0;
    float cFahrenheit = 0, cCelsius = 0;
    float raio = 0, altura = 0, volume = 0;
    float tempo = 0,velocidade = 0, distancia = 0, litros = 0;

    //Menu interativo com o usuário
    do{
        system("cls");
        menu();
        linha();
        caracter = getch();
            switch (caracter){

                //Convertendo graus celsius em fahrenheit
                case '1':
                    while (caracter != '4'){
                        system("cls");
                        cout << "==============Convertendo Celsius em Fahrenheit:==================" << endl;
                        cout << "[1] Informar a quantidade de graus celsius " << endl;
                        conversaoMenu();
                        caracter = getch();
                        switch (caracter){
                        case '1':
                            system("cls");
                            cout << "Valor de Grau celsius >>> "; cin >> celsius;
                            system("pause");
                            break;
                        case '2':
                            system("cls");
                            fahrenheit = (9 * celsius + 160)/5;
                            cout << "Conversão feita com sucesso!" << endl;
                            system("pause");
                            break;
                        case '3':
                            system("cls");
                            cout << "Valor da conversão de °C em °F: " << fahrenheit << endl;
                            system("pause");
                            break;
                        }
                    }
                break;

                 //Convertendo graus fahrenheit em celsius
                case '2':
                    while (caracter != '4'){
                        system("cls");
                        cout << "==============Convertendo Fahrenheit em Celsius:==================" << endl;
                        cout << "[1] Informar a quantidade de graus fahrenheit " << endl;
                        conversaoMenu();
                        caracter = getch();
                        switch (caracter){
                        case '1':
                            system("cls");
                            cout << "Valor do Grau fahrenheit >>> "; cin >> fahrenheit;
                            system("pause");
                            break;
                        case '2':
                            system("cls");
                            celsius = (fahrenheit - 32)/1.8;
                            cout << "Conversão feita com sucesso!" << endl;
                            system("pause");
                            break;
                        case '3':
                            system("cls");
                            cout << "Valor da conversão de °F em °C: " << celsius << endl;
                            system("pause");
                            break;
                        }
                    }
                break;

                //Calculando um cilíndro
                case '3':
                    while (caracter != '4'){
                        system("cls");
                        cout << "==============Sabendo o volume de um cilíndro ====================" << endl;
                        cout << "[1] Informe o Raio e Altura do Cilíndro" << endl;
                        cout << "[2] Fazer os cálculos para obter o resultado do volume" << endl;
                        cout << "[3] Mostrar o volume do Cilíndro" << endl;
                        cout << "[4] Voltar para o menu anterior" << endl;
                        linha();
                        caracter = getch();
                        switch (caracter){
                        case '1':
                            system("cls");
                            cout << "Informe o valor do raio do cilíndro >>> "; cin >> raio;
                            cout << "\nAgora informe a altura do cilíndro >>> "; cin >> altura;
                            system("pause");
                            break;
                        case '2':
                            system("cls");
                            volume = M_PI * pow(raio,2) * altura;
                            cout << "Cálculos feitos com sucesso!" << endl;
                            system("pause");
                            break;
                        case '3':
                            system("cls");
                            cout << "Volume do cilíndro: " << volume << "m³" << endl;
                            system("pause");
                            break;
                        }
                    }
                break;

                //Calculando quantidade de listros gastos
                case '4':
                    caracter = '0';
                    while (caracter != '4'){
                        system("cls");
                        cout << "==============Quantidade de litros gastos por um carro de 12km por litro ====================" << endl;
                        cout << "[1] Informe o tempo gasto de viagem e a velocidade média usada durante o trajeto" << endl;
                        cout << "[2] Calcular a distancia através dos dados fornecidos no primeiro tópico" << endl;
                        cout << "[3] Saber a quantidade de litros gastos na viagem, distância, velocidade e tempo" << endl;
                        cout << "[4] Voltar para o menu anterior" << endl;
                        linha();
                        caracter = getch();
                        switch (caracter){
                        case '1':
                            system("cls");
                            cout << "Informe o tempo gasto na viagem em hora >>> "; cin >> tempo;
                            cout << "Agora informe a velocidade média da sua viagem >>> "; cin >> velocidade;
                            cout << "\Dados fornecidos com sucesso!" << endl;
                            system("pause");
                            break;
                        case '2':
                            system("cls");
                            cout << "Velocidade média: " << velocidade << endl;;
                            cout << "Tempo: " << tempo << endl;;
                            distancia = tempo * velocidade;
                            litros = distancia/12;
                            cout << "Distancia = " << velocidade << " x " << tempo << endl;
                            cout << "\Calculos feitos com sucesso!" << endl;
                            system("pause");
                            break;
                        case '3':
                            system("cls");
                            cout << "Velocidade média: " << velocidade << "KM/h" << endl;;
                            cout << "Tempo: " << tempo << "H" << endl;
                            cout << "Distancia: " << distancia << "KM" << endl;
                            cout << "Litros gastos na viagem: " << litros << "L" << endl;
                            system("pause");
                            break;
                        }

                    }

            }
    } while (caracter != 27);
    return 0;
}

void menu(){
        cout << "==============Bem vindo ao programa:==============" << endl;
        cout << "[1] Converter grau celsius em fahrenheit" << endl;
        cout << "[2] Converter grau fahrenheit em celsius" << endl;
        cout << "[3] Calcular o volume de um cilindro" << endl;
        cout << "[4] Calcular quantidade de litros gastos durante uma viagem\n" << endl;
        cout << "[ESC]Sair da aplicação" << endl;
}
void conversaoMenu(){
    void linha();
    cout << "[2] Fazer a conversão" << endl;
    cout << "[3] Mostrar resultados da conversão" << endl;
    cout << "[4] Voltar para o menu anterior" << endl;
    linha();
}

void linha(){
    cout << "==================================================================" << endl;
}



