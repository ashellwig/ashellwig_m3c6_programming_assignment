/**
 * @file general_functions.cxx
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains global function definitions used to emulate
 *   system-dependent Windows libraries.
 * @date 2020-03-24
 *
 * Assignment: Module 3 Chapter 6 Programming Assignment
 * Description: This file contains global function definitions used to emulate
 *   system-dependent Windows libraries.
 * Instructor: Jeffrey Hemmes
 * Course:
 *   [CSC 160] Introduction to Programming (C++)
 * Date: 24 March 2020
 */

#include "../include/general_functions.hh"
#include <iostream>

/**
 * @brief Prompts the user to press <RET> to continue running the program.
 *
 * @return int Exit code.
 */
void general_functions::pauseprompt() {
  std::cout << "Press enter to continue...";

  std::cin.clear();
  std::cin.sync();
  std::cin.get();
}

// vim: set et ts=2 sw=2 ft=cpp:
