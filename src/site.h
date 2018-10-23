//
// Created by Joschi on 12.05.2018.
//

//==================================
// include guard
#ifndef MC_DIALIGN_SITE_H
#define MC_DIALIGN_SITE_H

//==================================
// forward class references

//==================================
// included dependencies

//==================================
/**
 * @brief A wrapper class representing the sites of the sitespace of a set of sequences.
 *
 * @author Joschka Strueber
 * @version 1.0
 */
class Site{
private:
    unsigned int sequence_; // the sequence this site belongs to
    unsigned int position_; // the position of this site in its sequence

public:
    /**
     * @param seq site's sequence
     * @param pos site's position inside the sequence
     */
    Site(unsigned int seq, unsigned int pos);

    /**
     * @return the site's sequence
     */
    unsigned int Sequence() const;

    /**
     * @return the site's position inside its sequence
     */
    unsigned int Position() const;

    /**
     * Operator to compare two sites for equality. Checks if sequence and position are the same.
     *
     * @param rhs the site this current site is compared to
     * @return if the two sites equal each other
     */
    bool operator==(const Site& rhs) const;

    /**
     * @brief Operator to decide if the current site is smaller than or equal to the one it is compared to.
     *
     * This comparison is based on the partial order of the set of sites. This method returns true if and only if both
     * sites belong to the same sequence and the current site's pos is less or equal than rhs's. If they are from
     * different sequences or rhs has a smaller pos, this function returns false.
     *
     * @param rhs the site this one is compared to
     * @return if this site is smaller than or equal to rhs based on the partial order on the set of sites
     */
     bool operator<=(const Site& rhs) const;

    /**
     * @brief Operator to decide if the current site is larger than or equal to the one it is compared to.
     *
     * This comparison is based on the partial order of the set of sites. This method returns true if and only if both
     * sites belong to the same sequence and the current site's pos is larger or equal than rhs's. If they are from
     * different sequences or rhs has a larger pos, this function returns false.
     *
     * @param rhs the site this one is compared to
     * @return if this site is larger than or equal to rhs based on the partial order on the set of sites
     */
     bool operator>=(const Site& rhs) const;

    /**
     * @brief Operator to decide if the current site is larger than the one it is compared to.
     *
     * This comparison is based on the partial order of the set of sites. This method returns true if and only if both
     * sites belong to the same sequence and the current site's pos is larger than rhs's. If they are from
     * different sequences or rhs has a larger pos, this function returns false.
     *
     * @param rhs the site this one is compared to
     * @return if this site is larger than rhs based on the partial order on the set of sites
     */
    bool operator>(const Site& rhs) const;


    /**
     * @brief Operator to decide if the current site is smaller than the one it is compared to.
     *
     * This comparison is based on the partial order of the set of sites. This method returns true if and only if both
     * sites belong to the same sequence and the current site's pos is smaller than rhs's. If they are from
     * different sequences or rhs has a smaller pos, this function returns false.
     *
     * @param rhs the site this one is compared to
     * @return if this site is smaller than rhs based on the partial order on the set of sites
     */
    bool operator<(const Site& rhs) const;
};

#endif //MC_DIALIGN_SITE_H
