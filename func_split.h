#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

#ifdef CREATEDLL_EXPORTS
#define MYDLL_DECLSPEC __declspec(dllexport)
#else
#define MYDLL_DECLSPEC __declspec(dllimport)
#endif

using namespace std;

extern "C" MYDLL_DECLSPEC void string_split(string a);
