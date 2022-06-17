#include "pch.h"
#include "CppUnitTest.h"
#include "../PUBrat.cpp"
#include "../Rational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			PUBrat p{ 1,2 };
			p--;
			Assert::AreEqual(p.geta(), 0);

		}
	};
}
