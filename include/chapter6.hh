/**
 * @file chapter6.hh
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains the prototypes required to
 * compute the data requested in the assignment.
 * @date 2020-03-28
 *
 * Assignment: Module 3 Chapter 6 Programming Assignment
 * Description: This file contains the chapter6 namespace for the assigned
 * exercise.
 * Instructor: Jeffrey Hemmes Course: [CSC 160] Introduction to
 * Programming (C++) Date: 28 March 2020
 */

#include <exception>
#include <iostream>
#include <vector>

#ifndef CHAPTER6_HH_INCLUDED
#  define CHAPTER6_HH_INCLUDED

namespace chapter6 {
void getInputVariables(int &, int &);
int calculateWindchill(int, int);

// -----------------------------------------------------------------------------
// -------------------------Begin Debug-Related Macros--------------------------
// -----------------------------------------------------------------------------

/**
 * @brief Provides exception types for additional debugging information.
 */
inline namespace exceptions {

class InputException : public std::exception {
public:
  virtual const char *what() const throw() {
    return "Cannot have first input higher than the second.";
  }
};
} // namespace exceptions

/**
 * @brief Defines macros for outputting additional debugging information.
 */
inline namespace chapter6_debug {

#  ifndef DEBUG
#    define DEBUG 0
#  else
#    define DEBUG 1
#  endif // !DEBUG

/**
 * @brief Prints the output of a function call when it is sent to stderr rather
 * than stdout. Use for debugging assistance.
 *
 */
#  define verbose_print(...)                                                   \
    do {                                                                       \
      if (DEBUG)                                                               \
        fprintf(stderr, __VA_ARGS__);                                          \
    } while (1)

} // namespace chapter6_debug
// -----------------------------------------------------------------------------
// --------------------------End Debug-Related Macros---------------------------
// -----------------------------------------------------------------------------

} // namespace chapter6

#endif // !CHAPTER6_HH_INCLUDED