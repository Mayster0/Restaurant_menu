#include <iostream>
#include <cstdlib>
void menu()
{
		std::cout << "1. Przystawki" << std::endl;
		std::cout << "2. Zupy" << std::endl;
		std::cout << "3. Dania g\210\242wne" << std::endl;
		std::cout << "4. Desery" << std::endl;
		std::cout << "5. Rachunek" << std::endl;
}
void platnosc()
{
	std::cout << "0. Wyjd\253 do menu" << std::endl;
	std::cout << "1. Zap\210a\206" << std::endl;
}
void przystawki()
{
		std::cout << "0. Wyjd\253 do menu" << std::endl;
		std::cout << "1. Panierowana kaszanka - 25z\210" << std::endl;
		std::cout << "2. Placki ziemniaczane - 30z\210" << std::endl;
		std::cout << "3. M\210ode sa\210aty - 15z\210" << std::endl;
		std::cout << "4. Carpaccio z pol\251dwicy - 23z\210" << std::endl;
		std::cout << "5. Sa\210ata Cezar - 21z\210" << std::endl;
		std::cout << "6. Tatar wo\210owy - 35z\210" << std::endl;
		std::cout << "7. Pierogi ruskie - 20z\210" << std::endl;
}
void zupy()
{
	std::cout << "0. Wyjd\253 do menu" << std::endl;
	std::cout << "1. Ch\210odnik - 19z\210" << std::endl;
	std::cout << "2. Ros\242\210 - 21z\210" << std::endl;
	std::cout << "3. Zupa cytrynowa - 23z\210" << std::endl;
	std::cout << "4. Zupa og\242rkowa - 20z\210" << std::endl;
}
void dania_glowne()
{
	std::cout << "0. Wyjd\253 do menu" << std::endl;
	std::cout << "1. Pier\230 kurczaka z kostk\245 - 39z\210" << std::endl;
	std::cout << "2. Schabowy z kostk\245 - 45z\210" << std::endl;
	std::cout << "3. \235oso\230 - 49z\210" << std::endl;
	std::cout << "4. \275eberka z rusztu - 55z\210" << std::endl;
	std::cout << "5. Filet z jesiotra - 65z\210" << std::endl;
	std::cout << "6. P\242\210 kaczki z codziennego wypieku - 69z\210" << std::endl;
	std::cout << "7. Dania z gor\245cej lawy - 75z\210" << std::endl;
	std::cout << "8. Stek z pol\251dwicy wo\210owej - 85z\210" << std::endl;
}
void desery()
{
	std::cout << "0. Wyjd\253 do menu" << std::endl;
	std::cout << "1. Tarta rabarbarowa - 19z\210" << std::endl;
	std::cout << "2. Tort bezowy - 25z\210" << std::endl;
	std::cout << "3. Puszysty sernik - 25z\210" << std::endl;
	std::cout << "4. Fondant orzechowy - 29z\210" << std::endl;
}

int main()
{
	int rachunek = 0;
	int a,b;
	std::cout << "Witamy w restauracji pod nazw\245 Papugar!" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "       _------." << std::endl;
	std::cout << "      /  ,     \\_" << std::endl;
	std::cout << "    /   /  /{}\ |o\\_" << std::endl;
	std::cout << "   /    \\  `--' /-' \\" << std::endl;
	std::cout << "  |      \\      \\    |" << std::endl;
	std::cout << " |              |`-, |" << std::endl;
	std::cout << " /              /__/)/" << std::endl;
	std::cout << "|              |" << std::endl;
	system("pause");
	system("cls");
	do
	{
		std::cout << "Bie\276\245cy koszt: " << rachunek <<"z\210"<< std::endl;
		std::cout << "0. Wyjd\253 z menu" << std::endl;
		menu();
		std::cout << "Podaj numerek: ";
		std::cin >> a;
		system("cls");
		switch (a)
		{
		case 5:
			do
			{
				std::cout << "Do zap\210aty jest: " << rachunek <<"z\210"<< std::endl;
				platnosc();
				std::cout << "Podaj numerek: ";
				std::cin >> b;
				switch (b)
				{
				case 0:
					break;
				case 1:
					system("cls");
					std::cout << "Zap\210cono" << std::endl;
					system("pause");
					return 0;
						break;
				default:
					break;
				}
				system("cls");
			} while (b != 0);
			break;
		case 1:
			do
			{
				std::cout << "Bie\276\245cy koszt: " << rachunek << "z\210" << std::endl;
				przystawki();
				std::cout << "Podaj numerek: ";
				std::cin >> b;
				switch (b)
				{
				case 0:
					break;
				case 1:
					rachunek = rachunek + 25;
					break;
				case 2:
					rachunek = rachunek + 30;
					break;
				case 3:
					rachunek = rachunek + 15;
					break;
				case 4:
					rachunek = rachunek + 23;
					break;
				case 5:
					rachunek = rachunek + 21;
					break;
				case 6:
					rachunek = rachunek + 35;
					break;
				case 7:
					rachunek = rachunek + 20;
					break;
				default:
					break;
				}
				system("cls");
			} while (b != 0);
			break;
		case 2:
			do
			{
				std::cout << "Bie\276\245cy koszt: " << rachunek << "z\210" << std::endl;
				zupy();
				std::cout << "Podaj numerek: ";
				std::cin >> b;
				switch (b)
				{
				case 0:
					break;
				case 1:
					rachunek = rachunek + 19;
					break;
				case 2:
					rachunek = rachunek + 21;
					break;
				case 3:
					rachunek = rachunek + 23;
					break;
				case 4:
					rachunek = rachunek + 20;
					break;
				default:
					break;
				}
				system("cls");
			} while (b != 0);
			break;
		case 3:
			do
			{
				std::cout << "Bie\276\245cy koszt: " << rachunek << "z\210" << std::endl;
				dania_glowne();
				std::cout << "Podaj numerek: ";
				std::cin >> b;
				switch (b)
				{
				case 0:
					break;
				case 1:
					rachunek = rachunek + 39;
					break;
				case 2:
					rachunek = rachunek + 45;
				case 3:
					rachunek = rachunek + 49;
					break;
				case 4:
					rachunek = rachunek + 55;
					break;
				case 5:
					rachunek = rachunek + 65;
					break;
				case 6:
					rachunek = rachunek + 59;
					break;
				case 7:
					rachunek = rachunek + 69;
					break;
				case 8:
					rachunek = rachunek + 75;
					break;
				default:
					break;
				}
				system("cls");
			} while (b != 0);
			break;
		case 4:
			do
			{
				std::cout << "Bie\276\245cy koszt: " << rachunek << "z\210" << std::endl;
				desery();
					std::cout << "Podaj numerek: ";
				std::cin >> b;
				switch (b)
				{
				case 0:
					break;
				case 1:
					rachunek = rachunek + 19;
					break;
				case 2:
					rachunek = rachunek + 25;
				case 3:
					rachunek = rachunek + 25;
					break;
				case 4:
					rachunek = rachunek + 29;
					break;
				default:
					break;
				}
				system("cls");
			} while (b != 0);
			break;
		default:
			break;
		}
	} while (a != 0);
	return 0;
}