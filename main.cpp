#include "Engenheiro.hpp"
#include "Vendedor.hpp"
using namespace std;
int main() {

  Engenheiro eng1;
  eng1.nome = "Joao Snow";
  eng1.salarioHora = 35;
  eng1.projetos = 3; 
  cout << "Nome: " << eng1.nome << endl;
  cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << endl;
  cout << "Projetos: " << eng1.projetos << endl;
  cout << endl;
  
  Engenheiro eng2;
  eng2.nome = "Daniela Targaryen";
  eng2.salarioHora = 30;
  eng2.projetos = 1; 
  cout << "Nome: " << eng2.nome << endl;
  cout << "Salario Mes: " << eng2.pagamentoMes(8) << endl;
  cout << "Projetos: " << eng2.projetos << endl;  
  cout << endl;
  
  Engenheiro eng3;
  eng3.nome = "Bruno Stark";
  eng3.salarioHora = 30;
  eng3.projetos = 2; 
  cout << "Nome: " << eng3.nome << endl;
  cout << "Salario Mes: " << eng3.pagamentoMes(8) << endl;
  cout << "Projetos: " << eng3.projetos << endl;  
  cout << endl;
   
  Vendedor vend1;
  vend1.nome = "Tonho Lannister";
  vend1.salarioHora = 20;
  
  cout << "Nome: " << vend1.nome << endl;
  cout << "Salario Mes: " << vend1.pagamentoMes(6) << endl;  
  cout << "Quota vendas: " << vend1.quotaTotalAnual(5000) << endl;
  cout << endl;
  
  Vendedor vend2;
  vend2.nome = "Jose Mormont";
  vend2.salarioHora = 25;
  
  cout << "Nome: " << vend2.nome << endl;
  cout << "Salario Mes: " << vend2.pagamentoMes(8) << endl;  
  cout << "Quota vendas: " << vend2.quotaTotalAnual(3000) << endl; 
  cout << endl;  
	
  Vendedor vend3;
  vend3.nome = "Sonia Stark";
  vend3.salarioHora = 30;
  
  cout << "Nome: " << vend3.nome << endl;
  cout << "Salario Mes: " << vend3.pagamentoMes(8) << endl;  
  cout << "Quota vendas: " << vend3.quotaTotalAnual(4000) << endl;  
  
  return 0;	
}
