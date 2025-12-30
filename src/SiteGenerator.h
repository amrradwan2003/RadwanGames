#pragma once
#include <string>

struct Page {
    std::string title;
    std::string outputPath;
    std::string contentHtml;
};

class SiteGenerator {
public:
    void Generate(const Page& page);
    std::string LoadContent(const std::string& path);

private:
    std::string LoadFile(const std::string& path);
    void WriteFile(const std::string& path, const std::string& content);
    std::string Replace(
        std::string base,
        const std::string& key,
        const std::string& value
    );
};
