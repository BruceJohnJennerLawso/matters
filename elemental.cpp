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
		
		case N:
		return 7;
		
		case O:
		return 8;
		
		case F:
		return 9;
		
		case Ne:
		return 10;
		
		case Na:
		return 11;
		
		case Mg:
		return 12;
		
		case Al:
		return 13;
		
		case Si:
		return 14;
		
		case P:
		return 15;
		
		case S:
		return 16;
		
		case Cl:
		return 17;
		
		case Ar:
		return 18;
		
		case K:
		return 19;
		
		case Ca:
		return 20;
		
		case Sc:
		return 21;
		
		case Ti:
		return 22;
		
		case V:
		return 23;
		
		case Cr:
		return 24;
		
		case Mn:
		return 25;
		
		case Fe:
		return 26;
		
		case Co:
		return 27;
		
		case Ni:
		return 28;
		
		case Cu:
		return 29;
		
		case Zn:
		return 30;
		
		case Ga:
		return 31;
		// okay, now I feel like this was a bad idea
		case Ge:
		return 32;
		
		case As:
		return 33;
		
		case Se:
		return 34;
		
		case Br:
		return 35;
		
		case Kr:
		return 36;
		
		case Rb:
		return 37;
		
		case Sr:
		return 38;
		
		case Y:
		return 39;
		
		case Zr:
		return 40;
		
		case Nb:
		return 41;
		
		case Mo:
		return 42;
		
		case Tc:
		return 43;
		
		case Ru:
		return 44;
		
		case Rh:
		return 45;
		
		case Pd:
		return 46;
		
		case Ag:
		return 47;
		
		case Cd:
		return 48;
		
		case In:
		return 49;
		
		case Sn:
		return 50;
		// Worst
		case Sb:
		return 51;
		// function
		case Te:
		return 52;
		// ever
		case I:
		return 53;
		
		case Xe:
		return 54;
		
		case Cs:
		return 55;
		
		case Ba:
		return 56;
		
		case La:
		return 57;
		
		case Ce:
		return 58;
		
		case Pr:
		return 59;
		
		case Nd:
		return 60;
		
		case Pm:
		return 61;
		
		case Sm:
		return 62;
		
		case Eu:
		return 63;
		
		case Gd:
		return 64;

		case Tb:
		return 65;
		
		case Dy:
		return 66;
		
		case Ho:
		return 67;
		
		case Er:
		return 68;
		
		case Tm:
		return 69;
		
		case Yb:
		return 70;
		
		case Lu:
		return 71;
		
		case Hf:
		return 72;
		
		case Ta:
		return 73;
		
		case W:
		return 74;
		
		case Re:
		return 75;
		
		case Os:
		return 76;
		
		case Ir:
		return 77;
		
		case Pt:
		return 78;
		
		case Au:
		return 79;
		
		case Hg:
		return 80;
		
		case Tl:
		return 81;
		
		case Pb:
		return 82;
		
		case Bi:
		return 83;
		
		case Po:
		return 84;
		
		case At:
		return 85;
		
		case Rn:
		return 86;
		
		
		
		// tedious hardly describes this
	}
	
	return 1;
	// everything is hydrogen, the physicists are happy
	
}

