/**
 * @file debug.hh
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains macros which help determin if we should build in
 *   "debug" mode (increasing logging verbosity)
 * @date 2020-03-24
 *
 * Assignment: Module 3 Chapter 6 Programming Assignment
 * Description: This file contains macros which help determin if we should build
 *   in "debug" mode (increasing logging verbosity)
 * Instructor: Jeffrey Hemmes
 * Course:
 *   [CSC 160] Introduction to Programming (C++)
 * Date: 24 March 2020
 */

#ifndef DEBUG_HH_INCLUDED
#  define DEBUG_HH_INCLUDED

namespace chapter6_debug {

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

#endif // !DEBUG_HH_INCLUDED
}
