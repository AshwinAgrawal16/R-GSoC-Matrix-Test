// Solution to GSOC-2017 Project Proposal Test.
// Project Name: Sparse matrix automatic conversion in RcppArmadillo
// Student Name: Akilesh Lakshminarayanan

#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]
void print_matrix_cpp(S4 obj) {
  
  // Object Class
  CharacterVector objtype= obj.slot("class");
  Rcout << "Type:   "<< objtype << "\n";

  // Object Dimensions
  NumericVector objdim = obj.slot("Dim");
  Rcout << "Dim:   "<< objdim << "\n";

  // i value and size 
  NumericVector vec1 = obj.slot("i");
  Rcout << "length of i:   " << vec1.size() <<"\n";
  Rcout << "value of i:   " << vec1 << "\n";

  // p value and size
  NumericVector vec2 = obj.slot("p");
  Rcout << "length of p:   " << vec2.size() <<"\n";
  Rcout << "value of p:   " << vec2 << "\n";

  // x value and size
  NumericVector vec3 = obj.slot("x");
  Rcout << "length of x:   " << vec3.size() <<"\n";
  Rcout << "value of x:   " << vec3 << "\n";  

  // fin
}