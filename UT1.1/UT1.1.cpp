#include "pch.h"
#include "CppUnitTest.h"
#include "../PR1.1/Pay.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT11
{
	TEST_CLASS(UT11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pay a;

			a.SetFirst(2);
			a.SetSecond(2);

			Assert::AreEqual(1.0, a.Summa(1));
		}
	};
}