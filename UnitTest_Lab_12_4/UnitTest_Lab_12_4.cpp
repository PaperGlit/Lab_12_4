#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12_4/Lab_12_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab124
{
	TEST_CLASS(UnitTestLab124)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* L = NULL;
			LAdd(L, 3);
			LAdd(L, 4);
			LAdd(L, 3);
			LAdd(L, 3);
			LAdd(L, 5);
			LAdd(L, 3);
			Assert::AreEqual(LCount(L, 3), 4);
		}
	};
}