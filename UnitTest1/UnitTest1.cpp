#include "pch.h"
#include "CppUnitTest.h"
#include "../1.3/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money money;
			bool t;
			t = money.Init(1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 50, 10);
			Assert::AreEqual(t, true);

		}
	};
}
