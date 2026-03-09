#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void delay(int seconds){
#ifdef _WIN32
    Sleep(seconds * 1000);
#else
    sleep(seconds);
#endif
}

void play_music(){
#ifdef _WIN32
    system("start LoveLanguage.mp3");  
#elif __APPLE__
    system("afplay LoveLanguage.mp3 &"); 
#endif
}

int main(){

    play_music();

    printf("Dang tai tin nhan...\n");
    delay(2);

    printf("hom nay 14/3/2026 em chi muon noi voi chi\n");
    delay(4);

    printf("chi la nguoi duy nhat ma em muon noi chuyen, chia se, va cung nhau di den cuoi con duong\n");
    delay(4);

    printf("em chi muon noi rang.......\n");
    delay(3);

    printf("Hay cho em hen ho voi chi nhe, Anh Yeu Chi...\n");
    delay(3);

    printf("Loading...\n");
    delay(2);

    printf("Dang dich 'Anh yeu em' sang cac ngon ngu...\n\n");
    delay(2);

    const char *love[] = {
        "Vietnamese: Anh yeu em",
        "English: I love you",
        "French: Je t'aime",
        "German: Ich liebe dich",
        "Spanish: Te amo",
        "Japanese: Aishiteru",
        "Korean: Saranghae",
        "Chinese: Wo ai ni",
        "Russian: Ya lyublyu tebya",
        "Italian: Ti amo",
        "Portuguese: Eu te amo"
        "Arabic: Ana behibek",
        "Hindi: Main tumse pyaar karta hoon",
        "Turkish: Seni seviyorum",
        "Dutch: Ik hou van jou",
        "Swedish: Jag älskar dig",
        "Polish: Kocham cię",
        "Greek: S'agapo",
        "Thai: Chan rak khun",
        "Indonesian: Aku cinta kamu",
    };

    int n = sizeof(love) / sizeof(love[0]);

    for(int i=0;i<n;i++){
        printf("%s\n", love[i]);
        delay(2);
    }

    printf("\nTat ca deu co cung mot nghia...\n");
    delay(2);

    printf("\nANH YEU EM !!!\n\n");

    printf("Nhan phim bat ky de thoat...\n");
    getchar();

    return 0;
}