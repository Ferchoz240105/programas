#include <ctime>
#include <iostream>
#include <math.h> 

void mostrarTiempo(clock_t tiempo);

int main(){
	clock_t tiempo = clock(); 
	long long i = 0;
	double sum = 0;
	for (i = 1; i < 1000000000; i++){
		sum = sum + log(double(i));
	}
	
	mostrarTiempo(tiempo);
	
	std::cout<<"Pulse para salir…";
	std::cin.get();
	return 0;
}
void mostrarTiempo(clock_t tiempo){
tiempo = clock() - tiempo;
std::cout << std::endl << "Tiempo de ejecucion es " << double(tiempo) / CLOCKS_PER_SEC << " seg." << std::
endl;
}
