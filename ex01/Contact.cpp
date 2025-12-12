#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void        Contact::SetInfo(int findex, std::string value){
    if (findex >= 0 && findex <= 4)
    this->_info[findex] = value;
}

std::string Contact::GetInfo(int findex){
    if (findex >= 0 && findex <= 4)
        return (this->_info[findex]);
    return ("");
}
