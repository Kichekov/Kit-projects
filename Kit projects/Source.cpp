#include<iostream>
#include <iomanip>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	float Weight; // Переменная хранящая данные вес
	float Height; // Переменная хранящая данные роста
	float bodyMassIndex; // Переменная хранящая данные ИМТ
	float heightSquared;// Данные раста в квадрате 
	cout << "Specify your weight in kg." << endl;
	cin >> Weight;//Пользователь вводит вес
	cout << "Specify your height in cm." << endl;
	cin >> Height;//Пользователь вводит рост
	heightSquared = pow(Height, 2) / 10000;//Преобразуем данные роста в формат для проведения расчета
	bodyMassIndex = Weight / heightSquared;//Производим расчет ИМТ
	cout << "Your height: " << Height << "cm." << endl;
	cout << "Your weight: " << Weight << "kg." << endl;
	cout << "BMI (body mass index): " << fixed << setprecision(2) << bodyMassIndex << " units." << endl;

	if (16 < bodyMassIndex && bodyMassIndex < 19)
	{
		cout << "Body weight deficiency" << endl;
	}
	if (19 < bodyMassIndex && bodyMassIndex < 25)
	{
		cout << "Normal body weight" << endl;
	}
	if (25 < bodyMassIndex && bodyMassIndex < 30)
	{
		cout << "Overweight (pre-obesity)" << endl;
	}
	if (30 < bodyMassIndex && bodyMassIndex < 35)
	{
		cout << "Obesity of the first degree" << endl;
	}
	if (35 < bodyMassIndex && bodyMassIndex < 40)
	{
		cout << "Obesity of the II degree" << endl;
	}
	if (40 < bodyMassIndex)
	{
		cout << "Obesity of the III degree" << endl;
	}
	return 0;
}