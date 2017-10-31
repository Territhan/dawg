//Programmers: Terry Rorie, Jonah Marz
//Date 10/30/2017
//Class 1570 Section c 
//File: homework8Functs.cpp
//Purpose: The implementation files for homework 8
//Instructor: San Yueng

#include<iostream>
#include<fstream>
#include<string>

//Function definitions// 

void greeting()
{
  cout<<"Hello! This will encrypt secret messages for the penguin army."<<endl;
  cout<<"Shhh don't tell anybody."<<endl;
  return;
}


void goodbye()
{
  cout<<"Data decrypted!"<<endl;
  cout<<"This will self destruct in five seconds."<<endl;
  return; 
}

int File_Track(string sentence[],const int SIZE)
{
  static int length_read=0; //This is the amount of characters already read in
  
  for(int i = 0; i<SIZE; i++)
  {
    length_read += strlen(sentence[i]);
  } 
  return length_read; 
}

void Read_in_Sentence(string sentence[],const int SIZE)
{
  ifstream fin; //This is the object to read in data from the input file
  
  fin.open(FILE_NAME);
  fin.ignore(File_Track(sentence[],const int SIZE));
  
  

  
}

void ReplaceWords(string & sentence,const string replace,
const string replace_too)
{
  /*My idea for this function is to use the method for looking at  the string
  word by word; if the word is the "replace" then change it to "replace_too"*/
  //Feel free to let me know what you think//
}