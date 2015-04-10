// elemental.cpp ///////////////////////////////////////////////////////////////
// some horrible long functions from the matters ///////////////////////////////
// module that I wanted to put elsewhere ///////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"

//#include "Source.c"

//#include "Headers.hpp"
//#include "Source.cpp"
#include "matters.hpp"

std::string Element_name(element input)
{	std::string output = "foo";
	switch(input)
	{	case H:
		output = "Hydrogen";
		break;
		
		case He:
		output = "Helium";
		break;
		
		case Li:
		output = "Lithium";
		break;
		
		case Be:
		output = "Beryllium";
		break;	
		// and so on and so on...	
	}
	
	
	return output;
}

atomic_mass Element_mass(element input)
{	atomic_mass output = 1.01;
	return output;
}

atomic_number Atomic_number_of(element input)
{	switch(input)
	{	case H:
		return 1;
		// sneaky, sneaky precious
		
		case He:
		return 2;
		
		case Li:
		return 3;
		
		case Be:
		return 4;
		
		case B:
		return 5;
		
		case C:
		return 6;
	}
	
	return 1;
	// everything is hydrogen, the physicists are happy
	
}

