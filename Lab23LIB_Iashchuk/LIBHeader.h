#pragma once
#define n 6
#define k 5

typedef double matr[n][k], vect[n];

namespace Matrix
{
	class MyMatrixFuncs
	{
	public:
		static void elem_Matr(matr* c);
		static void elem_Vect(matr* c, vect* v);
		static double product(matr* c);
	};
}