#pragma once
#include <string>

class Cvalue
{
public:
	explicit Cvalue(double);
	double get_val() const { return val; }
	Cvalue operator+(Cvalue& cvalue) const;
	Cvalue operator*(Cvalue& cvalue) const;
	Cvalue operator%(Cvalue& cvalue) const;
	friend std::ostream& operator<<(std::ostream&, const Cvalue&);
private:
	double val;
	const std::string short_name_ = "Ô";
};
