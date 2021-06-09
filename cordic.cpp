//=========================================================================
// cordic.cpp
//=========================================================================
// @brief : A CORDIC implementation of sine and cosine functions.

#include "cordic.h"
#include <math.h>

#include <iostream>

//-----------------------------------
// cordic function
//-----------------------------------
// @param[in]  : theta - input angle
// @param[out] : s - sine output
// @param[out] : c - cosine output
void cordic(theta_type theta, cos_sin_type &s, cos_sin_type &c)
{
    // -----------------------------
    // YOUR CODE GOES HERE
    // -----------------------------
	
	cos_sin_type cur_cos = 0.60735; //scaled angle of 0
	cos_sin_type cur_sin = 0;
	
	cos_sin_type factor = 1; //looking at 2^(-factor)



#ifdef FIXED_TYPE // fixed-point design
FIXED_STEP_LOOP:
    for ( step = 0; step < 20; step++ ) 
    {
 








    }

#else // floating point design

FLOAT_STEP_LOOP:
    for ( step = 0; step < NUM_ITER; step++ ) 
    {










    }
   
    
#endif
    
}
