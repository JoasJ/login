#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{ 
	string login;
	int senha;
	cout << "Painel Administrativo" << endl;
	cout << "Difite seu login:";
	cin >> login;
	cout << "Digite a senha:"; 
	cin >>senha;
	if ((login == "admin" || login == "ADMIN") && senha == 4)
		cout << "Autemticado:" << endl;
	else 
		cout << "Dados incorretos, tente novamente!" << endl;
	system ("PAusE");
	return 0;
 

}