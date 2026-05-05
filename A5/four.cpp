#include <iostream>
using namespace std;

class SA {};
class SB : public SA {};

class MA {};
class MB {};
class MC : public MA, public MB {};

class HA {};
class HB : public HA {};
class HC : public HA {};
class HD : public HA {};

class MLA {};
class MLB : public MLA {};
class MLC : public MLB {};

class HyA {};
class HyB : virtual public HyA {};
class HyC : virtual public HyA {};
class HyD : public HyB, public HyC {};

int main() {
    SB singleInheritance;
    
    MC multipleInheritance;
    
    HB hierarchical1;
    HC hierarchical2;
    HD hierarchical3;
    
    MLC multilevelInheritance;
    
    HyD hybridInheritance;
    
    return 0;
}