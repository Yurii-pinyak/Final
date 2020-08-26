using namespace std;
char Caesar_code(char* arr, int n_Count, int key) {
	cout << " Enter key : ";
	cin >> key;
	for (int i = 0; i < n_Count; i++) {
		if (arr[i] >= 65 && arr[i] <= 90) {
			High_Reg(arr[i], key);
		}
		else if (arr[i] >= 97 && arr[i] <= 122) {
			Low_Reg(arr[i], key);
		}
		else
		{
			continue;
		}
	}
	return 1;
}