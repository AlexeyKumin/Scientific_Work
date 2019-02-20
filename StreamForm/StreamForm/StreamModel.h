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
	int key;//��������� 
	int x;//������� ���� � ������� 
	double t; //����� ��������� ������
	double l;//�������������� ������
	vector<int> Auto;
	vector<double> T;
	vector<double> mesX;//������ ���-�� ������ � ������ ���������� �������

	StreamModel(int KEY = 0, int X = 0, double T = 1, double L = 1);

	void move(double T);

	void service(double T);

	void stagnation(double T);

	double Med_x();

	double Med_Tx();

	~StreamModel();
};

