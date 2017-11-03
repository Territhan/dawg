//Programmers: Terry Rorie, Jonah Marz
//Date 10/30/2017
//Class 1570 Section c 
//File: homework8.h 
//Purpose: The header file for homework 8
//Instructor: San Yueng

#include<iostream>
#include<fstream>
#include<string>


#ifndef HOMEWORK8_H
#define HOMEWORK8_H

//Global constants//
const int MAX_WORD = 20;//This is the max amount of characters a word can be 
const int MAX_SENTENCE = 500;//Max amount of characters in a sentence 
const string FILE_NAME = "encrypted.dat"; //This is the name of the input file
const string OUTPUT_FILE = "decrypted.dat";//This is the name of the output 
const int MAX_AMT_WORDS = 35; //This is MAX_SENTENCE/MAX_WORD+10 for jibberish
const string Jibberish1 = "umm"; //This is randomly inserted 
const string Jibberish2 = "errr"; //This is randomly inserted 
const string Jibberish3 = "like"; //This is randomly insterted
const string Jibberish4 = "nstuff"; //This is randomly inserted 
//Structs//

//Templates// 

//Function Prototypes//

//Desc: greets the user
//Pre: none
//Post: Prints a greeting message on screen.
void greeting();

//Desc: Decrypts the sentence passed in 
//Pre: The sentence being passed in for decryption and it's even/odd status
//Post: --This will combine all of the decryption to one function--
string decrypt_sentence(const string sentence,place);

//Desc: reads the file.
//Pre: string object
//Post: Returns the file. 
string Read_in_File(string & File);

//Desc: changes replace to replace_too  
/*Pre: the string variable that the sentence is being kept in,
replace(the word you wish to replace),replace too(the word you wish to change
it too)*/
//Post: chagnes all instances of replace to replace_too 
void Replace_Words(string&word,const string replace,const string replace_too);

//Desc: Un pair-wise swaps the words in odd sentences
//Pre: The string variable for the sentence
//Post: swaps the words back into the position they are supposed to be in.
void Un_Swap_Odd(char sentence[][][]);

//Desc: counts the amount of words in a sentence 
//Pre:  the const string of the sentence you wish to count
//Post: returns the number of words in a sentence
int sentence_word_count(const string sentence);

//Desc: counts the total amount of sentences
//Pre: the entire Data set being read in 
//Post: returns the value of the amount of sentences
int sentence_count(const string Data);

//Desc: Un swaps the first and last word and first word of even sentences 
//Pre: The string variable for the sentence
//Post: Swaps the first and last word and fixes punctuation and capitalization
void UnSwapEven(char sentence[][][]); 

//Desc: un-reverses the spelling of sentences 
//Pre: the string variable for the sentence in question
//Post: un reverses spelling of the middle word for odd worded senteances
void UnReverse(string & sentence);

//Desc: changes the position of the apostrophe in the passed word
//Pre: The string variable for the word being changed 
//Post: chagnes where the apostrophe is in word that is passed
void apostrophe_change(string & word);

//Desc: Destroys the random jibberish 
//Pre: the string for the word pass by reference 
//Post: checks if the word is jibberish and deletes it if it is
void Destroy_Jibberish(string & word); 

//Desc: outputs the data 
//Pre: The finished array of data 
//Post: streams the data onto the next file 
void OutputData(string decrypted_file);

//Desc: Breaks the sentence into the words
/*Pre: The encrypted sentence string object and a blank object for word end 
and word  length*/
//Post: returns the current value for the word in the sentence. 
string break_into_words(const string sentence,int&word_end,int&word_len);

//Desc: Breaks the Data sentence by sentence 
//Pre: The Data set read in and the object to determine if it's even or odd
//Post: Returns the string of the sentence about to be decrypted
string break_into_sentence(const string Data,string & place);

//Desc: Ouputs a goodbye message
//Pre: none
//Post: prints a goodbye message on screen
void goodbye();

#endif