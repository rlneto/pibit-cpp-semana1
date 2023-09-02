#include <iostream>
#include <math.h>
using namespace std;

int main() {
  cout << "Este programa calcula as raizes de uma equacao do segundo grau." << endl;
  float a, b, c, delta, x1, x2;
  cout << "Digite o coeficiente de x ao quadrado: " << endl;
  cin >> a;
  cout << "Agora, digite o coeficiente de x: " << endl;
  cin >> b;
  cout << "Por fim, digite o termo independente: " << endl;
  cin >> c;
  delta = b*b - 4*a*c;
  if (delta < 0) {
    cout << "Nao ha raizes reais." << endl;
  } else {
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    cout << "As raizes sao: " << x1 << " e " << x2 << endl;
  }
  
  return 0;
}

