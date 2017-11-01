//Programmers: Terry Rorie, Jonah Marz
//Date 10/30/2017
//Class 1570 Section c 
//File: homework8Main.cpp 
//Purpose: This will create an encryption for secret penguin messages
//Instructor: San Yueng

#include<iostream>
#include<fstream>
#include<string>


int main()
{
  //Variable Declarations//
  char File_array[][][MAX_WORD];/* This holds the entire file 
  in one array the first array holds the sentence, the second holds the words,
  the third holds the characters within the words*/
  int amount_of_words;//This is the amount of words   
  
  
  //Greeting//
  greeting();
  
  //Goodbye//
  goodbye(); 
  
  return 0;
}
