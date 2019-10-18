/*
 * 	 use enum class mainly
 */
#include <iostream>
using namespace std;

enum class Traffic_light: int {red, yellow, green};		// sizeof() == sizeof(int)
enum class Warning: char{green, yellow, orange, red};	// sizeof() == sizeof(char)

enum class Print_flags{
		acknowledge = 1;
		paper_empty = 2;
		busy = 4;
		out_of_black = 8;
		out_of_color = 16;
};

// define operator '|' and '*'
constexpr Print_flags operator| (Print_flags a, Print_flags b){

		return static_cast<Print_flags>( static_cast<int>(a) | static_cast<int>(b) );
}

constexpr Print_flags operator& (Print_flags a, Print_flags b){

		return static_cast<Print_flags>( static_cast<int>(a) & static_cast<int>(b) );
}

