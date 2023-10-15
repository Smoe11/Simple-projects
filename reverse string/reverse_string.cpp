#include<iostream>
#include<string>
using std::cin, std::cout;

int getLength(std::string word);
std::string reverse(std::string word, int length);

int main(){
    std::string word;
    int length;
    cout<<"Enter a word you want to reverse: ";
    std::getline(cin, word);

    length=getLength(word)-1;   //array index starts with 0 so total length needs to be reduced by 1

    cout<<"Your word in reverse is: "<<reverse(word, length)<<"\n";
}

int getLength(std::string word){
    int length=0;
    while(word[length]!='\0'){      //check if the string ended
        length++;
    }
    return length;
}

std::string reverse(std::string word, int length){
    char temp;
    int cdown = length;     //reverse index
    for (int i = 0; i < length/2; i++)
    {
        temp = word[i];     //put indexed letter into a temporary variable
        word[i]=word[cdown];    //put reverse indexed letter in place of indexed
        word[cdown]=temp;   //put indexed letter in place of reverse indexed
        cdown--;    //lower reverse index by 1
    }
    return word;
}