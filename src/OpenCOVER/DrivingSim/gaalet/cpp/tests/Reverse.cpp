/* This file is part of COVISE.

   You can use it under the terms of the GNU Lesser General Public License
   version 2.1 or later, see lgpl-2.1.txt.

 * License: LGPL 2+ */

#define _USE_MATH_DEFINES
#include "gaalet.h"
#include <cmath>

typedef gaalet::algebra<gaalet::signature<3, 0> > em;

int main()
{
    em::mv<0, 3, 5, 6>::type R(cos(-0.25 * M_PI), sin(-0.25 * M_PI), 0.0, 0.0);
    std::cout << "R: " << R << ", ~R: " << ~R << std::endl;

    em::mv<1, 2, 4>::type a(1.0, 0.0, 0.0);

    std::cout << "a: " << a << ", R*a*(~R): " << grade<1>(R * a * (~R)) << std::endl;
}
