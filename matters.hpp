// matters.hpp /////////////////////////////////////////////////////////////////
// mucking about with chemistry! ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//#include <std_files>
//#include "Headers.h"

//#include "Source.c"

//#include "Headers.hpp"
//#include "Source.cpp"
#include <iostream>
#include <string>
#include <vector>


#ifndef MaTtErS
#define MaTtErS

typedef unsigned int atomic_number;
typedef float atomic_mass;

enum element{H, 													  	 																 He,
			 Li, Be, 								   																 B,  C,  N,  O,  F,  Ne,
			 Na, Mg, 								   																 Al, Si, P,  S,  Cl, Ar,
			 K,  Ca, 														 Sc, Ti, V,  Cr, Mn, Fe, Co, Ni, Cu, Zn, Ga, Ge, As, Se, Br, Kr,
			 Rb, Sr,														 Y,  Zr, Nb, Mo, Tc, Ru, Rh, Pd, Ag, Cd, In, Sn, Sb, Te, I,  Xe,
			 Cs, Ba, La, Ce, Pr, Nd, Pm, Sm, Eu, Gd, Tb, Dy, Ho, Er, Tm, Yb, Lu, Hf, Ta, W,  Re, Os, Ir, Pt, Au, Hg, Tl, Pb, Bi, Po, At, Rn,
			 Fr, Ra, Ac, Th, Pa, U,  Np, Pu, Am, Cm, Bk, Cf, Es, Fm, Md, No, Lr, Rf, Db, Sg, Bh, Hs, Mt, Ds, Rg, Cn, Uut,Uuq,Uup,Uuh,Uus,Uuo
			};

// ^ yes, I really am that badass

std::string Element_name(element input);
// ie, H -> "Hydrogen"
atomic_mass Element_mass(element input);
// ie, H -> 1.01
atomic_number Atomic_number_of(element input);
// ie, H -> 1

class Atom
{	public:
	Atom();
	// I guess just assumed to be Hydrogen
	// or maybe set the mass to zero in order to flag an issue
	Atom(element type);
	Atom(atomic_number number);
	
	atomic_number Atomic_number;
	atomic_mass Mass_number;
	
	
	
	
	~Atom();
};

class Molecule
{	public:
	Molecule();
	// Uhhh, damn
	Molecule(std::vector<element> atoms);
	// that looks good for now
	std::vector<Atom> Atoms;
	
	~Molecule();
	
}

#endif
