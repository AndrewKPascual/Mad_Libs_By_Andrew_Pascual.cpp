#include <iostream>
#include <string>

int main()
{
    // This gets the "replace words" and assigns them the variables the user enters.
    std::cout << "Give me a name: ";
    std::string nam;
    std::cin >> nam;
    std::cout << "Give me a proper name of a monster or why random number is 4 in one word: ";
    std::string noun;
    std::cin >> noun;
    std::cout << "Give me an adjective: ";
    std::string adj;
    std::cin >> adj;
    std::cout << "Give me a place: ";
    std::string place;
    std::cin >> place;
    std::cout << "Give me an item: ";
    std::string thing;
    std::cin >> thing;
    std::cout << "Give me an adjective like " << adj << " again: ";
    std::string adj2;
    std::cin >> adj2;
    std::cout << "Give me a C++ command with no extra stuff that breaks it please: ";
    std::string com;
    std::cin >> com;
    std::cout << "Give me a C++ command again, I hope you didn't break it: ";
    std::string com2;
    std::cin >> com2;
    std::cout << "Give me a low number:";
    std::string num;
    std::cin >> num;
    std::cout << "Give me the full writings of William Shakespear or a way to say thank you: ";
    std::string tan;
    std::cin >> tan;
    // This Tells the story that I created.
    std::cout << "A grand coding adventure awaits for, " << nam << "! Their workspace will be that of the " << place << ". It is dangerous to go alone, they will take this, a " << adj2 << " " << thing << " on their trip." << "\n";
    std::cout << "I am sure nothing bad will happen like a " << adj << " " << noun << " coming to squash them. If they do encounter the monster, " << adj << " " << noun << " on their trip, you can save them by learning 'C++' and using commands. " << "\n";
    std::cout << "You can also hope that bringing the " << adj2 << " " << thing <<" will save them instead however, will the " << adj2 << " " << thing << " really beat a monster such as the " << adj << " " << noun <<". You have the power to stop it with " << "\n";
    std::cout << "commands like " << com << " or " << com2 << " are sure to help" << ". I am sure you gave yourself a lot of tries with that number " << num << ". " << tan << " for reading!" << "\n";
}