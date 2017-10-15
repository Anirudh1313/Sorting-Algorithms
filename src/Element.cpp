#include <iostream>
#include "Element.h"

using namespace std;

long Element::constructor_count;
long Element::copy_count;
long Element::destructor_count;
/**
 Default constructor.
 */
Element::Element() : value(0) {}

/**
 * Constructor.
 * @param val the element's value.
 */
Element::Element(long val) : value(val)
{
	constructor_count += 1;
}

/**
 * Copy constructor.
 * @param other the other element to be copied.
 */
Element::Element(const Element& other)
{
	value = other.get_value();
	copy_count += 1;
}

/**
 * Destructor.
 */
Element::~Element()
{
	destructor_count += 1;

}

/**
 * Getter.
 * @return the value.
 */
long Element::get_value() const { return value; }

long Element::get_constructor_count()
{
	return constructor_count;
}

long Element::get_copy_count()
{
	return copy_count;
}

long Element::get_destructor_count()
{
	return destructor_count;
}

void Element::reset()
{
	constructor_count = 0;
	destructor_count = 0;
	copy_count = 0;
}

bool Element::operator >(const Element& other) const
{
	 return (value > other.value);
}

bool Element::operator <(const Element& other)
{
	 return (value < other.value);
}
bool Element::operator ==(const Element& other)
{
	 return (value == other.value);
}

ostream& operator <<(ostream& outs, const Element& elt)
{
	 outs << elt.get_value();
	 return outs;
}
