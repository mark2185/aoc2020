#include <cstdio>
#include <string>

int main()
{
    int first;
    int second;
    char character;
    char * str{ nullptr };
    int correctEntries{ 0 };
    while ( scanf("%d-%d %c: %s\n", &first, &second, &character, str ) != -1 )
    {
        correctEntries += ( str[ first - 1 ] == character ^ str[ second - 1 ] == character );
    }
    printf( "%d\n", correctEntries );
    return 0;
}
