#include <Rcpp.h>
#include "covert_search_dp.h"
#include <iostream>
#include "coder_array.h"
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

void testcall(const double b[5760000], const double c[5760000]);
void testcall(const double b[5760000], const double c[5760000]) {
  std::cout << b[5760000-1];
}


// [[Rcpp::export]]
NumericVector timesTwo(NumericVector trials_, NumericVector seed_) {
  static double a[5760000];
  //a = new double[5760000];
  for(int i = 1; i < 5760000; i++) {
    a[i] = 1.0;
  }
  
  static double b[5760000];
//a = new double[5760000];
  for(int i = 1; i < 5760000; i++) {
    b[i] = 1/5760000;
  }

  double trials = trials_[0];
  double seed = seed_[0];
  
  
  coder::array<double, 2U> results;
  covert_search_dp(trials, a, b, seed, results);
  
  Rcout << results[1];
  return trials_[0] * 2;
}