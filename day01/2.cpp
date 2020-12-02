#include <cstdio>
#include <set>
#include <vector>

int main()
{
    int num;
    std::set< int > numbers;
    while( scanf( "%d\n", &num ) != -1 )
    {
        numbers.insert( num );
    }
    std::vector< int > uniqueNumbers{ std::begin( numbers ), std::end( numbers ) };
    for ( auto i{ 0U }; i < numbers.size(); ++i )
    {
        for ( auto j{ i + 1 }; j < numbers.size(); ++j )
        {
            for ( auto k{ i + 2 }; k < numbers.size(); ++k )
            {
                if
                (
                    uniqueNumbers[ i ] + uniqueNumbers[ j ] + uniqueNumbers[ k ] == 2020 )
                {
                    printf( "%d\n", uniqueNumbers[ i ] * uniqueNumbers[ j ] * uniqueNumbers[ k ] );
                }
            }
        }
    }
    return 0;
}
