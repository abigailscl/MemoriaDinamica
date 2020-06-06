#include "pch.h"
#include "CppUnitTest.h"
#include "../TaylorApp/Trigonometry.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TaylorUnitTest
{
	TEST_CLASS(TaylorUnitTest)
	{
	public:
		
		TEST_METHOD(sinTest)
		{
			Trigonometry tr;

			Assert::AreEqual(1.0, tr.sin(90));
		}

		TEST_METHOD(cosTest)
		{
			Trigonometry tr;

			Assert::AreEqual(0.0, tr.cos(90));
		}
	};
}
