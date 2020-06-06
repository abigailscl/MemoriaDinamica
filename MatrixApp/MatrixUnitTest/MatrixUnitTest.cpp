#include "pch.h"
#include "CppUnitTest.h"
#include "../MatrixApp/Matrix.h"
#include "../MatrixApp/OperationMatrix.h"

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
			int** expected = new int*[matrix.getDimension()];
			for (size_t i = 0; i < matrix.getDimension(); i++)
				*(expected + i) = new int[matrix.getDimension()];
			

			for (size_t i = 0; i < matrix.getDimension(); i++) {
				for (size_t j = 0; j < matrix.getDimension(); j++) {
					*(*(expected + i) + j) = 0;
				}
			}

			for (size_t i = 0; i < matrix.getDimension(); i++) {
				for (size_t j = 0; j < matrix.getDimension(); j++) {
					Assert::AreEqual(*(*(expected + i) + j), *(*(matrix.getMatrix() + i) + j));
				}
			}
			
		}

		TEST_METHOD(operationTest) {

			OperationMatrix op;

			Matrix matrix(2);
			matrix.wax();

			for (size_t i = 0; i < matrix.getDimension(); i++) {
				for (size_t j = 0; j < matrix.getDimension(); j++) {
					*(*(matrix.getMatrix() + i) + j) = 2;
				}
			}

			int** expected = new int* [matrix.getDimension()];
			for (size_t i = 0; i < matrix.getDimension(); i++)
				*(expected + i) = new int[matrix.getDimension()];


			for (size_t i = 0; i < matrix.getDimension(); i++) {
				for (size_t j = 0; j < matrix.getDimension(); j++) {
					*(*(expected + i) + j) = 32;
				}
			}

			for (size_t i = 0; i < matrix.getDimension(); i++) {
				for (size_t j = 0; j < matrix.getDimension(); j++) {
					Assert::AreEqual(*(*(expected + i) + j), *(*(op.multiplySameMatrix(matrix, 3).getMatrix() + i) + j));
				}
			}
		}
	};
}
