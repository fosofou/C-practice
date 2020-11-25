#pragma once
#ifndef TVALUE_H
#define TVALUE_H
#include <iostream>
#include "Qvalue.h"

class Ivalue;

class Tvalue
{
public:
	explicit Tvalue(double);
	double get_val() const { return val_; }
	Qvalue operator*(const Ivalue& ivalue) const;
	friend std::ostream& operator<< (std::ostream& out, const Tvalue& tvalue);
private:
	double val_;
	const std::string short_name_ = "сек";
};
#endif