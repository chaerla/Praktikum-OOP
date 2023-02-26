#include "User.h"
#include <iostream>

using namespace std;

int User::n_user = 0;

User::User(char *name)
{
    this->name = new char[strlen(name)];
    strcpy(this->name, name);
    music_list = new char *[5000];
    num_of_favourite_music = 0;
    n_user++;
}

User::User(const User &other)
{
    music_list = new char *[5000];
    this->name = new char[strlen(other.name)];
    strcpy(this->name, other.name);
    num_of_favourite_music = other.num_of_favourite_music;
    for (int i = 0; i < num_of_favourite_music; i++)
    {
        this->music_list[i] = new char[strlen(other.music_list[i])];
        strcpy(this->music_list[i], other.music_list[i]);
    }
    n_user++;
}

User::~User()
{
    cout << "User " << this->name << " deleted\n";
    delete[] name;
    delete[] music_list;
}

void User::addFavouriteMusic(char *music)
{
    music_list[num_of_favourite_music] = new char[strlen(music)];
    strcpy(music_list[num_of_favourite_music], music);
    num_of_favourite_music++;
}

void User::deleteFavouriteMusic(char *music)
{
    if (num_of_favourite_music > 0)
    {
        for (int i = 0; i < num_of_favourite_music; i++)
        {
            if (!(strcmp(music_list[i], music)))
            {
                if (i != num_of_favourite_music - 1)
                {
                    for (int j = i; j < num_of_favourite_music; j++)
                    {
                        music_list[i] = new char[strlen(music_list[i + 1])];
                        strcpy(music_list[i], music_list[i + 1]);
                    }
                }
                num_of_favourite_music--;
                break;
            }
        }
    }
}

void User::setName(char *newName)
{
    strcpy(this->name, newName);
}

char *User::getName() const
{
    return this->name;
}

int User::getNumOfFavouriteMusic() const
{
    return this->num_of_favourite_music;
}

void User::viewMusicList() const
{
    if (num_of_favourite_music > 0)
    {
        for (int i = 0; i < num_of_favourite_music; i++)
        {
            cout << i + 1 << ". " << music_list[i] << endl;
        }
    }
    else
    {
        cout << "No music in your favourite list" << endl;
    }
}

int User::getNumOfUser()
{
    return User::n_user;
}