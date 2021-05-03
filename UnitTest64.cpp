#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab6.4/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1, 1, 1, 1, 1 };
			int b[5] = { 1, 1, 2, 1, 1 };
			Assert::AreEqual(Ordered(a, a + 5),true);
			Assert::AreEqual(Ordered(b, b + 5), false);
		}
	};
}
