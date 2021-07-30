#ifndef RETWEETCOLLECTION_H
#define RETWEETCOLLECTION_H

class RetweetCollection
{
public:
    bool isEmpty() const {
        return 0 == size();
    }

    unsigned int size() const {
        return 0;
    }
};

#endif  //RETWEETCOLLECTION_H