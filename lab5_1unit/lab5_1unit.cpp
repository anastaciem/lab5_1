#include "pch.h"
#include "CppUnitTest.h"
#include "D:/Університет/АП/Лабораторні/Тема 5/vs/lab5_1/lab5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab5_1unit
{
	TEST_CLASS(lab5_1unit)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 0;
			int b = 0;
			int t;
			t = (a * a * sin(b)) + (b * b * cos(a));
			Assert::AreEqual(t, 0);
		}
	};
}