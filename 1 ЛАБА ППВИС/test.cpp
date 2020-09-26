#include "test.h"

void class_test::test_all_operator()
{
	test_operator_minus();

	test_operator_plus();

	test_operator_division();

	test_operator_multiplication();

}

void class_test::test_operator_minus()
{
	class_vector minus(-1,-1,-1);
	if ((test1-test2)==minus)
	{
		cout << "OK:\n";
	}
	else
	{
		cout << "Error:\n";
	}
}

void class_test::test_operator_plus()
{
	class_vector plus(3, 3, 3);
	if ((test1 + test2) == plus)
	{
		cout << "OK:\n";
	
	}
	else
	{
		cout << "Error:\n";
	}
}

void class_test::test_operator_division()
{
	class_vector division(0,0,0);
	if ((test1 / test2) == division)
	{
		cout << "OK:\n";

	}
	else
	{
		class_vector a = test1 / test2;
		cout << "Error:\n";
	}
}

void class_test::test_operator_multiplication()
{
	class_vector multiplication(0, 0, 0);
	if ((test1 * test2) == multiplication)
	{
		cout << "OK:\n";

	}
	else
	{
		cout << "Error:\n";
	}
}


//void class_test::test_operator_division()
//{
//	class_vector division;
//	division = test1 / test2;
//	cout << division;
//}
//(-0.266667, 0.583333, -0.3)

