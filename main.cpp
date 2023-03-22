#include <iostream>

int main()
{
    bool a{true};
    bool b{false};
    bool c{true};

    std::cout << std::boolalpha;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    // And : Evaluates to true when all  operands are tre
    // a single drag false operands will drag
    // the entire expression tree

    std::cout << std::endl;
    std::cout << "Basic And operations" << std::endl;
    std::cout << "a && b : " << (a && b) << std::endl;
    std::cout << "a && c : " << (a && c) << std::endl;
    std::cout << " a && b && c : " << (a && b && c) << std::endl;

    // Or : Evaluates to true when al least one operand true.
    // A single true  operand will push
    // the entire expression to evaluating true
    std::cout << std::endl;
    std::cout << "Basic Or operations" << std::endl;
    std::cout << "a || b : " << (a || b) << std::endl;
    std::cout << "a || c : " << (a || c) << std::endl;
    std::cout << " a || b || c : " << (a || b || c) << std::endl;

    // Not : Negates what ever operand you put it with
    std::cout << std::endl;
    std::cout << "Basic Not operations" << std::endl;

    std::cout << "!a : " << !a << std::endl;
    std::cout << "!b : " << !b << std::endl;
    std::cout << "!c : " << !c << std::endl;

    std::cout << "******************" << std::endl;
    std::cout << "!(a &&b) ||c : " << (!(a && b) || c) << std::endl;

    std::cout << "******************" << std::endl;
    int d{45};
    int e{20};
    int f{11};

    std::cout << std::endl;
    std::cout << "Relational and logic opeartions in integers : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;

    std::cout << std::endl;
    std::cout<<std::boolalpha; 
    std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl;
    std::cout << "(d == e ) || (e == f) : " << ((d == e) || (e == f)) << std::endl;
    std::cout << "(d < e ) || (d >f) : " << ((d < e) || (d > f)) << std::endl;
    std::cout << "(f> e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
    std::cout << "(d > f) &&  (f<= d) : " << ((d > f) && (f <= d)) << std::endl;
    std::cout << "(d > e) && (d <= f)  : " << ((d > e) && (d <= f)) << std::endl;
    std::cout << "(!a) &&   (d==e) : " << ((!a) && (d == e)) << std::endl;
    std::cout << "(!a) &&   (d==e) : " << ((!a) && (d == e)) << std::endl;
}