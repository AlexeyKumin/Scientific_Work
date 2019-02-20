#pragma once
#include <vector>
#include <iostream>
#include <random>
#include <time.h>
#include <math.h>
using namespace std;

class StreamModel
{
public:
	int key;//состояние 
	int x;//сколько было в очереди 
	double t; //время обработки заявки
	double l;//интенстивность потока
	vector<int> Auto;
	vector<double> T;
	vector<double> mesX;//массив кол-ва заявок в разные промежутки времени

	StreamModel(int KEY = 0, int X = 0, double T = 1, double L = 1);

	void move(double T);

	void service(double T);

	void stagnation(double T);

	double Med_x();

	double Med_Tx();

	~StreamModel();
};

