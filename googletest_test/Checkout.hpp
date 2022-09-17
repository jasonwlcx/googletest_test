//
//  Checkout.hpp
//  googletest_test
//
//  Created by Jason Wilcox on 9/17/22.
//

#ifndef Checkout_hpp
#define Checkout_hpp

#include <stdio.h>
#include <string>

class Checkout{
    
public:
    Checkout();
    virtual ~Checkout() {};
    void function();
    void addItemPrice(std::string item, int price);
    void addItem(std::string item);
protected:
    
private:
    
};

#endif /* Checkout_hpp */
