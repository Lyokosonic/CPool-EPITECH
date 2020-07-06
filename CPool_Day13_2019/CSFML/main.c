/*
** EPITECH PROJECT, 2019
** opening a window
** File description:
** opening a window
*/

#include <SFML/Graphics/RenderWindow.h>

int main()
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = 800;
    video_mode.height = 800;
    video_mode .bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode, "My Window", sfDefaultStyle, NULL);

    while (sfRenderWindow_isOpen(window))
    {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}
