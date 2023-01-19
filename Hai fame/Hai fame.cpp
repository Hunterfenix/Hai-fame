//includo le librerie
#include <iostream>
#include <string>
#include <Windows.h>
//inizializzo la funzione main
int main()
{
	//inizializzo le variabili
	std::string a;
	int p;
	//Faccio la domanda e dichiaro come dovra essere la risposta 
	std::cout << "Hai fame?\nRispondi si o no" << std::endl;
		
	//faccio immettere la risposta 
	std::cin >> a;
	
		if (a == "si")//nel caso sia si 
		{
			//chiedo uanti panini vuole l'utente
			std::cout << "quanti panini vuoi?";
			//gli faccio inserire il numero di panini che vuole l'utente
			std::cin >> p;

			do//faccio un ciclo do while per far mangiare un panino alla volta con una temporizazzione 
			{
				Sleep(1000);
				std::cout << "ho mangiato un panino me ne rimangono ";
				p--;
				std::cout << p << std::endl;
			
			} while (p << 0);

		}
		else//se non ha fame 
		{
			std::cout << "Va bene arrivederci!";

		}

	return 0;
}