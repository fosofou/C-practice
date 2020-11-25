#include "Cvalue.h"
#include <iostream>

Cvalue::Cvalue(const double value) {val = value;}

Cvalue Cvalue::operator+(Cvalue& cvalue) const { return Cvalue(val + cvalue.get_val()); }

Cvalue Cvalue::operator*(Cvalue& cvalue) const { return Cvalue(val * cvalue.get_val()); }

Cvalue Cvalue::operator%(Cvalue& cvalue) const
{
	return Cvalue((val + cvalue.get_val()) / (val * cvalue.get_val()));
}

std::ostream& operator<<(std::ostream& out, const Cvalue& cvalue)
{
	out << cvalue.val << " " << cvalue.short_name_;
	return out;
}
