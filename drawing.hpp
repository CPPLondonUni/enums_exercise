
#ifndef CPP_LONDON_UNI_DRAWING_HPP
#define CPP_LONDON_UNI_DRAWING_HPP

#include <string>

struct text_element {
    explicit text_element(const std::string& text);

    void draw() const;

    void set_text(const std::string& new_text);

    void set_colour(int red, int green, int blue);

    std::string text_;
    int red_ = 0;
    int green_ = 0;
    int blue_ = 0;
};

#endif
