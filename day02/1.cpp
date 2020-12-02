#include <cstdio>
#include <string>

int main()
{
    int lower;
    int upper;
    char character;
    char * str{ nullptr };
    int correctEntries{ 0 };
    while ( scanf("%d-%d %c: %s\n", &lower, &upper, &character, str ) != -1 )
    {
        int cnt{ 0 };
        for ( int i{ 0 }; str[ i ];  ++i )
        {
            cnt += ( str[ i ] == character ) ? 1 : 0;
        }
        if ( lower <= cnt && cnt <= upper )
        {
            correctEntries++;
        }
    }
    printf( "%d\n", correctEntries );
    return 0;
}
