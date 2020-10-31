/**libraries definitions
There are some libraries
that were used in that project
*/
#include <iostream>
#include <math.h>
#include "Linear.h"
#include "Model.h"
#include "Non_linear.h"
#include "Reg.h"

using std::cout;

/**In main() function we calculate
both linear and non-linear equations
for PID-regulator
*/
int main()
{
	
	Regulate* regulator = new Regulate;
	Lin* linear = new Lin;
	regulator->start_PID(25, linear, 0);

	cout << "\n\n";

	Regulate* regulator2 = new Regulate;
	Non_lin* non_linear = new Non_lin;
	regulator2->start_PID(25, non_linear, 0);

	return 0;
}