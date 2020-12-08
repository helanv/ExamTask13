#include <iostream>
#include<ctime>
#include<string.h>

using namespace std;

struct VideoShop {
    char FilmName[50];
    char Director[50];
    char GenreOfFilm[50];
    float RatingOfTheFilm;
    float PriceOfCd;
};

void inscriptionOfTheFilms(VideoShop description) {
    cout << "\Title\t: " << description.FilmName;
    cout << "\nProd\t: " << description.Director;
    cout << "\nGenre\t: " << description.GenreOfFilm;
    cout << "\nRating\t: " << description.RatingOfTheFilm;
    cout << "\nPrice\t: " << description.PriceOfCd << endl;
    cout << endl;
}

// Поиск по названию фильма
bool searchByName(VideoShop Film[], char user[], int length) {
    bool flag = 0;
    for (int i = 0; i < length; i++) {
        if (strstr(Film[i].FilmName, user) != NULL) 
        {
            cout << Film[i].FilmName << " ";
            flag = true;
            break;
        }
        else { flag = false; }
    }
    return flag;
}

// Поиск по жанру фильма
void searchByGenre(VideoShop Film, char user[]) {
    if (strstr(Film.Director, user) != NULL)
    {
        cout << Film.FilmName << " ";

    }
}

// Поиск по режисеру фильма
void searchByDirector(VideoShop Film, char user[]) {
    if (strstr(Film.Director, user) != NULL)
    {
        cout << Film.FilmName << " ";

    }
}

void showTheMostPopularFilm() {

}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\t\tNetflix" << endl;
    const int length = 8;

    VideoShop Netflix[length]
    {
        { "1) Avengers", "K.Feige", "fantasy", 9.5, 120 },
        { "2) Fast and furious", "V.Diesel","action", 9.2, 99.5 },
        { "3) End of time", "C.Hellsgord", "drama", 8.2, 70 },
        { "4) Angry Birds", "T.Van Orman", "cartoons", 8.5, 110 },
        { "5) No Man's Land", "M.Lyons", "action", 7.5, 74.3 },
        { "6) Scooby-Doo", "E.Spaulding", "cartoons", 9.2, 87.8 },
        { "7) Arctic Apocalypse", "J.Condelic", "fantasy", 6.3, 96 },
        { "8) The Death of **** Long", "D.Scheinert", "drama", 6.7, 100 },
    };
}


//Создать структуру ВИДЕОМАГАЗИН со следующими полями :
//▪ Название фильма
//▪ Режиссер
//▪ Жанр
//▪ Рейтинг популярности
//▪ Цена диска
//Реализовать следующие возможности :
//▪ Поиск по названию
//▪ Поиск по жанру
//▪ Поиск по режиссеру
//▪ Самый популярный фильм в жанре
//▪ Показ всех записей и добавление