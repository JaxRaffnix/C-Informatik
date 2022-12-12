int main()
{
    // A1
    struct point (double x, y);         // ; eingefügt
    struct point {double x, double y};
    struct point {double x, double y;};
    struct point {double x, double y} ; // ; eingefügt
    struct point {double x, y};         // richtig

    // A2
    
}