#include <stdio.h>

// 1. Definicja funkcji main: tu zaczyna dzialac program
int main(void){

	int result;	// zmienna-rezultat dzialan
	
	result = add(2,2);	// dodawanie
	showNumber(result);	// wynik=4
	
	result = subtract(4,3);	// odejmowanie
	showNumber(result);		// wynik=1
	
	result = multiply(2,2);	// mnozenie
	showNumber(result);		// wynik=4
	
	result = divide(4,2);		// dzielenie
	showNumber(result);		// wynik=2

}

// 2. Definicja funkcji dodajacej 2 liczby
int add(int a,int b){


	return a + b;


}

// 3. Definicja funkcji odejmujacej
// 4. Definicja funkcji mnozacej
// 5. Definicja funkcji dzielacej

// 6. Definicja funkcji wyswietlajacej wynik
void showNumber(int n){
	
	printf("%d\n",n);
}
