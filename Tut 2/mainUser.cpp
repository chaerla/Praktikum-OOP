#include "User.h"
#include "PremiumUser.h"
#include <iostream>

using namespace std;

int main()
{
    char name[] = "Rachel";
    char music[] = "As It Was - Harry Styles";
    char music2[] = "Sepatu - Tulus";
    char music3[] = "Nala - Tulus";
    char name2[] = "BOSFDS";
    char name3[] = "Rachelll";
    User a(name);
    a.viewMusicList();
    a.addFavouriteMusic(music);
    a.viewMusicList();
    a.addFavouriteMusic(music2);
    a.viewMusicList();
    a.addFavouriteMusic(music3);
    a.viewMusicList();
    a.deleteFavouriteMusic(music2);
    a.viewMusicList();
    // cout << "after" << endl;
    // a.viewMusicList();
    // User b(a);
    // b.setName(name2);
    // cout << b.getName() << endl;
    // cout << b.getNumOfFavouriteMusic() << endl;
    // b.viewMusicList();
    // PremiumUser premUser(name3);
    // premUser.addFavouriteMusic(music);
    // premUser.addFavouriteMusic(music2);
}