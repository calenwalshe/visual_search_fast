//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  rand.cpp
//
//  Code generation for function 'rand'
//


// Include files
#include "rand.h"
#include "covert_search_dp_data.h"
#include "eml_rand_mt19937ar.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder
{
  void b_rand(double varargin_2, ::coder::array<double, 2U> &r)
  {
    unsigned int u[2];
    int i;
    r.set_size(1, (static_cast<int>(varargin_2)));
    i = static_cast<int>(varargin_2);
    for (int k = 0; k < i; k++) {
      double b_r;

      // ========================= COPYRIGHT NOTICE ============================ 
      //  This is a uniform (0,1) pseudorandom number generator based on:        
      //                                                                         
      //  A C-program for MT19937, with initialization improved 2002/1/26.       
      //  Coded by Takuji Nishimura and Makoto Matsumoto.                        
      //                                                                         
      //  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      
      //  All rights reserved.                                                   
      //                                                                         
      //  Redistribution and use in source and binary forms, with or without     
      //  modification, are permitted provided that the following conditions     
      //  are met:                                                               
      //                                                                         
      //    1. Redistributions of source code must retain the above copyright    
      //       notice, this list of conditions and the following disclaimer.     
      //                                                                         
      //    2. Redistributions in binary form must reproduce the above copyright 
      //       notice, this list of conditions and the following disclaimer      
      //       in the documentation and/or other materials provided with the     
      //       distribution.                                                     
      //                                                                         
      //    3. The names of its contributors may not be used to endorse or       
      //       promote products derived from this software without specific      
      //       prior written permission.                                         
      //                                                                         
      //  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    
      //  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      
      //  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  
      //  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  
      //  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  
      //  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       
      //  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  
      //  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  
      //  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    
      //  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
      //  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  
      //                                                                         
      // =============================   END   ================================= 
      do {
        genrand_uint32_vector(state, u);
        u[0] >>= 5U;
        u[1] >>= 6U;
        b_r = 1.1102230246251565E-16 * (static_cast<double>(u[0]) * 6.7108864E+7
          + static_cast<double>(u[1]));
      } while (b_r == 0.0);

      r[k] = b_r;
    }
  }

  void b_rand(int varargin_1, ::coder::array<double, 1U> &r)
  {
    unsigned int u[2];
    r.set_size(varargin_1);
    for (int k = 0; k < varargin_1; k++) {
      double b_r;

      // ========================= COPYRIGHT NOTICE ============================ 
      //  This is a uniform (0,1) pseudorandom number generator based on:        
      //                                                                         
      //  A C-program for MT19937, with initialization improved 2002/1/26.       
      //  Coded by Takuji Nishimura and Makoto Matsumoto.                        
      //                                                                         
      //  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      
      //  All rights reserved.                                                   
      //                                                                         
      //  Redistribution and use in source and binary forms, with or without     
      //  modification, are permitted provided that the following conditions     
      //  are met:                                                               
      //                                                                         
      //    1. Redistributions of source code must retain the above copyright    
      //       notice, this list of conditions and the following disclaimer.     
      //                                                                         
      //    2. Redistributions in binary form must reproduce the above copyright 
      //       notice, this list of conditions and the following disclaimer      
      //       in the documentation and/or other materials provided with the     
      //       distribution.                                                     
      //                                                                         
      //    3. The names of its contributors may not be used to endorse or       
      //       promote products derived from this software without specific      
      //       prior written permission.                                         
      //                                                                         
      //  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    
      //  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      
      //  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  
      //  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  
      //  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  
      //  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       
      //  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  
      //  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  
      //  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    
      //  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
      //  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  
      //                                                                         
      // =============================   END   ================================= 
      do {
        genrand_uint32_vector(state, u);
        u[0] >>= 5U;
        u[1] >>= 6U;
        b_r = 1.1102230246251565E-16 * (static_cast<double>(u[0]) * 6.7108864E+7
          + static_cast<double>(u[1]));
      } while (b_r == 0.0);

      r[k] = b_r;
    }
  }
}

// End of code generation (rand.cpp)
