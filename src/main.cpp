/*
title: Tube Calorimeter Simulation Platform
date: 10/13/2015
author: Andrea Bigi
*/


#include <iostream>
#include <fstream>

using namespace std;


int main()
{	// description


	// variable definition
	float num;

	// flow
	
	ifstream input_file("C:\Users\Andrea\Documents\Visual Studio 2013\Projects\TubeCalorimeter\in.txt");
	input_file >> num;
	cout << num << "\n";

	system("pause");
	return 0;

}
