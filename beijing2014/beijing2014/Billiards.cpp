//结果与示例不完全一致？
//20181029
//注意浮点数的精度问题导致它不能与整数直接划等号，采用自设置精度的方式，但要加入绝对值的应用
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Single_group_data(const int rec[2],float coor[][2],const int len,const int m,const int r, int v[2]);//rec球桌宽高W*H，coor球坐标，len球数，m碰撞次数，v球1初速度
int main()
{
	int rec[2], n, m, r, v[2],k=0;
	float coor[60][22][2];
	int nn[60];
	//int vv[60];
	cin >> n;//球数n
	while (!cin.fail())
	{
		cin >> m;//碰撞次数m
		cin >> r;//球半径r
		cin >> rec[0] >> rec[1];//球台W*H
		for (int i = 0; i < n; i++)//球坐标
		{
			cin >> coor[k][i][0];
			cin >> coor[k][i][1];
		}
		cin >> v[0] >> v[1];//1号球初速度
		Single_group_data(rec,coor[k],n,m,r,v);
		nn[k] = n;
		//vv[k] = v[1];
		k++;
		cin >> n;//球数n
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < nn[i]; j++)
		{
			cout << fixed << setprecision(2);
			cout << coor[i][j][0] << " " << coor[i][j][1] << endl;
			//cout << vv[i] << endl;
		}
	}
	//system("pause");//用于调试（按F5）时，保留窗口，若不加就直接按Ctrl+F5（开始执行，不调试）
	//cin.get();
	//cin.get();
	return 0;
}

void Single_group_data(const int rec[2], float coor[][2], const int len, const int m, const int r, int v[2])
{
	int collision_m=0,k=0;
	float t = 0.01;
	for (int t_i = 0; t_i < 1000; t_i++)
	{
		coor[k][0] += v[0] * t;
		coor[k][1] += v[1] * t;
		//cout << coor[k][1] << endl;
		for (int i = 0; i < len; i++)
		{
			float dis = pow(abs(coor[i][0] - coor[k][0]), 2) + pow(abs(coor[i][1] - coor[k][1]), 2);
			//if (collision_m == 2) cout << "dis: " << dis << endl;
			if (i != k && dis <= (4 * r * r))
			{
				collision_m++;
				//cout << "collision_m0: " << collision_m << endl;
				k = i;
				if (collision_m == m) break;//若此次碰撞已满足设定，则弹出
			}
		}
		if ((coor[k][0] - r) <= 0.001 || abs(coor[k][0] - (rec[0] - r)) <= 0.001)//左右两边界
		{
			collision_m++;
			//cout << "collision_m1: " << collision_m << endl;
			v[0] = -v[0];
		}
		if ((coor[k][1] - r) <= 0.001 || abs(coor[k][1] - (rec[1] - r)) <= 0.001)//下上两边界
		{
			collision_m++;
			//cout << "collision_m2: " << collision_m << endl;
			v[1] = -v[1];
		}
		if (collision_m == m) break;
	}
	//cout << "collision_m: " << collision_m << endl;
	//if (collision_m != m) cout << "no.." << endl;
}

//错误代码
//for (int t = 0;  t< 10; t+=0.01)
//{
//	coor[k][0] += v[0] * t;//开始时，对x和y坐标的累加错误，将t放在了for中，每次的t都增加了
//	coor[k][1] += v[1] * t;
//}