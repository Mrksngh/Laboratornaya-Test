#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Team {
	string name;
	string city;
	string games;
	string loses;
	string wins;
	string draws;
	string players_number;
	string coach_surname;
};

int p1(){
	string w;
	ofstream teams;
	teams.open("teams.txt", ios::ate | ios::out | ios::app);
	cout << "Введите название команды: ";
	getline(cin, w);
	teams << w << endl;
	cout << "Введите город команды: ";
	getline(cin, w);
	teams << w << endl;
	cout << "Введите количество игр команды: ";
	getline(cin, w);
	teams << w << endl;
	cout << "Введите количество поражений команды: ";
	getline(cin, w);
	teams << w << endl;
	cout << "Введите количество побед команды: ";
	getline(cin, w);
	teams << w << endl;
	cout << "Введите количество ничейных игр команды: ";
	getline(cin, w);
	teams << w << endl;
	cout << "Введите количество игроков команды: ";
	getline(cin, w);
	teams << w << endl;
	cout << "Введите фамилию тренера команды: ";
	getline(cin, w);
	teams << w << endl;
	teams.close();
	return 0;
}
int p2p(int a, string b)
{
	int n = 0;
	string k;
	ifstream teams;
	teams.open("teams.txt");
	while (getline(teams, k)) { n++; }
	n = n / 8;
	teams.close();
	ifstream newteam;
	newteam.open("teams.txt");
	Team* Array = new Team[n]{};
	for (int i = 0; i < n; i++)
	{
		getline(newteam, k); Array[i].name = k;
		getline(newteam, k); Array[i].city = k;
		getline(newteam, k); Array[i].games = k;
		getline(newteam, k); Array[i].loses = k;
		getline(newteam, k); Array[i].wins = k;
		getline(newteam, k); Array[i].draws = k;
		getline(newteam, k); Array[i].players_number = k;
		getline(newteam, k); Array[i].coach_surname = k;
	}
	if (a == 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (b == Array[i].name)
			{
				cout << "Команда номер " << i + 1 << endl;
				cout << Array[i].name << endl;
				cout << Array[i].city << endl;
				cout << Array[i].games << endl;
				cout << Array[i].loses << endl;
				cout << Array[i].wins << endl;
				cout << Array[i].draws << endl;
				cout << Array[i].players_number << endl;
				cout << Array[i].coach_surname << endl;
			}
		}

	}
	if (a == 2)
	{
		for (int i = 0; i < n; i++)
		{
			if (b == Array[i].city)
			{
				cout << "Команда номер " << i + 1 << endl;
				cout << Array[i].name << endl;
				cout << Array[i].city << endl;
				cout << Array[i].games << endl;
				cout << Array[i].loses << endl;
				cout << Array[i].wins << endl;
				cout << Array[i].draws << endl;
				cout << Array[i].players_number << endl;
				cout << Array[i].coach_surname << endl;
			}
		}
	}
	if (a == 3)
	{
		for (int i = 0; i < n; i++)
		{
			if (b == Array[i].games)
			{
				cout << "Команда номер " << i + 1 << endl;
				cout << Array[i].name << endl;
				cout << Array[i].city << endl;
				cout << Array[i].games << endl;
				cout << Array[i].loses << endl;
				cout << Array[i].wins << endl;
				cout << Array[i].draws << endl;
				cout << Array[i].players_number << endl;
				cout << Array[i].coach_surname << endl;
			}
		}
	}
	if (a == 4)
	{
		for (int i = 0; i < n; i++)
		{
			if (b == Array[i].loses)
			{
				cout << "Команда номер " << i + 1 << endl;
				cout << Array[i].name << endl;
				cout << Array[i].city << endl;
				cout << Array[i].games << endl;
				cout << Array[i].loses << endl;
				cout << Array[i].wins << endl;
				cout << Array[i].draws << endl;
				cout << Array[i].players_number << endl;
				cout << Array[i].coach_surname << endl;
			}
		}
	}
	if (a == 5)
	{
		for (int i = 0; i < n; i++)
		{
			if (b == Array[i].wins)
			{
				cout << "Команда номер " << i + 1 << endl;
				cout << Array[i].name << endl;
				cout << Array[i].city << endl;
				cout << Array[i].games << endl;
				cout << Array[i].loses << endl;
				cout << Array[i].wins << endl;
				cout << Array[i].draws << endl;
				cout << Array[i].players_number << endl;
				cout << Array[i].coach_surname << endl;
			}
		}
	}
	if (a == 6)
	{
		for (int i = 0; i < n; i++)
		{
			if (b == Array[i].draws)
			{
				cout << "Команда номер " << i + 1 << endl;
				cout << Array[i].name << endl;
				cout << Array[i].city << endl;
				cout << Array[i].games << endl;
				cout << Array[i].loses << endl;
				cout << Array[i].wins << endl;
				cout << Array[i].draws << endl;
				cout << Array[i].players_number << endl;
				cout << Array[i].coach_surname << endl;
			}
		}
	}
	if (a == 7)
	{
		for (int i = 0; i < n; i++)
		{
			if (b == Array[i].players_number)
			{
				cout << "Команда номер " << i + 1 << endl;
				cout << Array[i].name << endl;
				cout << Array[i].city << endl;
				cout << Array[i].games << endl;
				cout << Array[i].loses << endl;
				cout << Array[i].wins << endl;
				cout << Array[i].draws << endl;
				cout << Array[i].players_number << endl;
				cout << Array[i].coach_surname << endl;
			}
		}
	}
	if (a == 8)
	{
		for (int i = 0; i < n; i++)
		{
			if (b == Array[i].coach_surname)
			{
				cout << "Команда номер " << i + 1 << endl;
				cout << Array[i].name << endl;
				cout << Array[i].city << endl;
				cout << Array[i].games << endl;
				cout << Array[i].loses << endl;
				cout << Array[i].wins << endl;
				cout << Array[i].draws << endl;
				cout << Array[i].players_number << endl;
				cout << Array[i].coach_surname << endl;
			}
		}
	}
	newteam.close();
	return 0;
}
int p2()
{
	int a;
	string b;
	cout << "Выберите, по какому именно параметру вы хотите найти" << endl;
	cout << "1) По названию команды" << endl;
	cout << "2) По городу команды" << endl;
	cout << "3) По количеству игр" << endl;
	cout << "4) По количеству поражений" << endl;
	cout << "5) По количеству побед" << endl;
	cout << "6) По количеству игр, сыгранных в ничью" << endl;
	cout << "7) По количеству игроков в команде" << endl;
	cout << "8) По фамилии тренера" << endl;
	cin >> a;
	cout << "Введите значение параметра: ";
	cin >> b;
	p2p(a,b);
	return 0;
}
int p3() 
{
	int n=0;
	string k;
	ifstream teams;
	teams.open("teams.txt");
	while (getline(teams, k)) { n++; }
	n = n / 8;
	teams.close();
	ifstream newteam;
	newteam.open("teams.txt");
	for (int i = 0; i < n; i++)
	{
		cout << "Команда номер "<< i+1 << endl;
		getline(newteam, k);
		cout << k<< endl;
		getline(newteam, k);
		cout << k << endl;
		getline(newteam, k);
		cout << k << endl;
		getline(newteam, k);
		cout << k << endl;
		getline(newteam, k);
		cout << k << endl;
		getline(newteam, k);
		cout << k << endl;
		getline(newteam, k);
		cout << k << endl;
		getline(newteam, k);
		cout << k << endl;
	}
	newteam.close();
	return 0;
}


int main()
{
	setlocale(LC_ALL,"RUS");
	int n;
	cout << "Выберите действие" << endl;
	cout << "1) Добавление новой команды" << endl;
	cout << "2) Поиск команды по выбранному параметру" << endl;
	cout << "3) Вывод всех команд на экран" << endl;
	cout << "4) Сортировка команд по победам" << endl;
	cin >> n;
	do {
		if (n == 1) { p1(); }
		if (n == 2) { p2(); }
		if (n == 3) { p3(); }
		//if (n == 4) { p4(); }
	} while (n != 1 && n != 2 && n != 3 && n != 4);
}