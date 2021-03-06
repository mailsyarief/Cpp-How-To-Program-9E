/*
 * =====================================================================================
 *
 *       Filename:  TwoDayPackage.cpp
 *
 *    Description:  Exercise 12.9: Package Inheritance Hierarchy
 *
 *        Version:  1.0
 *        Created:  19/07/16 18:04:13
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "TwoDayPackage.h"

#include <stdexcept>

TwoDayPackage::TwoDayPackage(const Person& snd, const Person& rcp, double wgt,
                             double cpo, double fee)
    : Package(snd, rcp, wgt, cpo) {
    setFee(fee);

    Package::setPackageType("Two Day Package");
}
// setters
void TwoDayPackage::setFee(double fee) {
    if (fee >= 0.0f) {
        flatFee = fee;
    } else {
        throw std::invalid_argument("Flat fee must be >= 0.0f");
    }
}
// print details
void TwoDayPackage::printDetails() {
    Package::printDetails();

    std::cout << "\n\nTotal Cost: " << calculateCost();
}
