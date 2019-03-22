#define CTEST_MAIN

#include <ctest.h>
#include <stdbool.h>
char a[9][9];

CTEST(Syntax, Correct_Syntax_Check)
{
	bool result = move(a, "e12-e4");
	ASSERT_FALSE(result);
}

CTEST(Syntax, Incorrect_Syntax_Check)
{
	bool result = move(a, "b22-b4");
	ASSERT_FALSE(result);
}

CTEST (Syntax, Incorrect_Figure_Move)
{
	bool result = move(a, "c1-c3");
	ASSERT_TRUE(result);
}

CTEST (Syntax, Incorrect_Movemet_Split)
{
	bool result = move(a, "d1-d3");
	ASSERT_TRUE(result);
}


int main (int argc, const char** argv)
{
	board(a);
	return ctest_main(argc, argv);
}
