#include <iostream>

#include "HtmlElement.hpp"
#include "FluentHtmlElement.hpp"
#include "GroovyBuilder.hpp"
         
int main() {

    std::cout <<  "Builder Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    HtmlBuilder builder{"ul"};
    builder.addChild("li", "Hello");
    builder.addChild("li", "world");
    std::cout << builder.str();

    std::cout << '\n';
    std::cout <<  "Fluent Builder Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    FluentHtmlBuilder fluentBuilder{"ul"};
    fluentBuilder.addChild("li", "Hello").addChild("li", "world");
    std::cout << fluentBuilder.str();

    std::cout << '\n';
    std::cout <<  "Groovy-Style Builder Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    using namespace html;
    std::cout <<
        P{
            IMG{"http://linkfor.com/myimage.png"}
        }
    << std::endl;


    return EXIT_SUCCESS;
}
