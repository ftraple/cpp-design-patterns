#ifndef HTML_ELEMENT_HPP
#define HTML_ELEMENT_HPP

#include <iostream>
#include <vector>
#include <sstream>

struct HtmlElement {

    std::string tag;
    std::string content;
    const size_t indentationSize{3};
    std::vector<HtmlElement> elements;

    HtmlElement() {};

    HtmlElement(const std::string& tag, const std::string& content): tag(tag), content(content) {}

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

struct HtmlBuilder {

    HtmlElement root;

    HtmlBuilder(const std::string& rootTag) {
        root.tag = rootTag;
    }

    void addChild(const std::string& childName, const std::string& content) {
       HtmlElement element{childName, content};
       root.elements.emplace_back(element);
    }

    std::string str() const {
        return root.str();
    }
};

#endif // HTML_ELEMENT_HPP
