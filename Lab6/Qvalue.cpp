#include <iostream>
#include "Qvalue.h"
#include "Uvalue.h"

Qvalue::Qvalue(const double value)
{
	val = value;
}

Cvalue Qvalue::operator/(const Uvalue& uvalue) const
{
	return Cvalue(val / uvalue.get_val());
}

Uvalue Qvalue::operator/(const Cvalue& cvalue) const
{
	return Uvalue(val / cvalue.get_val());
}

std::ostream& operator<<(std::ostream& out, const Qvalue& qvalue)
{
	out << qvalue.val << " " << qvalue.short_name_;
	return out;
}
