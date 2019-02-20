#include "stdafx.h"
#include "StreamModel.h"

using namespace std;

long int fact(int N)
{
	if (N == 1 || N == 0)
		return 1;
	return N * fact(N - 1);
}

double relX(double a)
{
	return (-log(1 - ((double)(rand() + 0.5) / (double)RAND_MAX)) / a);
}

int relETA(double a, double t)
{
	double sum = relX(a);
	int i = 0;
	while (t > sum)
	{
		sum += relX(a);
		i++;
	}
	return i;
}

int relETA1(double a, double t)
{
	double eta = exp(a * t) *(double)rand() / (double)RAND_MAX;
	double sum = 0;
	int i = 0;
	while (eta > sum)
	{
		sum += pow(a * t, i) / (double)fact(i);
		i++;
	}
	return i - 1;
}

int Eta(double a, double t)
{
	if ((a * t) < 20)
		return relETA1(a, t);
	else
		return relETA(a, t);
}

double Med(vector<double> mes)
{
	double Sum = 0;
	for (int i = 0; i < mes.size(); i++)
		Sum += mes[i];
	return (Sum / (double)mes.size());
}

//Реализация.....................................................
StreamModel::StreamModel(int KEY, int X,  double T, double L)
{
	key = KEY;
	x = X;
	t = T;
	l = L;
}

void StreamModel::move(double T1)
{
	double sumT = 0;
	while (sumT < T1)
	{
		sumT += t;
		service(t);
	}
}

void StreamModel::service(double T1)
{
	if (T1 >= t)
	{
		int ETA = Eta(l, T1);
		if ((x + ETA - 1) >= 0)
		{
			//.....
			int k = 1;
			for (int i = 0; i < Auto.size(); i++)
			{
				if (Auto[i] == 1)
				{
					Auto[i] = 0;
					k = 0;
					break;
				}
			}
			for (int i = 0; i < T.size(); i++)
			{
				if (Auto[i] == 1)
					T[i] += T1;
			}
			for (int i = 0; i < (ETA); i++)
			{
				Auto.push_back(1);
				T.push_back(0);
			}
			if (k)
			{
				for (int i = 0; i < Auto.size(); i++)
				{
					if (Auto[i] == 1)
					{
						Auto[i] = 0;
						break;
					}
				}
			}
			//.....

			x += ETA - 1;
		}
		else
		{
			//......
			for (int i = 0; i < T.size(); i++)
				if (Auto[i] == 1)
					T[i] += T1;
			for (int i = 0; i < (ETA); i++)
			{
				Auto.push_back(1);
				T.push_back(0);
			}
			//......

			x += ETA;
		}
	}
	mesX.push_back(x);
}

void StreamModel::stagnation(double T1)
{
	int ETA = Eta(l, T1);
	for (int i = 0; i < T.size(); i++)
		if (Auto[i] == 1)
			T[i] += T1;
	for (int i = 0; i < (ETA); i++)
	{
		Auto.push_back(1);
		T.push_back(0);
	}
	//....
	x += ETA;
}

double StreamModel::Med_x()
{
	return Med(mesX);
}

double StreamModel::Med_Tx()
{
	return Med(T);
}

StreamModel::~StreamModel()
{
}
