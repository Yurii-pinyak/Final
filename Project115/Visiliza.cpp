#include "main.h"

bool control_change() {
	int temp_control = 0;
	cout << "� ��� 3 �������,�� ���� ����� �� �������\n���� �� ������ ����� � �������� ������ 1\n���� �� ������ ����� ��� ������� ���� ��� �����\n";
	cin >> temp_control;
	if (temp_control == 1) {
		return true;
	}
	else {
		return false;
	}
}
void Give_change(string change) {
	if (change == "Apple") {
		cout << "ϳ������ : A company that sells the best phones, or a fruit that inspires brilliant ideas" << endl;
	}
	else if (change == "Windows") {
		cout << "ϳ������ : If you read the name of this company you might think that they sell windows" << endl;
	}
	else if (change == "Amazon") {
		cout << "ϳ������ : The owner of this company is the richest man in the world" << endl;
	}
	else if (change == "McDonalds") {
		cout << "ϳ������ : A company that is extremely loved by children and overweight people" << endl;
	}
	else if (change == "Spider") {
		cout << "ϳ������ : He has eight eyes,Legs from the shoulders" << endl;
	}
	else if (change == "Samsung") {
		cout << "ϳ������ :One of the largest phone manufacturers" << endl;
	}
	else if (change == "Thunder") {
		cout << "ϳ������ :Zeus is the god of this phenomenon" << endl;
	}
	else if (change == "Ternopil") {
		cout << "ϳ������ :Faine misto :)" << endl;
	}
}

// ������� ����������� � �������� ����� � ������
char Big_Reg(char& value) {
	value -= 97;
	value += 65;
	return 0;
}

// ������� ����������� � ������ � ��������, �� ��� ���� ������ ���� ������ �����
char Little_Reg(char& value) {
	value -= 65;
	value += 97;
	return 0;
}




class Words {
private:
	vector<string>str;
	int counts;
public:
	void Downloading() {
		string way = "Words.txt";
		ifstream file;
		file.open(way);
		if (!file.is_open()) {
			cout << " Error" << endl;
			exit(0);
		}
		string txt1;
		counts = 0;
		while (!file.eof()) {
			counts++;
			getline(file, txt1);
			str.push_back(txt1);
		}
		// �� ����� � ��������

		file.close();
	}
	string set_word()
	{
		Downloading();
		int final = rand() % counts;
		string nfinal = str[final];
		Caesar_code1(nfinal);
		return nfinal;
	}
};
class game :public Words, public Picture {
private:
	string game_word;
	string temp_word;
	int size;
	int fail;
	vector<char> used;
	bool control;
	int ncontrol;
public:
	void create_word_game() {
		temp_word = set_word();
		game_word = temp_word;
		size = temp_word.size();
		for (int i = 0;i < size;i++) {
			game_word[i] = '*';
		}
	}
	void Show_game_word() {
		cout << "�������� ����� : ";
		for (int i = 0;i < size;i++) {
			cout << game_word[i] << " ";
		}
		cout << endl;
	}
	void Print() {
		create_word_game();
		for (int i = 0;i < size;i++) {
			cout << temp_word[i] << " ";
		}
		cout << endl;
		for (int i = 0;i < size;i++) {
			cout << game_word[i] << " ";
		}
	}
	bool Check_word() {
		int nhelp = 0;
		char star = '*';
		for (int i = 0;i < size;i++) {
			if (game_word[i] != star) {
				continue;
			}
			else {
				return false;
			}
		}
		return true;
	}
	void Show_fail() {
		cout << "�i���i��� ���������� ����� : " << fail << endl;
	}
	void Show_temp_word() {
		cout << "������ ����� : " << temp_word << endl;
	}
	void Show_used() {
		cout << "����������i ������� : ";
		for (auto info : used) {
			cout << info << " ";
		}
		cout << endl;
	}
	bool Check_used(char chrused) {
		for (auto info : used) {
			if (info == chrused) {
				return false;
			}
		}
		return true;
	}

	void Start_Game() {
		create_word_game();
		char chr;
		while (fail < 9) {
			system("cls");
			char chr;
			int help = 0;
			PrintPicture(fail);
			Show_game_word();
			Show_used();
			if (fail > 2 && ncontrol < 1) {
				control = control_change();
				ncontrol++;
				system("cls");
				PrintPicture(fail);
				Show_game_word();
				Show_used();
			}
			if (control == true) {
				Give_change(temp_word);
			}
			cout << "����i�� ������ :";
			cin >> chr;
			char temp_chr = chr;
			if (chr >= 65 && chr <= 90) {
				Little_Reg(temp_chr);
			}
			else
			{
				Big_Reg(temp_chr);
			}
			if (Check_used(chr) && Check_used(temp_chr)) {
				cout << endl;
				// ������ ����� ������ ������������ ������� � �������� ������, ��� ����, ��� ������� �� ����� ��� ��� ������

				for (int i = 0;i < size;i++) {
					if (temp_word[i] == chr || temp_word[i] == temp_chr) {
						game_word[i] = temp_word[i];
						help++;
					}
				}
				if (help == 0) {
					used.push_back(chr);
					fail++;
				}
				if (Check_word() == true) {
					system("cls");
					PrintPicture(fail);
					cout << "\nYou win\n";
					Show_game_word();
					Show_fail();
					Show_used();
					break;
				}
				//if (Check_word() == true) {
				//	break;
				//}
			}
			// ������� ����� �� ������� , ������ ������, �� ���������� ������������ ����� 
			if (fail == 9) {
				system("cls");
				PrintPicture(fail);
				cout << "You Lose\n";
				Show_temp_word();
				Show_fail();
				Show_used();
			}

		}
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	int start_time = clock();
	srand(time(0));
	game test;
	test.Start_Game();
	int end_time = clock();
	int search_time = end_time - start_time;
	cout << "�i��i��� ����������� ���� :" << search_time/1000<< " ������" << endl;
	system("pause");
}
