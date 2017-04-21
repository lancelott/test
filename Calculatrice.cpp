#include <iostream>
using namespace std;

int addition(int num1, int num2){
	int result = num1 + num2;
	return result;
}

int soustraction(int num1, int num2){
	int result = num1 - num2;
	return result;
}

int multiplication(int num1, int num2){
	int result = num1 * num2;
	return result;
}

int division(int num1, int num2){
	int result = num1 / num2;
	return result;
}

int modulo(int num1, int num2){
	int result = num1 % num2;
	return result;
}

int calculer(){

	int operation = 0;
	int num1 = 0;
	int num2 = 0;
	int resultat = 0;

	cout << "Choisissez votre operation entiere:" << endl;
	cout << "1 -Addition" << endl;
	cout << "2 -Soustraction" << endl;
	cout << "3 -Multiplication" << endl;
	cout << "4 -Division" << endl;
	cout << "5 -Modulo" << endl;
	cout << "Type d'Operation: ";
	cin >> operation;

	switch (operation){
	case 1:
		cout << "Choisissez 2 nombres a additionner..." << endl;
		cin >> num1;
		cin >> num2;
		addition(num1, num2);
		resultat = addition(num1, num2);
		cout << "L'addition de " << num1 << " et " << num2 << " donne: " << resultat << endl;
		break;
	case 2:
		cout << "Choisissez 2 nombres a soustraire..." << endl;
		cin >> num1;
		cin >> num2;
		soustraction(num1, num2);
		resultat = soustraction(num1, num2);
		cout << "La soustraction de " << num1 << " et " << num2 << " donne: " << resultat << endl;
		break;
	case 3:
		cout << "Choisissez 2 nombres a multiplier... " << endl;
		cin >> num1;
		cin >> num2;
		multiplication(num1, num2);
		resultat = multiplication(num1, num2);
		cout << "La multiplication de " << num1 << " par " << num2 << " donne: " << resultat << endl;
		break;
	case 4:
		cout << "Choisissez 2 nombres a diviser... " << endl;
		cin >> num1;
		cin >> num2;
		division(num1, num2);
		resultat = division(num1, num2);
		cout << "La division de " << num1 << " par " << num2 << " donne: " << resultat << endl;
		break;
	case 5:
		cout << "Choisissez 2 nombres a pour chercher un modulo... " << endl;
		cin >> num1;
		cin >> num2;
		modulo(num1, num2);
		resultat = modulo(num1, num2);
		cout << "Le modulo de " << num2 << " de " << num1 << " donne: " << resultat << endl;
		break;
	}

	return resultat;
}

int main(){

	int choix = 0;
	int num1 = 0;
	int num2 = 0;

	cout << "===== CALCULATRICE --- ENTIERS =====" << endl;
	cout << "Calculons un truc simple (operation entiere)..." << endl;
	cout << "" << endl;

	do{
		calculer();
		cout << "Une autre operation?(oui 1 - non 0) : ";
		cin >> choix;
		while (choix != 1 && choix != 0){
			cout << "Veuillez choisir une option valide svp... ";
			cin >> choix;
		}
	} while (choix == 1);
	

	system("pause");

	return 0;
}