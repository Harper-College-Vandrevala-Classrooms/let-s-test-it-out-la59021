#include <string>
using namespace std;

string fizzBuzz(int i) {
    string reply = "";
    if (i % 3 == 0) {
        reply += "Fizz";
    }
    if (i % 5 == 0) {
        reply += "Buzz";
    }
    if (reply == "") {
        reply = to_string(i);
    }
    return reply;
}