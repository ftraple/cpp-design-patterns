#ifndef FLUENT_HTML_ELEMENT_HPP
#define FLUENT_HTML_ELEMENT_HPP

#include <string>
#include <vector>
#include <sstream>
#include <memory>

struct FluentHtmlBuilder;

struct FluentHtmlElement {

    std::string tag;
    std::string content;
    const size_t indentationSize{3};
    std::vector<FluentHtmlElement> elements;

    FluentHtmlElement() {};

    FluentHtmlElement(const std::string& tag, const std::string& content): tag(tag), content(content) {}

    std::string str(int indentation = 0) const {
        std::ostringstream str;
        std::string identationStr(indentationSize*indentation, ' ');
        str << identationStr << "<" << tag << ">" << std::endl;
        if (content.size() > 0) {
            str << std::string(indentationSize*(indentation+1), ' ') << content << std::endl;
        }
        for (const auto& element: elements) {
            str << element.str(indentation+1);
        }
        str << identationStr << "</" << tag << ">" << std::endl;
        return str.str();
    }
};

struct FluentHtmlBuilder {

    FluentHtmlElement root;

    FluentHtmlBuilder(const std::string& rootTag) {
        root.tag = rootTag;
    }

    FluentHtmlBuilder& addChild(const std::string& childName, const std::string& content) {
       root.elements.emplace_back(FluentHtmlElement{childName, content});
       return *this;
    }

    std::string str() const {
        return root.str();
    }

    operator FluentHtmlElement() const {
        return root;
    }
};

#endif // FLUENT_HTML_ELEMENT_HPP
