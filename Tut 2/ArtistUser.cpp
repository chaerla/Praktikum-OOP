#include "ArtistUser.h"
#include <iostream>

using namespace std;

int ArtistUser::num_of_artist = 0;

ArtistUser::ArtistUser(char *name) : User(name)
{
    num_of_music_uploaded = 0;
    uploaded_music_list = new char *[5000];
    num_of_artist++;
}

ArtistUser::ArtistUser(const ArtistUser &other) : User(other)
{
    num_of_favourite_music = other.num_of_favourite_music;
    music_list = new char *[5000];
    for (int i = 0; i < other.num_of_favourite_music; i++)
    {
        music_list[i] = new char[strlen(other.music_list[i])];
        strcpy(music_list[i], other.music_list[i]);
    }
    num_of_music_uploaded = other.num_of_music_uploaded;
    uploaded_music_list = new char *[5000];
    for (int i = 0; i < other.num_of_music_uploaded; i++)
    {
        uploaded_music_list[i] = new char[strlen(other.uploaded_music_list[i])];
        strcpy(uploaded_music_list[i], other.uploaded_music_list[i]);
    }
    num_of_artist++;
}

ArtistUser::~ArtistUser()
{
    delete[] uploaded_music_list;
    cout << "Artist user " << this->name << " deleted\n";
}

void ArtistUser::uploadMusic(char *music)
{
    uploaded_music_list[num_of_music_uploaded] = new char[strlen(music)];
    strcpy(uploaded_music_list[num_of_music_uploaded], music);
    num_of_music_uploaded++;
}

void ArtistUser::deleteUploadedMusic(char *music)
{
    if (num_of_music_uploaded > 0)
    {
        for (int i = 0; i < num_of_music_uploaded; i++)
        {
            if (!(strcmp(uploaded_music_list[i], music)))
            {
                if (i != num_of_music_uploaded - 1)
                {
                    for (int j = i; j < num_of_music_uploaded; j++)
                    {
                        uploaded_music_list[i] = new char[strlen(uploaded_music_list[i + 1])];
                        strcpy(uploaded_music_list[i], uploaded_music_list[i + 1]);
                    }
                }
                num_of_music_uploaded--;
                break;
            }
        }
    }
}

void ArtistUser::viewUploadedMusicList() const
{
    if (this->num_of_music_uploaded > 0)
    {
        for (int i = 0; i < this->num_of_music_uploaded; i++)
        {
            cout << (i + 1) << ". " << this->uploaded_music_list[i] << endl;
        }
    }
    else
    {
        cout << "No music uploaded" << endl;
    }
}

int ArtistUser::getNumOfMusicUploaded() const
{
    return this->num_of_music_uploaded;
}

int ArtistUser::getNumOfArtist()
{
    return ArtistUser::num_of_artist;
}