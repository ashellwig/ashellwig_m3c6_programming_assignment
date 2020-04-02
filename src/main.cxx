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
int main(int argc, char *argv[]) {
  // Create commandline argument index for `cxxopts`
  cxxopts::Options options("Chapter 6 Programming Assignment",
                           "Calculates windchill factor with given temperature "
                           "(fahrenheit) and wind speed (mph)");

  // Store data obtained from user either through flags/arguments or via prompt.
  int windSpeed = 0;
  int temperature = 0;

  // Set options
  options.add_options()("s,speed", "Wind Speed",
                        cxxopts::value<int>(windSpeed))(
      "t,temp", "Temperature", cxxopts::value<int>(temperature))(
      "i,interactive", "Prompt for Input Values",
      cxxopts::value<bool>()->default_value("true"));
  // Parse commandline arguments
  auto cmdline = options.parse(argc, argv);

  switch (cmdline.count("interactive")) {
    case 0:
      chapter6::getInputVariables(windSpeed, temperature);
      break;
    case 1:
      break;
    default:
      chapter6::getInputVariables(windSpeed, temperature);
      break;
  }
  switch (cmdline.count("i")) {
    case 0:
      chapter6::getInputVariables(windSpeed, temperature);
      break;
    case 1:
      break;
    default:
      chapter6::getInputVariables(windSpeed, temperature);
      break;
  }

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
