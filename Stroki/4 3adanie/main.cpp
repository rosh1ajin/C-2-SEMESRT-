#include <iostream>
#include <string>

using namespace std;

int main()
{

    string ** arrayOfNames = new string * [ 5 ];

    for ( int i = 0; i < 5; i++ )
    {
        arrayOfNames[ i ] = new string;
    }

    for ( int j = 0; j < 5; j++ )
    {
        getline( cin, *(*( arrayOfNames + j ) ) );
    }



    int counter = 5;

    for ( int i = 0; i < 5; i++ )
    {
        int transposition = 0;

        for ( int j = 1; j < counter; j++ )
        {
            string * temp;

            cout << arrayOfNames[ j ]->length() << " < " << arrayOfNames[ j - 1 ]->length() << endl;
            if ( arrayOfNames[ j ]->length() < arrayOfNames[ j - 1 ]->length() )
            {
                 temp = arrayOfNames[ j ];
                 arrayOfNames[ j ] = arrayOfNames[ j - 1 ];
                 arrayOfNames[ j - 1 ] = temp;
                 transposition++;
            }
        }

        counter--;

        if ( transposition == 0 )
            i = 5;
    }



    for ( int i = 0; i < 5; i++ )
    {
        cout << *(*( arrayOfNames + i )) << ", ";
    }


    for ( int j = 0; j < 5; j++ )
        delete arrayOfNames[ j ];

    delete [] arrayOfNames;

    cout << endl;

    return 0;
}

