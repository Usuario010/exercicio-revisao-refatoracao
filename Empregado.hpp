#ifndef EMPREGADO_H
#define EMPREGADO_H
#define MESES 12
#define JORNADA 8
#include <iostream>
#include <string>
using namespace std;
class Empregado {
	
  public:
    double salarioHora;   
    string nome;
    double pagamentoMes(double horasTrabalhadas);
	
};

#endif
