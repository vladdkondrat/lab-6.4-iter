#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.4 iter/lab 6.4 iter .cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest14
{
	

	TEST_CLASS(UnitTest14)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double arr1[] = { 1.0, 7.5, 3.5, 2.0, 4.0 };
			int n1 = 5;
			Assert::AreEqual(9.5, sumAfterMax(arr1, n1), 1e-9); // Sum: 3.5 + 2.0 + 4.0 = 9.5

			double arr2[] = { 3.0, -2.0, 10.0, 0.0, 5.0 };
			int n2 = 5;
			Assert::AreEqual(5.0, sumAfterMax(arr2, n2), 1e-9); // Sum after 10.0: 0.0 + 5.0 = 5.0

			};
		};
	};
