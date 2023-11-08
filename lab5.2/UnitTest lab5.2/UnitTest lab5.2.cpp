#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

namespace UnitTestlab52
{
	TEST_CLASS(UnitTestlab52)
	{
	public:

		TEST_METHOD(TestS)
		{
			double x = 0.5; // Замініть це значення на те, яке ви хочете перевірити
			double eps = 1e-6;
			int n = 0;
			double s = 0.0;
			S(x, eps, n, s);

			double expected_result = atan(x); // Очікуваний результат для порівняння
			Assert::IsTrue(fabs(s - expected_result) < eps); // Порівняння s з очікуваним результатом
		}
	};
}

