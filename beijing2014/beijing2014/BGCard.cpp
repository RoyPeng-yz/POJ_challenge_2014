////----------------------------------BG Card-----------------------------------------//
////˼·���洢��������֮�󣬷ֱ��ÿ�����ݽ��д�������card��N������������Ϊ0���м��֣����ڳ���˳�������ֱ���޹أ���Ȼ��Ӵ�С��
////      ���Ǽ��ϵ�Ԫ�أ�˳�����������鿴card���Ƿ������������������Ϊ0���������Ƿ���ڵ���˳������������ture���������false����
////      ����һ������Ԫ�ء�ֱ������Ԫ�ض�������ϻ���cardÿ����������û0Ϊֹ��
////20181029
//
//#include <iostream>
////#include <ctime>
//
//#define Max 20
//using namespace std;
////clock_t  Begin, End;//��ȡ��������ʱ��
//
//void sort(int a[], int len);//������(����)��ð������
//
//int main()
//{
//	//Begin = clock();//��ʼ��ʱ
//	int M, N, k = 0,step = 0;//k����������
//	int dec = 0;
//	int Mm[Max], Nn[Max], Nzero[Max] = {0};//��̬��ʹ�����ʼ��
//	int *card[Max],*q[Max];//ָ�����飬������Ԫ����ָ�룬��Max��Ԫ��
//	//���Ȼ�ȡ��һ������
//	cin >> N;
//	card[k] = new int[N];
//	Nn[k] = N;//��¼ÿ������N�ĳ���
//	for (int i = 0; i < N; i++)
//	{
//		cin >> card[k][i];
//		if (card[k][i]) Nzero[k]++;
//	}
//	cin >> M;
//	q[k] = new int[M];
//	Mm[k] = M;//��¼ÿ������M�ĳ���
//	for (int i = 0; i < M; i++)
//	{
//		cin >> q[k][i];
//	}
//	k++;
//	//��ȡ����������
//	while (!cin.fail())
//	{
//		cin >> N;
//		if (cin.fail()) break;//�����ļ�β����ѭ��
//		card[k] = new int[N];
//		Nn[k] = N;//��¼ÿ������N�ĳ���
//		for (int i = 0; i < N; i++)
//		{
//			cin >> card[k][i];
//			if (card[k][i]) Nzero[k]++;
//		}
//		cin >> M;
//		q[k] = new int[M];
//		Mm[k] = M;//��¼ÿ������M�ĳ���
//		for (int i = 0; i < M; i++)
//		{
//			cin >> q[k][i];
//		}
//		k++;
//	}
//	//cout << "break ok!" << endl;
//	for (int i = 0; i < k; i++)//���ζ�ÿ�����ݽ������
//	{
//		sort(q[i], Mm[i]);//�Ե�k�����ݽ�������
//		//for (int j = 0; j < Mm[i]; j++){ cout << q[i][j] << endl; }//�鿴�����Ƿ���ȷ
//		for (int j = 0; j < Mm[i]; j++)//��k�����ݵ�MΪMm[k],�����ϳ��ȣ����ŶԴӴ�С�������ϳ��ȵ���
//		{
//			while (Nzero[i] >= q[i][j])//���з��ϼ���Ԫ����ָ���ȵ����
//			{
//				step++;//����+1
//				dec = 0;
//				for (int x = 0; (x < Nn[i] && dec < q[i][j]); x++)//��k��card������NΪNn[k]
//				{
//					if (card[i][x] != 0)//��������������Ϊ0
//					{
//						card[i][x]--;
//						dec++;
//						if (card[i][x] == 0) Nzero[i]--;//ˢ��������Ϊ0��������
//					}
//				}
//			}
//		}
//		//���������ɹ��򲻳ɹ�
//		if (Nzero[k] > 0)
//			cout << "WTD is really a Gambling God!" << endl;
//		else
//			cout << "BG will finish the cards by " << step << " steps" << endl;
//		step = 0;
//		delete[]q[i];
//		delete[]card[i];
//	}
//	//End = clock();//������ʱ
//	//cout << "��������ʱ��Ϊ�� " << (double(End - Begin) / CLK_TCK) << "ms" << endl;
//	cin.get();
//	cin.get();
//	return 0;
//}
//
//void sort(int a[], int len)
//{
//	int z;
//	for (int i = 0; i < len; i++)//ÿ���ҳ��������ڵ�һ
//	{
//		for (int j = i+1; j < len; j++)
//		{
//			if (a[i] < a[j])
//			{
//				z = a[i];
//				a[i] = a[j];
//				a[j] = z;
//			}
//		}
//	}
//}