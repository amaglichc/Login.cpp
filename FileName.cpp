#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	bool isLogin = false;
	const string name = "mike";
	const string password = "123456789";
	string password_input;
	string name_input;
	while (isLogin == false) {
		cout << "Введите имя пользователя: " << endl;
		cin >> name_input;
		cout << "Введите пароль: " << endl;
		cin >> password_input;
		if (name == name_input && password==password_input ) {
			isLogin = true;
			cout << "Вы успешно зашли)";
		}
		else {
			cout << "Неверное имя пользователя или пароль" << endl;
		}

		
	}


}