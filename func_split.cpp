#include "pch.h"
#include "func_split.h"

void string_split(string a)
{
	ofstream fout;
	fout.open("test.csv");

	string result[10];
	static int i = 0;
	istringstream iss(a);
	string token;

	while (getline(iss, token, ' '))
	{
		result[i] = token;
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		fout.write(result[j].c_str(), result[j].size());
		fout.write(",", 1);
	}
	fout.close();
}