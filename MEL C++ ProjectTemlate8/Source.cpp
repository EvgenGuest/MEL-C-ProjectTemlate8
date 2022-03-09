//Персональный шаблон проекта С++
#include <iostream>
using namespace std;
void mySwap(int n1, int n2) {
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
}

void pSwap(int *pn1, int *pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

void sumArr(int array[], int length, int *psum) {	
	for (int i = 0; i < length; i++)
		*psum += array[i]; // *(array + i)	
}

void checkNums(int* pn1, int *pn2) {
	if (*pn1 > *pn2) {
		*pn1 *= *pn1;//*pn1 = *pn1 * *pn1; // *pn1 = pow(*pn1, 2);
		*pn2 *= *pn2;//*pn2 = *pn2 * *pn2; // *pn2 = pow(*pn2, 2);
	}
	else {
		*pn1 = 0;
		*pn2 = 0;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Задача 2.
	cout << "Задача 2.\nВведите два числа: ";
	cin >> n >> m;
	checkNums(&n, &m);
	cout << "n = " << n << endl;
	cout << "m = " << m << endl;

	// Задача 1.
	/*cout << "Задача 1.\nИзначальный массив:\n[";
	int z1[5] = { 10, 5, 5, 7, 3 };
	for (int i = 0; i < 5; i++)
		cout << *(z1 + i) << ", ";
	cout << "\b\b]\n";
	int sum = 0;
	sumArr(z1, 5, &sum);
	cout << "Сумма всех элементов массива = " << sum << "\n\n";*/
		


	/*cin >> n >> m;
	//mySwap(n, m);
	pSwap(&n, &m);
	cout << n << " " << m;*/

	

	return 0;
}
