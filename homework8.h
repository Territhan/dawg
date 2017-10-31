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
const int MAX_SENTANCE = 500;//Max amount of characters in a sentance 
const string FILE_NAME = "encrypted.dat"; //This is the name of the input file
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

//Desc: Decrypts the entire file 
//Pre: --work in progress wait till end to do--
//Post: --This will combine all of the decryption to one function--
string Decrypt_Code(---------------------------);

//Desc: reads in a line of the file.
/*Pre: an ifstream object for it to read in the file*/
//Post: Returns the first line of the file. 
string Read_in_Sentance(ifstream fin);

//Desc: changes she back to he 
/*Pre: the string variable that the sentence is being kept in,
replace(the word you wish to replace),replace too(the word you wish to change
it too)*/
//Post: chagnes all instances of she back to he 
void ReplaceWords(string & sentance,const string replace,
const string replace_too);

//Desc: Un pair-wise swaps the words in odd sentances
//Pre: The string variable for the sentance
//Post: swaps the words back into the position they are supposed to be in.
void UnSwapOdd(string & sentance);

//Desc: Un swaps the first and last word and first word of even sentences 
//Pre: The string variable for the sentence
//Post: Swaps the first and last word and fixes punctuation and capitalization
void UnSwapEven(string & sentance); 

//Desc: un-reverses the spelling of sentences 
//Pre: the string variable for the sentence in question
//Post: un reverses spelling of the middle word for odd worded senteances
void UnReverse(string & sentance); 

//Desc: changes the position of the apostrophe in words
//Pre: The string variable for the sentance being changed 
//Post: chagnes where the apostrophe is in words that have one
void ApostropheChange(string & sentance);

//Desc: Randomly inserts phrases that you choose into the sentances 
/*Pre: the string for the sentance*/
//Post: Randomly inserts phrases into the sentances throughout the file
void InsertJibberish(string & sentance); 

//Desc: Ouputs a goodbye message
//Pre: none
//Post: prints a goodbye message on screen
void goodbye();


#endif