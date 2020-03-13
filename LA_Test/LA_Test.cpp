#include "pch.h"
#include "CppUnitTest.h"
#include "../LA/LA.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace LATest
{
	TEST_CLASS(LATest)
	{
	public:
		TEST_METHOD(DISTANCE_TEST) {
			Point A = Point(10,20);
			Point B = Point(20,40);

			double correct_ans = sqrt(500); // sqrt( (20-10)^2 + (40-20)^2 )
			double function_result = A.dist(B);

			Assert::AreEqual(correct_ans, function_result);
		}

		TEST_METHOD(NORM_TEST) {
			Point A = Point(10, 45);

			double correct_norm = sqrt(pow(10, 2) + pow(45, 2));
			double function_result = A.norm();

			Assert::AreEqual(correct_norm, function_result);
		}

		// TestMethod for dot_product  

	};
};
