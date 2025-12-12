#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

// enum    Fields {
//     FirstN,
//     LastN,
//     NickN,
//     PhoneNum,
//     Secret
// };

class Contact {

private:
    std::string Info[5];

public:
    Contact(/* args */);
    ~Contact();
    void    Contact::SetInfo(int findex, std::string value);
    std::string GetInfo(int findex);
};

#endif
