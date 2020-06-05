#include "pch.h"
#include "CppUnitTest.h"
#include "../MatrixApp/Matrix.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MatrixUnitTest
{
	TEST_CLASS(MatrixUnitTest)
	{
	public:
		
		TEST_METHOD(waxTest)
		{
			Matrix matrix(2);
			matrix.wax();
			int** expected;

			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					*(*(expected + i) + j) = 0;
				}
			}

			Assert::AreEqual(expected, matrix.getMatrix());
		}
	};
}
