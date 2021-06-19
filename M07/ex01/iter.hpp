template <typename T>
void iter(const T * lhs, int lenght, void (&f)(T const &hs))
{
    for (int i = 0; i < lenght; i++)
    {
        f(*lhs);
        lhs++;
    }
    
}