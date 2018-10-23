//
// Created by joschi on 17.10.18.
//

#include "fragment.h"

Fragment::Fragment(unsigned int sequence_one_, unsigned int sequence_two_, unsigned int start_point_one_,
                   unsigned int start_point_two_, unsigned int length_) : sequence_one_(sequence_one_),
                                                                          sequence_two_(sequence_two_),
                                                                          start_point_one_(start_point_one_),
                                                                          start_point_two_(start_point_two_),
                                                                          length_(length_),
                                                                          weight_(0) {}

Fragment::Fragment(unsigned int sequence_one_, unsigned int sequence_two_, unsigned int start_point_one_,
                   unsigned int start_point_two_, unsigned int length_, double weight_) : sequence_one_(sequence_one_),
                                                                                          sequence_two_(sequence_two_),
                                                                                          start_point_one_(
                                                                                                  start_point_one_),
                                                                                          start_point_two_(
                                                                                                  start_point_two_),
                                                                                          length_(length_),
                                                                                          weight_(weight_) {}

unsigned int Fragment::sequence_one() const {
    return sequence_one_;
}

unsigned int Fragment::sequence_two() const {
    return sequence_two_;
}

unsigned int Fragment::start_point_one() const {
    return start_point_one_;
}

unsigned int Fragment::start_point_two() const {
    return start_point_two_;
}

unsigned int Fragment::length() const {
    return length_;
}

double Fragment::weight() const {
    return weight_;
}

void Fragment::set_weight(double weight_) {
    Fragment::weight_ = weight_;
}


