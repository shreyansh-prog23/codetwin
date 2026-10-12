#pragma once
#include <string>

// Removes // and /* */ comments from C++ source.
// Comment markers inside "..." and '...' are left alone.
std::string removeComments(const std::string& src);
