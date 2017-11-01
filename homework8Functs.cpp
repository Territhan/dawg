//Programmers: Terry Rorie, Jonah Marz
//Date 10/30/2017
//Class 1570 Section c 
//File: homework8Functs.cpp
//Purpose: The implementation files for homework 8
//Instructor: San Yueng

#include<iostream>
#include<fstream>
#include<string>
#include "homework8.h"

//Function definitions// 

void greeting()
{
  cout<<"Hello! This will decrypt secret messages for the penguin army."<<endl;
  cout<<"Shhh don't tell anybody."<<endl;
  return;
}

void goodbye()
{
  cout<<"Data decrypted!"<<endl;
  cout<<"This will self destruct in five seconds."<<endl;
  return; 
}

int File_Track(char sentence[],const int SIZE)
{
  static int length_read=0; //This is the amount of characters already read in
  //This just increases the length of the static variable 
    length_read += strlen(sentence[i]);
  return length_read; 
}

void Read_in_Sentence(char sentence[][][])
{
  ifstream fin; //This is the object to read in data from the input file
  char sentence_array[MAX_SENTENCE];
  static int sentence_ctr = 0; //This exists to count the number of sentence
  int word_ctr = 0; //This exists to count the number of words 
  
  fin.open(FILE_NAME);
  
  fin.ignore(File_Track(sentence_array,MAX_SENTENCE));
  fin.getline(sentence_array,('.'||'!'||'?'));    
  
  fin.close(FILE_NAME); 
  
  for(int i = 0; i<(sentence_word_count(sentence_array,strlen(sentence_array)))
  ;i++)
  {  
    strcpy(sentence[sentence_ctr][word_ctr][],' ');
    word_ctr++;
  }
  return;
}

void sentence_word_count(const char sentence[],const int SIZE)
{
  int amt_of_words=0
  
  for(int i = 0; i<SIZE; i++)
  {
    if(sentence[i]==' ')
      amt_of_words++;
  }
  return amt_of_words;
}

void Replace_Words(string & sentence,const string replace,
const string replace_too)
{
  /*My idea for this function is to use the method for looking at  the string
  word by word; if the word is the "replace" then change it to "replace_too"*/
  //Feel free to let me know what you think//
}