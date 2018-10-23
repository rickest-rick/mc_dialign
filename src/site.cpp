//
// Created by Joschi on 12.05.2018.
//

#include "site.h"

Site::Site(unsigned int seq, unsigned int pos)
        :sequence_(seq),
         position_(pos)
        {}

unsigned int Site::sequence() const{
    return sequence_;
}

unsigned int Site::position() const{
    return position_;
}

bool Site::operator==(const Site& rhs) const{
    return *this <= rhs && *this >= rhs;
}

bool Site::operator<=(const Site& rhs) const {
    return (sequence_ == rhs.sequence()) && (position_ <= rhs.position());
}

bool Site::operator>=(const Site& rhs) const {
    return (sequence_ == rhs.sequence()) && (position_ >= rhs.position());
}

bool Site::operator<(const Site &rhs) const {
    return (sequence_ == rhs.sequence()) && (position_ < rhs.position());
}

bool Site::operator>(const Site &rhs) const {
    return (sequence_ == rhs.sequence()) && (position_ > rhs.position());
}


