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

string decrypt_sentence(const string sentence,place)
{
  int amt_of_words; //The amount of words in the sentence
  string word;//This is the current word in the sentence being deliberated 
  int word_end; //This is the last character of the current word 
  int word_length; //This is the length of the current word
  string decrypted_sentence;//This is the finished sentence 
  //counts amount of words//
  amt_of_words=sentence_word_count(sentence);
  //loops and decrypts the sentence word by word//   
  for(int i = 0; i<amt_of_words; i++)
  { 
    word=break_into_words(sentence,word_end,word_length);
    Destroy_Jibberish(word);  
    Replace_Words(word,"she","he");
    Replace_Words(word,"her","his");
    Replace_Words(word,"my","your");
    Replace_Words(word,"there","their");
    Replace_Words(word,"I","you");
    Replace_Words(word,"frogs","penguins"); 
    apostrophe_change(word); 
  }
  
  
  
}

string Read_in_File()
{
  string File;
  ifstream fin; //This is the object to read in data from the input file 
 
  fin.open(FILE_NAME);
  //This reads in the entire file 
  getline(fin,File);  
  
  fin.close(FILE_NAME);
  
  
  return File;
}

int sentence_count(const string Data)
{
  int sentence_amount = 0;
  for(int i = 0;i<Data.length();i++; 
  {
    if(Data[i]=='?'||Data[i]=='!'||Data[i]=='.')
    {
      sentence_amount++;
    }         
  }
  
  return sentence_amount;
}

int sentence_word_count(const string sentence)
{
  int amt_of_words=0;
  for(int i = 0; i<sentence.length(); i++)
  {
    if(sentence[i]==' ')
      amt_of_words++
  }
  return amt_of_words+1;
}

void apostrophe_change(string & word)
{
  char swap_char;//This is a placeholder for swapping
  int last_character; //This is the index of the last character 
  
  last_character=word.length(); 
  
  for(int i = 0; i<word.length();i++)
  {
    if(i==last_character&&word[i]=='\'')
    {
     word.erase(last_character,1); 
     word.insert(0,'\'');
     return;
    }
    else if(word[i]=='\'')
    {
      swap_char=word[i+1];
      word[i+1]='\'';
      word[i]=swap_char;
    }
  }
  return;
}

string break_into_sentence(const string Data,string & place)
{ 
  string sentence; //This is the return value of the function
  static int t = 0;//This is a placeholder value
  static int ctr = 0; //counts the sentences by index
  bool sentence_found = false;
  static int i = 0;
  
    do
    {  
      if(Data[i]=='.'||Data[i]=='!'||Data[i]=='?')
      {
        
        ctr++;
        if(t=0)
        {  
          sentence=Data.substr(t,i-t);
        }
        else
        {  
          sentence=Data.substr(t+2,i-t+2);
        }
        t=i;
        sentence_found=true; 
      }
      if(ctr%2==0)
        place="even";
      else
      {
        place="odd";
      }    
      
      i++
    }
    while(i<Data.lenth()&&!sentence_found);    
  return sentence;  
}

string break_into_words(const string sentence,int&word_end,int&word_len)
{
  string word; //This is the return value of the function
  static int t = 0; //This is a placeholder value 
  bool word_found = false;
  static int i =0; 
  bool last_word=false;//This is to check if it is the last word
  do
  {
    if(sentence[i]==' ')
    {
      if(t=0)
      {
        word=sentence.substr(t,i-t);
      }
      else
      {
        word=sentence.substr(t+1,i-t+1);
      }
      word_found=true;
      t=i;
    }
    i++;
  }
  while(i<sentence.lenth()&&!word_found);
  if
  word_end=i-1;
  word_len=word.length(); 
  return word; 
    
}  

void Replace_Words(string&word,const string replace,const string replace_too)
{
  
  if(word==replace)
    word=replace_too;

  return;
}

void Un_Swap_Odd(char sentence[][][], const int SIZE)
{
  int max = sentence_word_count(sentence[], SIZE);//Max words in sentence
  int replace_ctr = 0;//Words replaced in sentence
  int sentence_ctr = 0;//Current sentence #

    for(int i=replace_ctr;i<=max;i++)
    { 
      int word2 = i+1
      
    }
}

void Destroy_Jibberish(string & word)
{
  
  if(word==Jibberish1)
    word='\0';
  
  if(word==Jibberish2)
    word='\0';
  
  if(word==Jibberish3)
    word='\0';
  
  if(word==Jibberish4)
    word='\0';
  
}