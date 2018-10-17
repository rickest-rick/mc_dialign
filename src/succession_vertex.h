///
// Created by Joschi on 12.05.2018.
//

//==================================
//include guard
#ifndef MC_DIALIGN_SUCCESSION_VERTEX_H
#define MC_DIALIGN_SUCCESSION_VERTEX_H


//==================================
// forward class references

//==================================
// included dependencies
#include <unordered_map>
#include "site.h"

//==================================
/**
 * @brief A wrapper class for the vertices of a succession graph. It holds a set of sites.
 *
 * @Require each sequence can have at most one site in each Vertex.
 *
 * @author Joschka Strueber
 * @version 1.0
 */
class SuccessionVertex{
private:
    std::unordered_map<unsigned int, Site> sites; /// internal representation of the set of sites of this vertex

public:
    /**
     * Default constructor with empty set of sites.
     */
    SuccessionVertex();

    /**
     * Constructor that builds a new succession vertex for a set of sites.
     */
    SuccessionVertex(const std::unordered_map<unsigned int, Site>& sites);

    /**
     * @brief compares this SuccessionVertex with a second one for equality
     *
     * @param rhs the SuccessionVertex to compare this to.
     * @return Whether or nor they have the same set of sites.
     */
    bool operator==(const SuccessionVertex& rhs) const;

    /**
     * @brief Deletes a site from sites, if it is part of the vertex.
     *
     * @param site the site that is to be removed from the set of sites of this vertex.
     * @pre the vertex contains the site at most once
     * @post sites doesn't contain the deleted site anymore
     */
    void deleteSite(const Site& site);

    /**
     * @brief Deletes the site that belong to the given sequence number.
     *
     * @param sequence the sequence which site is to be removed from this vertex, if there exists one
     * @pre the vertex contains at most one site from this sequence
     * @post the vertex contains no sites from the sequence
     */
    void deleteSiteOfSeq(unsigned int sequence);

    /**
     * return this vertex's set of sites.
     */
    std::unordered_map<unsigned int, Site> getSites() const;
};

#endif //MC_DIALIGN_SUCCESSION_VERTEX_H
