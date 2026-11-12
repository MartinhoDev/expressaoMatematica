#ifndef EXPRESSIONSOLVER_HPP
#define EXPRESSIONSOLVER_HPP

//Libs && External classes
#include "Commons.hpp"

//Classes
class ExpressionSolver{
    private:
        //Atributes
        std::string expression;
        size_t index;

        //Logical methods
        void lexer();
        void syntactic();
        void semantic();

    public:
        //Getters && Setters
        std::string getExpression() const;
        size_t getIndex() const;
        void setExpression(const std::string& expression);
        void setIndex(size_t index);

        //Public methods
        void solve();
        void solve(const std::string& expression);
        void solve(const std::string& expression, size_t index);
        void reset();

        //Builders && Destructors
        ExpressionSolver(const std::string& expression, size_t index):
        expression(expression),
        index(index){}

        ExpressionSolver():
        expression(""),
        index(0){}

        ~ExpressionSolver() = default;
};

#endif