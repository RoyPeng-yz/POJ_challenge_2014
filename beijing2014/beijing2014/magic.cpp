//-------------------------------------------magic---------------------------------------------//
//˼·ͬReports
//20181028
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//#include <ctime>

//using namespace std;
//const int Nmax = 300;
//const double PI = 3.141592653;
//
////clock_t  Begin, End;//��ȡ��������ʱ��
//
//float Ntime(const int &n,const long &a,const int &v);
//
//int main()
//{
//	//Begin = clock();//��ʼ��ʱ
//	int N[Nmax], V[Nmax], k=0;
//	long A[Nmax];
//	cin >> N[k];
//	cin >> A[k];
//	cin >> V[k];
//	while (!cin.fail() && k<=Nmax)
//	{
//		k++;
//		cin >> N[k];
//		cin >> A[k];
//		cin >> V[k];
//	}
//	
//	for (int i = 0; i < k; i++)
//	{
//		cout << fixed << setprecision(5);
//		cout << Ntime(N[i], A[i], V[i]) << endl;
//	}
//	//End = clock();//������ʱ
//	//cout << "��������ʱ��Ϊ�� " << (double(End - Begin) / CLK_TCK) << "ms" << endl;
//	cin.get();
//	cin.get();
//	return 0;
//}
//
//float Ntime(const int &n, const long &a, const int &v)
//{
//	float angle, t;
//	angle = (180 * (n - 2) / n)*PI/180;//�������ڽ�
//	t = a / (v + v*cos(angle));
//	return t;
//}