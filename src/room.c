#include "../h/item.h"

typedef struct Door
{
    Item items[8];
    char *desc;
    
} Door;

typedef struct Room
{
    int id;
    
    Door doors[4];

    char *desc;

} Room;


void ROOMsetID(Room *r, int a)
{
	r->id = a;
}

int ROOMgetID(Room *r)
{
	return r->id;
}

void ROOMsetDesc(Room *r, char *d)
{
	r->desc = d;
}

char *ROOMgetDesc(Room *r)
{
	return r->desc;
}