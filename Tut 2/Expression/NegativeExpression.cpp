#include "NegativeExpression.hpp"

NegativeExpression::NegativeExpression(Expression *x):UnaryExpression(x){
}

int NegativeExpression::solve(){
    return -1 * x->solve();
}