//
// Created by Joschi on 12.05.2018.
//

#include "succession_vertex.h"

SuccessionVertex::SuccessionVertex()
        : sites()
{}

SuccessionVertex::SuccessionVertex(const std::unordered_map<unsigned int, Site>& sites)
        : sites(sites)
{}

bool SuccessionVertex::operator==(const SuccessionVertex& rhs) const{
    return sites==rhs.getSites();
}

void SuccessionVertex::deleteSite(const Site& site){
    /// check if the searched site is part of sites
    auto foundSiteIt = sites.find(site.getSequence());
    if (foundSiteIt != sites.end()){
        Site foundSite = foundSiteIt->second;
        /// erase it, if an equal site was found
        if (foundSite == site){
            sites.erase(site.getSequence());
        }
    }
}

void SuccessionVertex::deleteSiteOfSeq(unsigned int sequence){
    sites.erase(sequence);
}

std::unordered_map<unsigned int, Site> SuccessionVertex::getSites() const{
    return sites;
}