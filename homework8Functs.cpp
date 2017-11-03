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
    
    decrypt_sentence+=word;
    decrypt_sentence+='\''    
  }
 
}

void UnReverse(string & sentence)
{
  string middle_word; //This is the actual string of the middle word 
  int middle_word_num; //This is the middle word of the sentence 
  int u=0;//This is a placeholder value to tell it how many times to loop
  static int l = 0; //This is set as a placeholder for where you are
  string new_middle_word;//This is the new middle word of the string 
  int middle_word_length;//length of the middle word 
  int middle_word_pos;//The start position of the middle word 
  
  middle_word_num=(sentence_word_count(sentence)+1)/2;
  
  do
  {  
    if(sentence[i]==' ')
    {
      u++;
      if(u==middle_word_num)
      {  
        middle_word=sentence.substr(l+1,i-(l+1));
        middle_word_pos=l+1;
        word_found=true;
        l=0;
      }  
      l=i;
    }
    i++;
  }
  while(!word_found);
  middle_word_length=middle_word.length(); 
  
  for(int i = middle_word_length-1; i=>0; i--)
  {
    new_middle_word+=middle_word[i];
  }
  sentence.replace(middle_word_pos,middle_word_length,new_middle_word);
  return;
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

void output(const string &decrypted)
{
  ofstream fout;

  fout.open(OUTPUT_FILE);
  fout << decrypted;
  fout.close(OUTPUT_FILE);

  return;
}

int sentence_count(const string Data)
{
  int sentence_amount = 0;
  for(int i = 0;i<Data.length();i++) 
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
          sentence=Data.substr(t+2,i-(t+2));
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
    while(i<Data.length()&&!sentence_found);    
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
        word=sentence.substr(t+1,i-(t+1));
      }
      word_found=true;
      t=i;
    }
    i++;
  }
  while(i<sentence.length()&&!word_found);
  if
  word_end=i-1;
  word_len=word.length(); 
  return word; 
    
}  

void Replace_Words(string&word,const string replace,const string replace_too)
{
  switch(word)
  {
    case replace:
      word=replace_too;
      break;
  }

  return;
}

void even_replace(string & sentence)
{
  string first_word; //This is the actual string of the first word 
  int first_word_pos; //This is the first word of the sentence 
  int u=0;//This is a placeholder value to tell it how many times to loop
  static int l = 0; //This is set as a placeholder for where you are
  string swap_word;//This is the new middle word of the string 
  int first_word_length;//length of the middle word 
  int last_word_length;//The length of the last word
  int last_word_pos;//This is the start position of the last word   
  string last_word;//This is the last word string 
  char punctuation_mark;//This is the punctuation_mark on the last word 
  word_count=(sentence_word_count(sentence));
  
  do
  {  
    if(sentence[i]==' ')
    {
      u++;
      if(u==1)
      {  
        first_word=sentence.substr(0,i-1);
        first_word_pos=0;
        first_word_length=first_word.length();
      }  
      if(u==word_count)
      {
        sentence[i-1]=punctuation_mark;
        last_word=sentence.substr(l+1,i-(l+2));
        last_word_pos=l+1;
        last_word_length=last_word.length();
      }
      l=i;
    }
    i++;
    swap_word=first_word;
    sentence.replace(first_word_pos,last_word_length,last_word);
    sentence.replace(last_word_pos,first_word_length,first_word);
  }while(i<=sentence.length());
  if(word_count%2==1)
  {
    UnReverse(sentence);
  }
  return;
  
}

void Un_Swap_Odd(string & sentence)
{
  int wordCnt = sentence_word_count(const string sentence);
  int t = 0;
  int i = 0;
  int j = 0;
  bool word_found = false;
  bool last_word=false;
  string words[wordCnt];
  string temp;
  //Copied from break_into_words
  for(i;i<wordCnt;i++)
  {
    do
    {
      if(sentence[j]==' ')
      {
        if(t=0)
        {
          words[i]=sentence.substr(t,j-t);
        }
        else
        {
          words[i]=sentence.substr(t+1,j-t+1);
        }
        t=j;
        word_found=true;
      }
      j++
    } while(i<sentence.length()&&!word_found);
  }
  for(int k=0;k<wordCnt;k+2)
  {
    strcat(temp,words[k+1]);
    strcat(temp,' ');
    strcat(temp,words[k]);
    strcat(temp,' ');
  }
  if(wordCnt%2==0)
  {
    k--;
    strcat(temp,words[k]);
    strcat(temp,' ');
  }
  sentence = temp;
  return;
}

void Destroy_Jibberish(string & word)
{
  
  if(word[0]==Jibberish1[0])
    word='\0';
  
  if(word[0]==Jibberish2[0])
    word='\0';
  
  if(word[0]==Jibberish3[0])
    word='\0';
  
  if(word[0]==Jibberish4[0])
    word='\0';
  
}