#pragma once
#ifndef QVALUE_H
#define QVALUE_H
#include <iostream>

#include "Cvalue.h"

class Uvalue;

class Qvalue
{
public:
	explicit Qvalue(double);
	double get_value() const { return val; }
	Cvalue operator/(const Uvalue& uvalue) const;
	Uvalue operator/(const Cvalue& qvalue) const;
	friend std::ostream& operator<< (std::ostream& out, const Qvalue& qvalue);
private:
	double val;
	const std::string short_name_ = "Êë";
};
#endif