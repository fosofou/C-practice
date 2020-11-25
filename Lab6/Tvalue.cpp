#include <iostream>
#include "Tvalue.h"
#include "Ivalue.h"

Tvalue::Tvalue(const double value)
{
	val_ = value;
}

Qvalue Tvalue::operator*(const Ivalue& ivalue) const
{
	return Qvalue(val_ * ivalue.get_val());
}

std::ostream& operator<<(std::ostream& out, const Tvalue& tvalue)
{
	out << tvalue.val_ << " " << tvalue.short_name_;
	return out;
}
