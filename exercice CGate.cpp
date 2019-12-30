

#include "pch.h"
#include <iostream>
#include"gate.h"

using namespace std;

int main()
{
	gate my_gate;
	bool A = 1, B = 0, C = 1, D = 1;
	cout << my_gate.porte_Xor(D, my_gate.porte_Or(C, my_gate.porte_Et(A, B))) << endl;
	
	
     
}


