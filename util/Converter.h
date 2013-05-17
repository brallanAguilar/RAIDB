#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <QString>
#include <QDebug>
#include <bitset>
#include <string>

using namespace std;

class Converter{

public:
    Converter();
    ~Converter();

    void string2Binary( string pStringLetters );        // conversion de string a binario
    void binary2String2( QString pBinaryString );
    void decimal2Binary( std::string pDecimalNumber );  // conversion de decimal a binario
    void binary2Decimal( string pBinaryString );

private:


};

#endif // CONVERTER_H