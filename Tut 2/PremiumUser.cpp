#include "PremiumUser.h"
#include <iostream>
using namespace std;

PremiumUser::PremiumUser(char *name) : User(name)
{
    num_of_music_downloaded = 0;
    active = true;
}

PremiumUser::PremiumUser(const PremiumUser &other) : User(other.name)
{
    music_list = new char *[5000];
    num_of_favourite_music = other.num_of_favourite_music;
    for (int i = 0; i < num_of_favourite_music; i++)
    {
        this->music_list[i] = new char[strlen(other.music_list[i])];
        strcpy(this->music_list[i], other.music_list[i]);
    }
    this->num_of_music_downloaded = other.num_of_music_downloaded;
    this->active = other.active;
}

PremiumUser::~PremiumUser()
{
}

void PremiumUser::downloadMusic(char *music)
{
    if (active)
    {
        num_of_music_downloaded++;
        cout << "Music Downloaded: " << music << endl;
    }
    else
    {
        cout << "Activate premium account to download music" << endl;
    }
}

void PremiumUser::inactivatePremium()
{
    active = false;
}

void PremiumUser::activatePremium()
{
    active = true;
}

int PremiumUser::getNumOfMusicDownloaded() const
{
    return num_of_music_downloaded;
}

bool PremiumUser::getPremiumStatus() const
{
    return active;
}
