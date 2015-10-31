#include "card.h"
#include <algorithm>
#include <iostream>

card::card(suit s, rank r): suit_(s), rank_(r) {}

card::card(const card &obj) {
    rank_ = obj.rank_;
    suit_ = obj.suit_;
}

card& card::operator=(card other) {
    std::swap(rank_, other.rank_);
    std::swap(suit_, other.suit_);
    return *this;
}

std::string card::format_card_str() {
    return suit_str[suit_] + " " + rank_str[rank_-1];
};