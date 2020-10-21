#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
      double horasAjustadas = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > JORNADA) {
        double Ajuste = (horasTrabalhadas - JORNADA)/2;
        horasAjustadas += Ajuste;
      }
	  return horasAjustadas * salarioHora;
}
