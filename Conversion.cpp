#include <iostream>

int main() {
  double Pesos,Reais,Soles;
  double dollars;
  
  
  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> Pesos;
  //Pesos conversion rate: 0.00032
  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> Reais;
  //Reais conversion rate: 0.27
  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> Soles;
  //Soles conversion rate: 0.3

  dollars = 0.00032 * Pesos + 0.27 * Reais + 0.3 * Soles;

  std::cout << "Total USD = $" << dollars << "\n";


  
  
}
