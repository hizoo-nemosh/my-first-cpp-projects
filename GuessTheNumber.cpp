#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main(){
	srand(time(NULL));
	int number = rand() % 100 + 1;
	int choise = 0;
	int flag = 0;
	cout << number << "\n"; // Тестируемое число
    while (flag != 7) {
	cin >> choise;
	if (choise == number ) {
		cout << "You won";
		return 0;
	} if (choise > number ) {
		cout << "less\n";
		flag++;
	} if (choise < number ) {
		cout << "more\n";
		flag++;
    }
    if (flag == 7 || flag > 7) {
    	cout << "You loser";
    	return 0;
    }
}
}