//escriba, compile y ejecute un programa en c++ que emplee instrucciones repetitivas para determinar el numero de vehiculos cuyo precio de venta sea menor de 25000$
//entre 75000$ y 120000$ y mayores de 120000 de un total de n ventas realizadas mensualmente ingresada por teclado
#include <iostream>
#include <limits>
using namespace std;
int maim(){
  char repetir;
  do{
  int v, precio = 0;
  int contMenor = 0;
  int contMedio = 0;
  int contMayor = 0; 
  
  cout<<"Venta (V): ";
  if (!(cin >> v) || v <= 0) continue;
  
  int i = 1;
  while (i <= v){
  	cout <<"Precio " << i << " : $";
  	if (!(cin >> precio)) {cin.clear();
	  
	  if (precio < 25000) {
	  	contMenor++;
	} else if (precio <= 120000) {
	  	contMedio++;
	  }else {
	  	contMayor++;
	  }
	  i++;
}
  cout<< "Es Menor que 25000:" << contMenor << endl;
  cout << "entre 25000 y 120000: " << contMedio << endl; 
  cout << " Mayor de 120000: " << contMayor << endl;
  
  cout << "Desea repetir (S/N): ";
  cin >> repetir;
  
 }while (repetir == 'C' || repetir == 'c');
return 0;
}
  	
  	
  

  
	

