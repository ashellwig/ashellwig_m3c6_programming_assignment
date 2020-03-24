/**
 * @file chapter6.hh
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains the prototypes required to
 * compute the data requested in the assignment.
 * @date 2020-03-24
 *
 * Assignment: Module 3 Chapter 6 Programming Assignment
 * Description: This file contains the chapter6 namespace for the assigned
 * exercise.
 * Instructor: Jeffrey Hemmes Course: [CSC 160] Introduction to
 * Programming (C++) Date: 24 March 2020
 */

#include <exception>
#include <iostream>
#include <vector>

#ifndef CHAPTER6_HH_INCLUDED
#  define CHAPTER6_HH_INCLUDED

namespace chapter6 {
class InputException : public std::exception {
public:
  virtual const char *what() const throw() {
    return "Cannot have first input higher than the second.";
  }
};
} // namespace chapter6

#endif // !CHAPTER6_HH_INCLUDED