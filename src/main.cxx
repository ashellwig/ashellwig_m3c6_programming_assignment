/**
 * @file main.cxx
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains the main function to run the program.
 * @date 2020-03-28
 *
 * Assignment: Module 3 Chapter 6 Programming Assignment
 * Description: This file contains the main function to run the program.
 * Instructor: Jeffrey Hemmes
 * Course:
 *   [CSC 160] Introduction to Programming (C++)
 * Date: 28 March 2020
 */

#include "../include/chapter6.hh" // calculateWindchill, getInputVariables
#include "../include/cxxopts/cxxopts.hpp"  // Command line arguments
#include "../include/general_functions.hh" // pauseprompt
#include <iostream>                        // cin, cout
#include <string>                          // std::string

using namespace chapter6::chapter6_debug;

/**
 * @brief Performs the steps to execute the main application.
 */
int main() {
  // Store data obtained from user either through flags/arguments or via prompt.
  int windSpeed = 0;
  int temperature = 0;

  // Prompt user for their input values and pass them by reference to the
  // varables defined above.
  chapter6::getInputVariables(windSpeed, temperature);

  // Calculate windchill factor using user-provided data.
  int windChill = chapter6::calculateWindchill(windSpeed, temperature);

  // Output calculated windchill factor
  std::cout << "Current temperature: " << temperature << "F\n";

  std::cout << "Windchill factor: " << windChill << 'F' << std::endl;

  // "Press enter to continue..."
  general_functions::pauseprompt();
  std::cin.ignore();

  // Return with exit code 0 if all goes well
  return 0;
}

// vim: set et ts=2 sw=2 ft=cpp:
