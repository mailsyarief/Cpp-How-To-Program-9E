/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.h
 *
 *    Description:  Fig. 3.11: GradeBook class definition.
 *                  This file presents GradeBook's public interface without
 *                  revealing the implementations of GradeBook's member
 *                  functions, which are defined in GradeBook.cpp
 *
 *        Version:  1.0
 *        Created:  20/03/16 19:25:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <string>

class GradeBook{
    private:
        std::string courseName;

    public:
        GradeBook(std::string);

        // SETTERS
        void setCourseName(std::string);

        // GETTERS
        std::string getCourseName();

        void displayMessage();
};
