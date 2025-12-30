#include "SiteGenerator.h"

int main() {
    SiteGenerator generator;

    generator.Generate({
        "RadwanGames",
        "output/index.html",
        "<h1>RadwanGames</h1>"
        "<p>Game design, systems, and playable prototypes.</p>"
    });

    generator.Generate({
        "Games — RadwanGames",
        "output/games/index.html",
        "<h1>Games</h1>"
        "<p>Released and playable projects.</p>"
    });

    generator.Generate({
        "Blogs — RadwanGames",
        "output/blogs/index.html",
        "<h1>Blogs</h1>"
        "<p>Design breakdowns and dev thoughts.</p>"
    });

    generator.Generate({
        "Prototypes — RadwanGames",
        "output/prototypes/index.html",
        "<h1>Prototypes</h1>"
        "<p>Experimental mechanics and WIP ideas.</p>"
    });

    return 0;
}
