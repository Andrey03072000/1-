#pragma once
#include "vector.h"
#ifndef _TEST_H
#define _TEST_H

class class_test 
{
public:
	void test_all_operator();
private:
	void test_operator_minus();
	void test_operator_plus();
	void test_operator_division();
	void test_operator_multiplication();
	class_vector test1 = class_vector(1, 1, 1);
	class_vector test2 = class_vector(2, 2, 2);
	int test3 = 7;
};
#endif 