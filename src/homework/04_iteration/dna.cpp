#include "dna.h"
#include<iostream>
using std::cout; using std::string;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string dna)
{
    int i = dna.length() - 1;
    double GC_num = 0;
    while(i >= 0)
    {
        if (dna[i] == 'G' || dna[i] == 'C')
        {
            GC_num++;
        }
        i--;
    }
    return GC_num / dna.length();

}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
   int i = dna.length() - 1;
    string reverse = "";
    while(i >= 0)
    {
        reverse += dna[i];
        i--;
    }
    return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
    string compliment = "";
    int i = dna.length() - 1;
    while(i >= 0)
    {
        if(dna[i] == 'A')
        {
            compliment += 'T';
        }
        if(dna[i] == 'T')
        {
            compliment += 'A';
        }
        if(dna[i] == 'C')
        {
            compliment += 'G';
        }
        if(dna[i] == 'G')
        {
            compliment += 'C';
        }

        i--;
    }
    return compliment;
}
