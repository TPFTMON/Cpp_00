#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

private:
    std::string _info[5];

public:
    Contact();
    ~Contact();
    void        setInfo(int findex, std::string value);
    std::string getInfo(int findex) const;
};

// enum    Fields {
//     FirstN,
//     LastN,
//     NickN,
//     PhoneNum,
//     Secret
// };

#endif
