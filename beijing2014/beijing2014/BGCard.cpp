////----------------------------------BG Card-----------------------------------------//
////思路：存储多组数据之后，分别对每组数据进行处理；记下card的N种牌中数量不为0的有几种（由于出的顺子与牌种编号无关），然后从大到小，
////      考虑集合的元素（顺子张数），查看card中是否存在满足的情况（即不为0的牌种数是否大于等于顺子张数），若ture，打出，若false，考
////      虑下一个集合元素。直到集合元素都考虑完毕或者card每种牌数量都没0为止。
////20181029
//
//#include <iostream>
////#include <ctime>
//
//#define Max 20
//using namespace std;
////clock_t  Begin, End;//获取程序运行时间
//
//void sort(int a[], int len);//排序函数(降序)，冒泡排序法
//
//int main()
//{
//	//Begin = clock();//开始计时
//	int M, N, k = 0,step = 0;//k记数据组数
//	int dec = 0;
//	int Mm[Max], Nn[Max], Nzero[Max] = {0};//静态，使用零初始化
//	int *card[Max],*q[Max];//指针数组，其数组元素是指针，有Max个元素
//	//首先获取第一组数据
//	cin >> N;
//	card[k] = new int[N];
//	Nn[k] = N;//记录每组数据N的长度
//	for (int i = 0; i < N; i++)
//	{
//		cin >> card[k][i];
//		if (card[k][i]) Nzero[k]++;
//	}
//	cin >> M;
//	q[k] = new int[M];
//	Mm[k] = M;//记录每组数据M的长度
//	for (int i = 0; i < M; i++)
//	{
//		cin >> q[k][i];
//	}
//	k++;
//	//获取其他组数据
//	while (!cin.fail())
//	{
//		cin >> N;
//		if (cin.fail()) break;//读到文件尾跳出循环
//		card[k] = new int[N];
//		Nn[k] = N;//记录每组数据N的长度
//		for (int i = 0; i < N; i++)
//		{
//			cin >> card[k][i];
//			if (card[k][i]) Nzero[k]++;
//		}
//		cin >> M;
//		q[k] = new int[M];
//		Mm[k] = M;//记录每组数据M的长度
//		for (int i = 0; i < M; i++)
//		{
//			cin >> q[k][i];
//		}
//		k++;
//	}
//	//cout << "break ok!" << endl;
//	for (int i = 0; i < k; i++)//依次对每组数据进行求解
//	{
//		sort(q[i], Mm[i]);//对第k组数据进行排序
//		//for (int j = 0; j < Mm[i]; j++){ cout << q[i][j] << endl; }//查看排序是否正确
//		for (int j = 0; j < Mm[i]; j++)//第k组数据的M为Mm[k],即集合长度，接着对从大到小消除符合长度的牌
//		{
//			while (Nzero[i] >= q[i][j])//具有符合集合元素所指长度的组合
//			{
//				step++;//步数+1
//				dec = 0;
//				for (int x = 0; (x < Nn[i] && dec < q[i][j]); x++)//第k组card的牌种N为Nn[k]
//				{
//					if (card[i][x] != 0)//若该牌种数量不为0
//					{
//						card[i][x]--;
//						dec++;
//						if (card[i][x] == 0) Nzero[i]--;//刷新数量不为0的牌种数
//					}
//				}
//			}
//		}
//		//输出结果，成功或不成功
//		if (Nzero[k] > 0)
//			cout << "WTD is really a Gambling God!" << endl;
//		else
//			cout << "BG will finish the cards by " << step << " steps" << endl;
//		step = 0;
//		delete[]q[i];
//		delete[]card[i];
//	}
//	//End = clock();//结束计时
//	//cout << "程序运行时间为： " << (double(End - Begin) / CLK_TCK) << "ms" << endl;
//	cin.get();
//	cin.get();
//	return 0;
//}
//
//void sort(int a[], int len)
//{
//	int z;
//	for (int i = 0; i < len; i++)//每次找出最大的排在第一
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