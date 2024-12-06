#include<fstream>
using namespace std;
main()
{
    fstream file;
    file.open("Example.txt" , ios::out);
    file << "This is sample text";
    file.close();
}
