// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <string>
// Task 5.
bool name_is_even(const std::string& name)
{
  if (name.size()%2==0) return true;
  else return false;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
  if(name_one.size()> name_two.size()) return true;
  else return false;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest)
{
  if(name_one.size() > name_two.size()){the_longest = name_one; the_shortest = name_two;
    if(name_three.size() < name_two.size())the_shortest = name_three;
    if(name_three.size() > name_one.size())the_longest = name_three;
  }
  else
  {
    the_longest = name_two; the_shortest = name_one;
    if(name_three.size() > name_two.size())the_longest = name_three;
    if(name_three.size() < name_one.size())the_shortest= name_three;
  }
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n)
{
  std::string s ="";
  for(int i = m ; i < n+1 ; i++) s += word[i];
  return s;
}

// Task 9.
void add_stars(std::string& word) {
  word.insert(0, word.size(), '*');
}


// Task 10.
int count_of_a(const std::string& word) {
  int m =0, sum = 0;
  for(int i = 0; i < (int)word.size(); i++)if(word[i]=='a')m++;
  sum = (m/word.size()) *100;
  return sum;

}

// Task 11.
std::string replace_can(const std::string& new_word) {
  bool flag = true; int pos=0;
  while(flag)
  {
    pos = new_word.find("can", 0);
    if(pos!=(int)std::string::npos)flag = false;
    new_word.replace(pos, 3, "new_word");
  }
  return new_word;
}