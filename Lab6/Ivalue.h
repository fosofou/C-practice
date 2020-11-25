#pragma once
#ifndef IVALUE_H
#define IVALUE_H
#include <iostream>


#include "Qvalue.h"

class Tvalue;
class Rvalue;
using namespace std;
class Ivalue
{
public:
	explicit Ivalue(double);
	double get_val() const { return val; }
	Uvalue operator*(const Rvalue& rvalue) const;
	Qvalue operator*(const Tvalue& tvalue) const;
	friend std::ostream& operator<< (std::ostream& out, const Ivalue& ivalue);
private:
	double val;
	const string short_name_ = "À";
};
#endif
