#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP2.2/Queue.h"
#include "../OOP2.2/Queue.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest22
{
	TEST_CLASS(UnitTest22)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Queue q;
			q.push(5);
			Assert::AreEqual(static_cast<size_t>(1), q.getQueue().size());

			Assert::AreEqual(5, q.getQueue().front());
		}
	};
}
