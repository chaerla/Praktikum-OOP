#include "SubstractExpression.hpp"

SubstractExpression::SubstractExpression(Expression* x, Expression*y):BinaryExpression(x,y){
}

int SubstractExpression::solve() {
    return x->solve() - y->solve();
}