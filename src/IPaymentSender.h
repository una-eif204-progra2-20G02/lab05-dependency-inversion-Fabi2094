//
// Created by fabiana on 16/10/2020.
//

#ifndef MY_PROJECT_NAME_IPAYMENTSENDER_H
#define MY_PROJECT_NAME_IPAYMENTSENDER_H


#include <string>

class IPaymentSender {
public:
    virtual ~IPaymentSender();

    virtual std::string sendPayment() const = 0;

};


#endif //MY_PROJECT_NAME_IPAYMENTSENDER_H
