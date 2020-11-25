#include <iostream>
#include "Uvalue.h"
#include "Rvalue.h"
Uvalue::Uvalue(double new_val) { val = new_val; };
Rvalue Uvalue::operator/(const Ivalue& i) const { return Rvalue(val / i.get_val()); };
Ivalue Uvalue::operator/(const Rvalue& r) const { return Ivalue(val / r.get_val()); };

std::ostream& operator<<(std::ostream& out, const Uvalue& uvalue)
{
	out << uvalue.get_val() << " " << uvalue.short_name_;
	return out;
}