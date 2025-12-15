#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void        Contact::setInfo(int findex, std::string value){
    if (findex >= 0 && findex <= 4){
        _info[findex] = value;
    }
}

std::string Contact::getInfo(int findex) const {
    if (findex >= 0 && findex <= 4){
        return (_info[findex]);
    }
    return ("");
}
