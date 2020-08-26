#pragma once
#include <iostream>
using namespace std;
#include <stdio.h>
#include <Windows.h>
#include <ctime>
#include "stdio.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <map>
#include <fstream>
#include <ctime>
#include <cstdlib>
char High_Reg1(char& value) {
	value -= 3;
	if (value >= 65 && value <= 90) {
		return 0;
	}
	else if (value > 90) {
		value -= 90;
		value += 65;
		return 0;
	}
}

char Low_Reg1(char& value) {
	value -= 3;
	if (value >= 97 && value <= 122) {
		return 0;
	}
	else if (value < 122) {
		value += 122;
		value -= 96;
		return 0;
	}
}


char Caesar_code1(string& arr) {
	;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] >= 65 && arr[i] <= 90) {
			High_Reg1(arr[i]);
		}
		else if (arr[i] >= 97 && arr[i] <= 122) {
			Low_Reg1(arr[i]);
		}
		else
		{
			continue;
		}
	}
	return 1;
}

class Picture {
public:
	void Print1() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void Print2() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void Print3() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                            \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void Print4() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "    # # # # # # # # # # # #                     \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void Print5() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "    # # # # # # # # # # # #                     \n";
		cout << "    #       #                                   \n";
		cout << "    #     #                                     \n";
		cout << "    #   #                                       \n";
		cout << "    # #                                         \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void Print6() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "    # # # # # # # # # # # #                     \n";
		cout << "    #       #             #                     \n";
		cout << "    #     #               #                     \n";
		cout << "    #   #                 #                     \n";
		cout << "    # #                   #                     \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void Print7() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "    # # # # # # # # # # # #                     \n";
		cout << "    #       #             #                     \n";
		cout << "    #     #               #                     \n";
		cout << "    #   #                 #                     \n";
		cout << "    # #                  ###                    \n";
		cout << "    #                    ###                    \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void Print8() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "    # # # # # # # # # # # #                     \n";
		cout << "    #       #             #                     \n";
		cout << "    #     #               #                     \n";
		cout << "    #   #                 #                     \n";
		cout << "    # #                  ###                    \n";
		cout << "    #                    ###                    \n";
		cout << "    #                     #                     \n";
		cout << "    #                     #                     \n";
		cout << "    #                     #                     \n";
		cout << "    #                     #                     \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void Print9() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "    # # # # # # # # # # # #                     \n";
		cout << "    #       #             #                     \n";
		cout << "    #     #               #                     \n";
		cout << "    #   #                 #                     \n";
		cout << "    # #                  ###                    \n";
		cout << "    #                    ###                    \n";
		cout << "    #                  #  #  #                  \n";
		cout << "    #                    ###                    \n";
		cout << "    #                     #                     \n";
		cout << "    #                     #                     \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void Print10() {
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "                                                \n";
		cout << "    # # # # # # # # # # # #                     \n";
		cout << "    #       #             #                     \n";
		cout << "    #     #               #                     \n";
		cout << "    #   #                 #                     \n";
		cout << "    # #                  ###                    \n";
		cout << "    #                    ###                    \n";
		cout << "    #                  #  #  #                  \n";
		cout << "    #                    ###                    \n";
		cout << "    #                     #                     \n";
		cout << "    #                     #                     \n";
		cout << "    #                   #   #                   \n";
		cout << "    #                                           \n";
		cout << "    #                                           \n";
		cout << "# # # # # # # # # # # # # # # # # # # # # # # # \n\n";

	}
	void PrintPicture(int info) {
		if (info == 0) {
			Print1();
		}
		else if (info == 1) {
			Print2();
		}
		else if (info == 2) {
			Print3();
		}
		else if (info == 3) {
			Print4();
		}
		else if (info == 4) {
			Print5();
		}
		else if (info == 5) {
			Print6();
		}
		else if (info == 6) {
			Print7();
		}
		else if (info == 7) {
			Print8();
		}
		else if (info == 8) {
			Print9();
		}
		else if (info == 9) {
			Print10();
		}
	}
};