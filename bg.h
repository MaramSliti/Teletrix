#ifndef BACKGROUND_H_
#define BACKGROUND_H_
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#define SCREEN_W 1366
#define SCREEN_H 678


typedef struct
{
	SDL_Surface *imgback;
	SDL_Rect posback;
	SDL_Rect camera;
	Mix_Music *son;
}background;

typedef struct
{
  	SDL_Surface *image_p;
  	SDL_Rect pos_perso;
}pers;


SDL_Color getpixel(SDL_Surface *psurface,int x,int y);
void initBack (background *b);
void afficheBack (background b,SDL_Surface *ecran);
void scrolling (background *b,int direction);
int collisionparfaite(SDL_Surface *psurface,pers p);
void collision(SDL_Surface *psurface,pers *p);
void initialiserperso(pers *p);
void deplacer_perso(pers *p,SDL_Event event);
void afficher_perso(SDL_Surface *screen,pers p);
void free_perso(pers p);

#endif
