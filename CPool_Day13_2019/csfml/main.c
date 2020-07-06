/*
** EPITECH PROJECT, 2019
** opening a window
** File description:
** opening a window
*/

#include <SFML/Graphics/RenderWindow.h>

int pixelarray(void)
{
    int width;
    int height;
    int bitsPerPixel;

    sfUint8 *pixels;

    video_mode.width = 800;
    video_mode.height = 800;
    video_mode .bitsPerPixel = 32;

    pixels = malloc(width * height * bitsPerPixel / 8);

    pixels[0] = 255;
    pixels[1] = 125;
    pixels[2] = 0;
    pixels[3] = 255;
}

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    pixelarray(void);
    window = sfRenderWindow_create(video_mode,
                                   "My Window",
                                   sfDefaultStyle,
                                   NULL);
    
    while (sfRenderWindow_isOpen(window))
    {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}
