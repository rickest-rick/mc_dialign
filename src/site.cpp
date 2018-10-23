//
// Created by Joschi on 12.05.2018.
//

#include "site.h"

Site::Site(unsigned int seq, unsigned int pos)
        :sequence_(seq),
         position_(pos)
        {}

unsigned int Site::Sequence() const{
    return sequence_;
}
unsigned int Site::Position() const{
    return position_;
}

bool Site::operator==(const Site& rhs) const{
    return (sequence_ == rhs.Sequence()) && (position_ == rhs.Position());
}

bool Site::operator<=(const Site& rhs) const {
    return (sequence_ == rhs.Sequence()) && (position_ <= rhs.Position());
}

bool Site::operator>=(const Site& rhs) const {
    return (sequence_ == rhs.Sequence()) && (position_ >= rhs.Position());
}

bool Site::operator<(const Site &rhs) const {
    return (sequence_ == rhs.Sequence()) && (position_ < rhs.Position());
}

bool Site::operator>(const Site &rhs) const {
    return (sequence_ == rhs.Sequence()) && (position_ > rhs.Position());
}


