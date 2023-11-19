#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestInArray)
		{
			const int size = 23;
			int array[size];
			inArray(array, 0, size);
			for (int i = 0; i < size; i++) {
				Assert::IsTrue(array[i] >= 4 && array[i] <= 16);
			}
		}

		TEST_METHOD(TestModeArray)
		{
			const int size = 23;
			int array[size];
			int sum = 0;
			int count = 0;
			inArray(array, 0, size);
			modeArray(array, 0, size, count, sum);
			for (int i = 0; i < size; i++) {
				if (!(i % 2 == 0 && i % 3 == 0)) {
					Assert::AreEqual(array[i], 0);
				}
			}
		}
	};
}
