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
			
			Assert::AreEqual(2, op.mcm(arr));

		}
	};
}
