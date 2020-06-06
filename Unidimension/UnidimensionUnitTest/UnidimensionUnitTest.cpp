#include "pch.h"
#include "CppUnitTest.h"
#include "../Unidimension/Unidimensional.h"
#include "../Unidimension/Operation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnidimensionUnitTest
{
	TEST_CLASS(UnidimensionUnitTest)
	{
	public:
		
		TEST_METHOD(mcmTest)
		{
			Unidimensional arr(4);
			Operation op;

			for (int i = 0; i < arr.getDimension(); i++)
				*(arr.getArray() + i) = 2;
			
			Assert::AreEqual(8, op.mcm(arr));

			Unidimensional arr2(3);

			*(arr2.getArray()) = 2;			
			*(arr2.getArray() + 1) = 3;
			*(arr2.getArray() + 2) = 6;

			Assert::AreEqual(6, op.mcm(arr2));
		}

		TEST_METHOD(mcdTest) {

			Unidimensional arr(4);
			Operation op;

			for (int i = 0; i < arr.getDimension(); i++)
				*(arr.getArray() + i) = 2;

			Assert::AreEqual(2, op.mcd(arr));

			Unidimensional arr2(3);

			*(arr2.getArray()) = 2;
			*(arr2.getArray() + 1) = 3;
			*(arr2.getArray() + 2) = 6;

			Assert::AreEqual(6, op.mcd(arr2));

		}
	};
}
