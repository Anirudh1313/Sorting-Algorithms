#ifndef DATA_H_
#define DATA_H_

#include <iostream>
using namespace std;

/**
 * The class for the data elements that will be sorted.
 */
class Element
{
public:
    Element();
    Element(long val);
    Element(const Element& other);
    virtual ~Element();

    static long get_constructor_count();
    static long get_copy_count();
    static long get_destructor_count();
    static void reset();

    bool operator >(const Element& other) const;
    bool operator <(const Element& other);
    bool operator ==(const Element& other);

    friend ostream& operator <<(ostream& outs, const Element& elt);

    long get_value() const;

    static long constructor_count;
    static long copy_count;
    static long destructor_count;

    /***** Complete this class. *****/

private:
    long value;

};

#endif /* DATA_H_ */
