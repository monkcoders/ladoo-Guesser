#include <iostream>
#include <limits>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    char c, t;
    bool flag;
    cout << "Hey!!!" << endl
         << "How are You !!!" << endl;
    cin >> c;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Would You like to play a game?" << endl;
    cin >> c;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    this_thread::sleep_for(chrono::seconds(2));
    if (c == 'y' || c == 'Y')
    {
        flag = true;
        cout << "Let me explain you what this game is" << endl;
        this_thread::sleep_for(chrono::seconds(4));

        cout << "In this game you hav\n \ncalculation and i will guess the final answer." << endl;
        this_thread::sleep_for(chrono::seconds(5));
        cout<<"\n ";
        cout << "Funfact : You dont have to tell me the initial number of ladoos \n \n" << endl;
        this_thread::sleep_for(chrono::seconds(5));
        cout << "Let's Start \n " << endl;
        while (flag)
        {

            for (int i = 0; i < 5; i++)
            {
                cout << ".";
            }
            cout << "\n Think of a number of ladoos..." << endl;
            this_thread::sleep_for(chrono::seconds(10));
            cout << "Now take same number of ladoos from your bestfriend " << endl;
            this_thread::sleep_for(chrono::seconds(10));
            int a = random() % 100;
            cout << "Add " << a << " ladoos from my side ◕‿↼)" << endl;
            this_thread::sleep_for(chrono::seconds(10));
            cout << "We got many ladoos. Dont you think we must share them? " << endl;
            this_thread::sleep_for(chrono::seconds(5));
            cout << "Give half of the ladoos to your loved ones." << endl;
            this_thread::sleep_for(chrono::seconds(15));
            cout << "It is good gesture to return people their things. " << endl;
            this_thread::sleep_for(chrono::seconds(7));
            cout << "Return back all the ladoos you took from your bestfriend" << endl;
            this_thread::sleep_for(chrono::seconds(15));
            cout << "Let me guess how many ladoos are left with you...." << endl;
            this_thread::sleep_for(chrono::seconds(3));
            cout << "Ummmmm......" << endl;
            this_thread::sleep_for(chrono::seconds(9));
            for (int i = 0; i < 20; i++)
            {
                // do nothing
            }
            cout << "You are left with " << float(a) / 2 << " Ladoos!!!";
            this_thread::sleep_for(chrono::seconds(10));
            cout << "Am i right?" << endl;
            cin >> c;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            this_thread::sleep_for(chrono::seconds(2));
            if (c == 'Y' || c == 'y')
            {

                cout << "Would you like to challenge me again?" << endl;
                cin >> c;
                if (c == 'Y' || c == 'y')
                {
                    flag = true;
                }
                else{
                    flag = false;
                    cout<<"Thanks for using "<<endl;
                    cout<<"Created with love by Abhishek Sharma";
                }
            }
            else
            {

                cout << "Thats never possible, I am confident on myself.\n You may have made some mistake." << endl;
            }
            this_thread::sleep_for(chrono::seconds(5));
        }
    }
    return 0;
}