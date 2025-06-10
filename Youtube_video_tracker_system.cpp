#include <iostream>
//constructor = default values you want a var to have

using namespace std;

class Video {
private:
    string title;
    string uploader;
    int views;
    int likes;
    string status;

public:
    //checking status
    void checkStatus()
    {
    if (views > 1000000)
        status = "Trending";
    else
        status = "Regular";
    }

    //receiving input from user
    void UserInput(string t, string u, int v, int l, string s) //refresh on "this" operator
    {
        title = t;
        uploader = u;
        views = v;
        likes = l;
        status = s;  //validation?
    }

    //display a formatted summary of the video
    void display()
    {
        cout << "Video title: " << title << endl;
        cout << "Video uploader: " << uploader << endl;
        cout << "Views: " << views << endl;
        cout << "Likes: " << likes << endl;
        cout << "Video status: " << status << endl;
    }
};

int main()
{

    return 0;
}
