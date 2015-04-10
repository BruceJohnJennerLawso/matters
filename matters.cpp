// matters.cpp /////////////////////////////////////////////////////////////////
// mucking about with chemistry! ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"

//#include "Source.c"

//#include "Headers.hpp"
//#include "Source.cpp"
#include "matters.hpp"



Element::Element(element type)
{	Atomic_number = Atomic_number_of(type);
}

Element::Element(atomic_number number)
{	Atomic_number = number;
}

Element::~Element()
{
}
