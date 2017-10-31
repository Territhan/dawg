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

void ReplaceWords(string & sentance,const string replace,
const string replace_too)
{
  /*My idea for this function is to use the method for looking at  the string
  word by word; if the word is the "replace" then change it to "replace_too"*/
  //Feel free to let me know what you think//
}