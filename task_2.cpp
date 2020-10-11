// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {int sum =0;
  for(int i=0; i < input.size(); i++) sum+=input[i];
  return sum;
}
int square_sum(const std::vector<int>& input) { int sum=0;
  for(int i=0; i < input.size(); i++)sum+=pow(input[i], 2);
  return sum;
}
int sum_six(const std::vector<int>& input) {in t sum = 0;
  for(int i=0; i < 6; i++) sum+=input[i];
  return sum;
}
int sum_k(const std::vector<int>& input, int k1, int k2) { int sum=0;
  for(int i=k1; i < k2+1; i++) sumK+= input[i];
  return sum;
}
int mean(const std::vector<int>& input) {
return sum(&input)/input.size();
}
int mean_k(const std::vector<int>& input, int s1, int s2) { int sum = 0,s = 0;
  for(int i=s1; i < s2+1; i++) {sum+=input[i]; s++;}
  return sum/=s;
}
