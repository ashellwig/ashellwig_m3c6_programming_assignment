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
#include "../include/general_functions.hh" // pauseprompt
#include <iostream>                        // cin, cout

/**
 * @brief Performs the steps to execute the main application.
 */
int main() {
  int windSpeed;
  int temperature;

  chapter6::getInputVariables(windSpeed, temperature);

  int windChill = chapter6::calculateWindchill(windSpeed, temperature);

  std::cout << "Current temperature: " << temperature << "F\n";

  std::cout << "Windchill factor: " << windChill << 'F' << std::endl;

  // "Press enter to continue..."
  general_functions::pauseprompt();
  std::cin.ignore();

  // Return with exit code 0 if all goes well
  return 0;
}

// vim: set et ts=2 sw=2 ft=cpp:
