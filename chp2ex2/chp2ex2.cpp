//chp2ex2.cpp
#include <iostream>
#include <string>

int main() {
	using std::cin;  using std::endl;
	using std::cout; using std::string;

	//������� �̸��� ����
	cout << "What's your name?";

	//�̸��� ����
	string name;
	cin >> name;

	//����Ϸ��� �޼��� ����
	const string greeting = "Hello, " + name + "!";

	//�λ縻�� �ѷ��� ������ ����
	const int pad = 3;

	//����� ��� �� ����
	const int rows = pad * 2 + 3;    //ù ��°, ������ ��° , greeting
	const string::size_type cols = greeting.size() + pad * 2 + 2;

	//�Է� �κа� ��� �κ��� �����Ϸ��� �� ���� �ǳʶ�
	cout << endl;

	//rows���� ����մϴ�.
	//�Һ���: ���ݱ��� r�� ���� ���
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;

		//�Һ���: ���� �࿡�� c�� ���ڸ� ���
		while (c != cols) {
			//�λ縻 ��� ���θ� �Ǻ�
			if (r == pad + 3 && c == pad + 2) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//�׵θ� ��� ���θ� �Ǻ�
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
					cout << "#";
				else
					cout << " ";
				++c;

			}
		} cout << endl;


	} //for ��

	return 0;
}