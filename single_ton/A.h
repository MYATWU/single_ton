#pragma once

#include<string>
#include "SingleTon.h"
using std::string;
using std::cout;
using std::endl;

class A {
	friend class SingleTon<A>;
public:
	void ShowName() {
		cout << m_name << endl;
	}
private:
	A() : m_name("A") { };
	~A() = default;
	A(const A&) = default;
	A& operator= (const A&) = default;
private:
	string m_name;
};