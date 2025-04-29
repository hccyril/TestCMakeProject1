// TestCMakeProject1.cpp: 定义应用程序的入口点。
//

#include "TestCMakeProject1.h"
#include "prf.h"

using namespace std;

extern int mytest2(int x);

int main()
{
	cout << "Hello CMake." << endl;
	int x = 33;
	cout << "x2 " << x << " = " << mytest2(x) << endl;
	return 0;
}
