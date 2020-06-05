#pragma once
/***********************************************************************
 * Module:  Operation.h
 * Author:  Charlie
 * Modified: Tuesday, June 2, 2020 03:13:32
 * Purpose: Declaration of the class Operation
 ***********************************************************************/

#if !defined(__unidimensional_UML_Operation_h)
#define __unidimensional_UML_Operation_h

#include "Unidimensional.h"

class Operation
{
public:
    int mcm(Unidimensional array);
    int mcd(Unidimensional array);
    Operation();

protected:
private:

};

#endif

