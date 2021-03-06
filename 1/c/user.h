#ifndef INC_1_USER_H
#define INC_1_USER_H

#include <pthread.h>
#include "client.h"

struct user{
    char *name;
    char *password;
    struct game *game;
    int hand[32];
    int handPos;
    int active;
    int justCame;
    int leaving;
    struct client* Client;

    int logged;
    int hasEnough;
};

struct user* createUser(char *name, char *password, struct client* Client);

int resetUser(struct user* User);

void userEnough(struct user* User);

int isUserOver(struct user* User);

void dropUserHand(struct user* User);

int drawUserCard(struct user* User);

int getUserHandValue(struct user* User);

int getCardValue(int cardId);



#endif
