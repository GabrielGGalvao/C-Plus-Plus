#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int num1, num2;
	char operacao;

	std::cout << "Operadores: \n[+] Adi��o \n[-] Subtra��o \n[*] Multiplica��o \n[/] Divis�o \n\nDigite o simbolo da opera��o que deseja realizar: ";
	std::cin >> operacao;
	std::cout << "Digite o primeiro valor: ";
	std::cin >> num1;
	std::cout << "Digite o segundo valor: ";
	std::cin >> num2;

	switch (operacao)
	{
	case '*':
		printf("\nResultado: %i * %i = %i \n",num1, num2, num1 * num2);
		break;
	case '/':
		printf("\nResultado: %i * %i = %i \n", num1, num2, num1 * num2);
		break;
	case '-':
		printf("\nResultado: %i - %i = %i \n", num1, num2, num1 - num2);
		break;
	case '+':
		printf("\nResultado: %i + %i = %i \n", num1, num2, num1 + num2);
		break;
	default:
		std::cout << "Opera��o invalida";
		break;
	}
}