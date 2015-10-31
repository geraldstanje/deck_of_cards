#include "card.h"
#include "deck.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

deck_of_cards::deck_of_cards() {
    srand (time(NULL));
}

void deck_of_cards::init_cards() {
    for (unsigned int i = 0; i < number_of_suits; i++) {
        for (unsigned int j = 0; j < number_of_ranks; j++) {
            cards.push_back(card(static_cast<suit>(i), static_cast<rank>(j+1)));
        }
    }
}

void deck_of_cards::shuffle_cards() {
    unsigned int size = cards.size();

    for (unsigned int i = 0; i < size; i++) {
        unsigned int index = (unsigned int) (rand() % (size - i));

        auto it = cards.begin();
        if (it == cards.end()) {
            return;
        }

        std::advance(it, index);
        cards.push_back(*it);
        cards.erase(it);
    }
}

bool deck_of_cards::deal_card(card &top) {
    if (cards.empty()) {
        return false;
    }

    top = cards.front();
    cards.pop_front();
    return true;
}

bool deck_of_cards::return_card_to_bottom(const card &bottom) {
    if (cards.size() == MAX_NUM_CARDS) {
        return false;
    }

    cards.push_back(bottom);
    return true;
}

unsigned int deck_of_cards::size() const {
    return cards.size();
}

void deck_of_cards::show() {
    for (auto it = cards.begin(); it != cards.end(); it++) {
        std::cout << it->format_card_str() << std::endl;
    }
    std::cout << std::endl;
}