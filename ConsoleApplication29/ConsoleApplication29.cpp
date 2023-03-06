//#include <iostream>
//using namespace std;
//void print(int** katalog, int stroki, int stolbci) {
//
//    cout << "Array of arrays (" << stroki << " x " << stolbci << "):" << endl;
//    for (int i = 0; i < stroki; i++) {
//
//        for (int j = 0; j < stolbci; j++) {
//
//            cout << katalog[i][j] << " ";
//
//        }
//        cout << endl;
//    }
//
//}
//void line(int**& katalog, int& stroki, int stolbci) {
//    int* newmass = new int [stolbci] {};
//    int** new_katalog = new int* [stroki + 1] {};
//    for (int i = 0; i < stroki; i++) new_katalog[i] = katalog[i];
//    new_katalog[stroki] = newmass;
//    delete[] katalog;
//    katalog = new_katalog;
//    stroki++;
//
//}
//int main()
//{
//    int** massiv_massivov; 
//    int row_count = 5;
//    int column_count = 10;
//    massiv_massivov = new int* [row_count];
//    for (int i = 0; i < row_count; i++)
//        massiv_massivov[i] = new int[column_count];
//    int val = 123;
//    for (int i = 0; i < row_count; i++) {
//        for (int j = 0; j < column_count; j++) {
//            massiv_massivov[i][j] = val;
//            val++;
//        }
//    }
//    print(massiv_massivov, row_count, column_count);
//    line(massiv_massivov, row_count, column_count);
//    print(massiv_massivov, row_count, column_count);
//    for (int i = 0; i < row_count; i++)
//        delete[] massiv_massivov[i];
//    delete[] massiv_massivov;
//}
// 
// 
// 
//#include <iostream>
//using namespace std;
//void print(int** katalog, int stroki, int stolbci) {
//
//    cout << "Array of arrays (" << stroki << " x " << stolbci << "):" << endl;
//    for (int i = 0; i < stroki; i++) {
//
//        for (int j = 0; j < stolbci; j++) {
//
//            cout << katalog[i][j] << " ";
//
//        }
//        cout << endl;
//    }
//
//}
//void line(int**& katalog, int& stroki, int stolbci) {
//    int* newmass = new int [stolbci] {};
//    int** new_katalog = new int* [stroki + 1] {};
//    for (int i = 0; i < stroki; i++) new_katalog[i] = katalog[i];
//    new_katalog[stroki] = newmass;
//    delete[] katalog;
//    katalog = new_katalog;
//    stroki++;
//
//}
//int main()
//{
//    int** massiv_massivov;
//    int row_count = 5;
//    int column_count = 10;
//    massiv_massivov = new int* [row_count];
//    for (int i = 0; i < row_count; i++)
//        massiv_massivov[i] = new int[column_count];
//    int val = 123;
//    for (int i = 0; i < row_count; i++) {
//        for (int j = 0; j < column_count; j++) {
//            massiv_massivov[i][j] = val;
//            val++;
//        }
//    }
//    line(massiv_massivov, row_count, column_count);
//    print(massiv_massivov, row_count, column_count);
//    print(massiv_massivov, row_count, column_count);
//    for (int i = 0; i < row_count; i++)
//        delete[] massiv_massivov[i];
//    delete[] massiv_massivov;
//}
//#include <iostream>
//#include <iomanip>
//#include <ctime>
//using namespace std;
//void add_row_ins(
//	int**& a, 
//	int n,   
//	int m,    
//	int k      
//) {
//
//	int** b = new int* [n];
//	for (int i = 0; i < n; i++)
//		b[i] = new int[m];
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			b[i][j] = a[i][j];
//	for (int i = 0; i < n; i++)
//		delete[] a[i];
//	delete[] a;
//	a = NULL;
//	a = new int* [n + 1];
//	for (int i = 0; i < (n + 1); i++) {
//		a[i] = NULL;
//	}
//	for (int i = 0; i < (n + 1); i++) {
//		a[i] = new int[m];
//	}
//	for (int i = 0; i < k; i++)
//		for (int j = 0; j < m; j++)
//			a[i][j] = b[i][j];
//	for (int j = 0; j < m; j++)
//		a[k][j] = rand() % 100 + 1;
//	for (int i = k; i < n; i++)
//		for (int j = 0; j < m; j++)
//			a[i + 1][j] = b[i][j];
//	for (int i = 0; i < n; i++)
//		delete[] b[i];
//	delete[] b;
//
//}
//void print(int** a, int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++)
//			cout << setw(4) << a[i][j] << " ";
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main() {
//	int n = 1;
//	int m = 1;
//	int k = 0;
//	srand(time(NULL));
//	int** a = NULL;
//	setlocale(LC_ALL, "Russian");
//	cout << "Введите размерность двумерного квадратного массива: " << endl;
//	cin >> n;
//	cout << "Введите строку после которой нужно вставить еще одну строку: " << endl;
//	cin >> k;
//	m = n;
//
//	a = new int* [n];
//	for (int i = 0; i < n; i++) {
//		a[i] = new int[n];
//	}
//	srand(time(NULL));
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			a[i][j] = rand() % 100 + 1;
//	print(a, n, n);
//	add_row_ins(a, n, n, k);
//	print(a, n + 1, n);
//
//	for (int i = 0; i < (n + 1); i++)
//		delete[] a[i];
//	delete[] a;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <math.h>
//#include <windows.h>
//using namespace std;
//void main()
//{
//	setlocale(LC_ALL, "Russian");
//	float A[100][100];
//	int n, m, i, j, s;
//	char str[30];
//
//	cout<< "Введите количество строк массива n=" ;
//	cin >> n;
//
//	cout<<"Введите количество столбцов массива m=";
//	cin >> m;
//
//	cout<<"Введите значения элементов массива" ;
//	cout << '\n';
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//		{
//			cout << "A[" << i << "][" << j << "]=";
//			cin >> A[i][j];
//		}
//	cout << "\n";
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			cout << A[i][j] << '\t';
//		cout << "\n";
//	}
//	cout << "\n";
//
//
//	cout<<"Введите строку которую необходимо удалить:";
//	cin >> s;
//	s = s - 1;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (i == s)
//				A[s][j] = 0;
//
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			cout << A[i][j] << '\t';
//		cout << "\n";
//	}
//	cout << "\n";
//}
//#include <iostream>
//#include <iomanip>
//#include <ctime>
//using namespace std;
//void add_row_beg(
//	int**& a, 
//	int n,    
//	int m     
//) {
//	int** b = new int* [n];
//	for (int i = 0; i < n; i++)
//		b[i] = new int[m];
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			b[i][j] = a[i][j];
//	for (int i = 0; i < n; i++)
//		delete[] a[i];
//	delete[] a;
//	a = NULL;
//	a = new int* [n + 1];
//	for (int i = 0; i < (n + 1); i++) {
//		a[i] = NULL;
//	}
//	for (int i = 0; i < (n + 1); i++) {
//		a[i] = new int[m];
//	}
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			a[i + 1][j] = b[i][j];
//	for (int j = 0; j < m; j++)
//		a[0][j] = rand() % 100 + 1;
//	for (int i = 0; i < n; i++)
//		delete[] b[i];
//	delete[] b;
//
//}
//void print(int** a, int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++)
//			cout << setw(4) << a[i][j] << " ";
//		cout << endl;
//	}
//	cout << endl;
//}
//int main() {
//	int n = 1;
//	int m = 1;
//	srand(time(NULL));
//	int** a = NULL;
//	setlocale(LC_ALL, "Russian");
//	cout << "Введите размерность двумерного квадратного массива: " << endl;
//	cin >> n;
//	m = n;
//	a = new int* [n];
//	for (int i = 0; i < n; i++) {
//		a[i] = new int[n];
//	}
//	srand(time(NULL));
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			a[i][j] = rand() % 100 + 1;
//	print(a, n, n);
//	add_row_beg(a, n, n);
//	print(a, n + 1, n);
//
//	for (int i = 0; i < (n + 1); i++)
//		delete[] a[i];
//	delete[] a;
//
//	system("pause");
//	return 0;
//}