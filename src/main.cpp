#include "SiteGenerator.h"

int main() {
    SiteGenerator generator;

    generator.Generate({
        "RadwanGames",
        "output/index.html",
        generator.LoadContent("content/home.txt")
    });

    generator.Generate({
        "Games — RadwanGames",
        "output/games/index.html",
        generator.LoadContent("content/games.txt")
    });

    generator.Generate({
        "Blogs — RadwanGames",
        "output/blogs/index.html",
        generator.LoadContent("content/blogs.txt")
    });

    generator.Generate({
        "Prototypes — RadwanGames",
        "output/prototypes/index.html",
        generator.LoadContent("content/prototypes.txt")
    });

    return 0;
}
