//
// Created by joschi on 04.09.18.
//

//==================================
// include guard
#ifndef MC_DIALIGN_FRAGMENT_H
#define MC_DIALIGN_FRAGMENT_H

//==================================
// forward class references

//==================================
// included dependencies

//==================================


/**
 * @brief a class representing a diagonal alignment between two sequences
 *
 * Has a start point for each sequence, a length and a weight which was computed with a weight function.
 * All member variables but the weight can be accessed, but not altered.
 *
 * @author Joschka Strueber
 * @version 1.0
 */
class Fragment{
private:
    unsigned int sequence_one_;
    unsigned int sequence_two_;

    unsigned int start_point_one_;
    unsigned int start_point_two_;

    unsigned int length_;
    unsigned double weight_;

public:
    unsigned int getSequence_one_() const;

    unsigned int getSequence_two_() const;

    unsigned int getStart_point_one_() const;

    unsigned int getStart_point_two_() const;

    unsigned int getLength_() const;

    double getWeight_() const;

    void setWeight_(double weight_);

    Fragment(unsigned int sequence_one_, unsigned int sequence_two_, unsigned int start_point_one_,
             unsigned int start_point_two_, unsigned int length_);

    Fragment(unsigned int sequence_one_, unsigned int sequence_two_, unsigned int start_point_one_,
             unsigned int start_point_two_, unsigned int length_, double weight_);
};

#endif //MC_DIALIGN_FRAGMENT_H
