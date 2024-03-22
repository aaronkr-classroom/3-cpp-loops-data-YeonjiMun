//chp2ex5.cpp


//chp2ex5_Rectangle
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main() {

	int size;

	cout << "What size square?";

	cin >> size; //10




	//행 출력하기
	for (int i = 0; i < size*2; i++) {

		for (int j = 0; j < size; j++) {
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}

/*
//chp2ex5_triangle.c
#include <iostream>
#include <string>

using std::cin;   
using std::cout;
using std::endl;

int main() {
	
	int size;

	cout << "What size triangle?";

	cin >> size; //10




	//행 출력하기
	for (int i = 0; i < size; i++) {

		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
*/


/*
//chp2ex5_square.c
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main() {

	int size;

	cout << "What size square?";

	cin >> size; //10




	//행 출력하기
	for (int i = 0; i < size; i++) {

		for (int j = 0; j <size; j++) {
			cout << "*";
		}
		
		cout << endl;
	}

	return 0;
}
*/