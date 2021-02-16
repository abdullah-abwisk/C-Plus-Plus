#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <vector <int>> movie_ratings 
    {
        {1, 2, 3, 4},
        {1, 3, 4, 2},
        {4, 3, 2, 1}
    };
    cout << movie_ratings[0][3] << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    return 0;
}