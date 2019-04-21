#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

#define MAX 10
#define pb push_back
#define all(v) v.begin(), v.end()

struct St
{
    char nm;
    int itms;
    St(char nm, int itms) : nm(nm), itms(itms) {}
};
bool acc(const St &fi, const St &se)
{
    return fi.itms > se.itms;
}
int main(int argc, const char **argv)
{
    std::vector<St> sL;
    for (int i = 0; i < MAX; i++)
    {
        int itm;
        cout << "Enter number of items bought by student " << (char)('a' + i) << ": ";
        cin >> itm;
        St st('a' + i, itm);
        sL.pb(st);
    }
    std::sort(all(sL), acc);
    cout << "This is the order how the students would be arriving to the cash counter... " << endl;
    cout << " ----------------------------------------" << endl;
    cout << " |  Name\t|  Number of Items\t|" << endl;
    cout << " ----------------------------------------" << endl;
    for (St st : sL)
    {
        cout << " |  " << st.nm << "\t\t|  " << st.itms << "\t\t\t|" <<endl;
    }
    cout << " ----------------------------------------" << endl;
    return EXIT_SUCCESS;
}