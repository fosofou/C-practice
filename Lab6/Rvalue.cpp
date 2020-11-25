#include <iostream>
#include "Rvalue.h"
#include "Ivalue.h"

Rvalue::Rvalue(const double value)
{
	val = value;
}

Rvalue Rvalue::operator+(Rvalue& rvalue) const
{
	return Rvalue(val + rvalue.get_val());
}

Rvalue Rvalue::operator*(Rvalue& rvalue) const
{
	return Rvalue(val * rvalue.get_val());
}

Rvalue Rvalue::operator%(Rvalue& rvalue) const
{
	return Rvalue((val + rvalue.get_val()) / (val * rvalue.get_val()));
}

Uvalue Rvalue::operator*(const Ivalue& ivalue) const
{
	return Uvalue(val * ivalue.get_val());
}

std::ostream& operator<<(std::ostream& out, const Rvalue& rvalue)
{
	out << rvalue.val << " " << rvalue.short_name_;
	return out;
}

