// Q47
// You are given three integers 'X' 'Y' and 'N'. Find the value of division X/Y up to 'N' decimal places.
// You should return a string that represents the value X/Y up to 'N' decimal places. This string must have 'N' digits after decimals. You don't need to round off the result to 'N' decimal places, just find the first ‘N' places after decimals.

// SOURCE CODE
#include <bits/stdc++.h> 
#include <cmath>
#include <string>

string findDivision(int x, int y, int n) {
  // Write your code here.
  string str = "";

  if (((x > 0) && (y < 0)) || ((x < 0) && (y > 0))){
    str.append("-");
    x = x > 0 ? x : -x;
    y = y > 0 ? y : -y;
  }

  int d = x/y;

  for(int i=0; i<n+1; i++){
    str.append(to_string(d));
    x = x - (y*d);
    x = x * 10;
    d = x/y;
    if(i==0)
      str.append(".");
  }
  return str;
}