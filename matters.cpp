// matters.cpp /////////////////////////////////////////////////////////////////
// mucking about with chemistry! ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"

//#include "Source.c"

//#include "Headers.hpp"
//#include "Source.cpp"
#include "matters.hpp"

Atom::Atom()
{	Atomic_number = 0;
	// hahaha
}

Atom::Atom(element type)
{	Atomic_number = Atomic_number_of(type);
}

Atom::Atom(atomic_number number)
{	Atomic_number = number;
}

Atom::~Atom()
{
}


// Molecules ///////////////////////////////////////////////////////////////////

Molecule::Molecule()
{
}

Molecule::Molecule(std::vector<element> atoms)
{	// iterate the list and construct atoms in the Atoms vector
}

Molecule::~Molecule()
{	// I guess we flush the Atoms vector here
}
