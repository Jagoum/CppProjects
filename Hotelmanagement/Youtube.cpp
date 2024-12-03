#include <iostream>
#include <list>
using namespace std;
class YouTubecChannel
{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedvideoTitles;
};
int main()
{
    YouTubecChannel ytChannel;
    ytChannel.Name = "Richmond's";
    ytChannel.OwnerName = "Richmond";
    ytChannel.SubscriberCount = 1000;
    system("pause>0");

}