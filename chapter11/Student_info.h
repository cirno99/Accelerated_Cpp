#ifndef GUARD_Student_info
#define GUARD_Student_info

// `Student_info.h' header file
#include "Vec.h"
#include <iostream>
#include <string>

struct Student_info {
  std::string name;
  double midterm, final;
  Vec<double> homework;
};

bool compare(const Student_info &, const Student_info &);
std::istream &read(std::istream &, Student_info &);
std::istream &read_hw(std::istream &, Vec<double> &);
#endif
