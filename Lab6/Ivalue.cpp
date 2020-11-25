#include <iostream>
#include "Ivalue.h"
#include "Rvalue.h"
#include "Tvalue.h"

Ivalue::Ivalue(const double value)
{
	val = value;
}

Uvalue Ivalue::operator*(const Rvalue& rvalue) const
{
	return Uvalue(val * rvalue.get_val());
}

Qvalue Ivalue::operator*(const Tvalue& tvalue) const
{
	return Qvalue(val * tvalue.get_val());
}

std::ostream& operator<<(std::ostream& out, const Ivalue& ivalue)
{
	out << ivalue.val << " " << ivalue.short_name_;
	return out;
}

