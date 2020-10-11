// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>


// Task 1.
void multi_2(std::vector<int>& input) {
  for (int i = 0; i < (int)input.size(); i++) {
    input[i]*=2;
}

void reduce_a(std::vector<int>& input, int a) {
  for (int i = 0; i< (int)input.size(); i++) {
    input[i]-=a;
  }
}

void div_on_first(std::vector<int>& input) {
  for (int i = 0; i< (int)input.size(); i++) {
    input[i]/=input[0];
  }
}
