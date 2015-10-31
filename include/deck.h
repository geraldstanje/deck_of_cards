#ifndef deck_h
#define deck_h

#include "card.h"
#include <list>

class deck_of_cards {
  private:
    std::list<card> cards;

  public:
    deck_of_cards();
    void init_cards();
    void shuffle_cards();
    bool deal_card(card &top);
    bool return_card_to_bottom(const card &bottom);
    unsigned int size() const;
    void show();
};

#endif