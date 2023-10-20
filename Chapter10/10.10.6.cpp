#include <iostream>

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);   // sets x, y to a, b
    void showmove() const;              // shows current x, y values
    Move add(const Move & m) const;
    // this function adds x of m to x of invoking object to get new x,
    // adds y of m to y of invoking object to get new y, creates a new
    // move object initialized to new x, y values and returns it
    void reset(double a = 0, double b = 0);  // resets x,y to a, b
};

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x = " << x << ", y = " << y << std::endl;
}

Move Move::add(const Move & m) const
{
    Move newMove;
    newMove.x = x + m.x;
    newMove.y = y + m.y;
    return newMove;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}

int main()
{
    Move move1(1, 2);
    Move move2(3, 4);
    Move move3;
    move3 = move1.add(move2);
    move3.showmove();
    move3.reset();
    move3.showmove();
    return 0;
}