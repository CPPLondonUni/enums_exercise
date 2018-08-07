
#include "drawing.hpp"

#include <iostream>

text_element::text_element(const std::string& text)
    : text_(text)
{}

void text_element::set_text(const std::string& new_text)
{
    text_ = new_text;
}

void text_element::set_colour(int red, int green, int blue)
{
    red_ = red;
    green_ = green;
    blue_ = blue;
}

void text_element::draw() const
{
    std::cout << "Drew text \"" << text_ << "\" with colour ("
              << red_<< ',' << green_ << ',' << blue_ << ")";
}