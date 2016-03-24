/*
 * =====================================================================================
 *
 *       Filename:  Invoice.h
 *
 *    Description:  Exercise 3.13 - Invoice Class
 *
 *        Version:  1.0
 *        Created:  21/03/16 02:08:29
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

class Invoice{
    private:
        std::string partNumber;
        std::string partDescription;

        int itemQuantity;
        int pricePerItem;

    public:
        Invoice(std::string, std::string, int, int);

        // SETTERS
        void setPartNumber(std::string);
        void setPartDescription(std::string);
        void setItemQuantity(int);
        void setPricePerItem(int);

        // GETTERS
        std::string getPartNumber();
        std::string getPartDescription();
        int getItemQuantity();
        int getPricePerItem();

        int getInvoiceAmount();
};
