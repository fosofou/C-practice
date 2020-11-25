#pragma once
#include <iostream>

#include "Ivalue.h"

class Uvalue
{
public:
	explicit Uvalue(double);
	double get_val() const { return val; }
	Ivalue operator/(const Rvalue& rvalue) const;
	Rvalue operator/(const Ivalue& ivalue) const;
	friend std::ostream& operator<< (std::ostream& out, const Uvalue& uvalue);
private:
	double val;
	const std::string short_name_ = "Â";
};
