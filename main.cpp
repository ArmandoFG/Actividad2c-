#include <iostream>
#include "calculadora.h"

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

	int x = 0;
    int y = 0;
    int result = 0;
    char oper = '+';

    cout << "Calculator Console Application" << endl;
    cout << "Escoger opcion: "
         << endl;
         
	cout << "+) sumar"
         << endl;
    cout << "-) restar"
         << endl;
	cout << "*) multiplicar"
         << endl;
    cout << "/) dividir"
         << endl;
    
    
        
        
        do{
        	calculadora c;
        	cin >> x >> oper >> y;
        
        switch(oper)
    {
        case '+':
        	
            result = c.suma(x,y);
            cout << "Result is: " << result << endl;
            break;
        case '-':
        
            result = c.resta(x,y);
            cout << "Result is: " << result << endl;
            break;
        case '*':
            result = c.multi(x,y);
            cout << "Result is: " << result << endl;
            break;
        case '/':
       
            result = c.div(x,y);
            cout << "Result is: " << result << endl;
            break;
       
    }
        
        
    }while (true);
    {}

	return 0;
}

	
