#include "SiteGenerator.h"
#include <fstream>
#include <sstream>
#include <filesystem>

std::string SiteGenerator::LoadFile(const std::string& path) {
    std::ifstream file(path);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void SiteGenerator::WriteFile(const std::string& path, const std::string& content) {
    std::filesystem::create_directories(
        std::filesystem::path(path).parent_path()
    );

    std::ofstream file(path);
    file << content;
}

std::string SiteGenerator::Replace(
    std::string base,
    const std::string& key,
    const std::string& value
) {
    size_t pos = base.find(key);
    if (pos != std::string::npos) {
        base.replace(pos, key.length(), value);
    }
    return base;
}

void SiteGenerator::Generate(const Page& page) {
    std::string html = LoadFile("templates/base.html");

    html = Replace(html, "{{TITLE}}", page.title);
    html = Replace(html, "{{CONTENT}}", page.contentHtml);

    WriteFile(page.outputPath, html);
}
