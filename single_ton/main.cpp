#include<iostream>
#include"SingleTon.h"
#include"A.h"
using namespace std;

int main()
{
	SingleTon<A>::instance()->ShowName();
	return 0;
}