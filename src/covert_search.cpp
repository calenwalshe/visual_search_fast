#include <Rcpp.h>
#include "coder_array.h"
#include "covert_search_dp.h"
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
void covert_search(NumericVector x, NumericVector trials_, NumericVector dpmap_, 
                   NumericVector prior_, NumericVector seed_) {
  
  coder::array<double, 2U> results;
  
  double trials = 10;
  double seed = 1;
  double* priorh = new double[5760000];
  double* dpmap  = new double[5760000];
  double* rtmp   = new double[18225];
  
  for(int i = 0; i < 5760000; i++){
    priorh[i] = 1/5760000;
  }
  
  for(int i = 0; i < 18225; i++){
    rtmp[i] = 1.0;
  }  
  
  for(int i = 0; i < 5760000; i++){
    dpmap[i] = 1.0;
  }
  
  covert_search_dp(trials, dpmap, priorh, rtmp, seed, results);
  
  Rcout << "terminado";
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//