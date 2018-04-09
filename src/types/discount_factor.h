#ifndef DISCOUNT_FACTOR_H_
#define DISCOUNT_FACTOR_H_
class DiscuntFactor{
    public:
        unsigned SerialDate;
        double Value;
        DiscountFactor(unsigned serialDate, double value):SerialDate(serialDate), Value(value){};

};

#endif //DISCOUNT_FACTOR_H_ 
