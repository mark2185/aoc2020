#include <cstdio>
#include <set>

int main()
{
    int num;
    std::set< int > numbers;
    while( scanf( "%d\n", &num ) != -1 )
    {
        if ( numbers.find( 2020 - num ) != std::end( numbers ) )
        {
            printf( "%d\n", num * ( 2020 - num ) );
        }
        numbers.insert( num );
    }
    return 0;
}
