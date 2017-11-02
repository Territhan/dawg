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

void Read_in_File(string & File)
{
  ifstream fin; //This is the object to read in data from the input file
  string word; //this stores the words in the array 
  static int sentence_ctr = 0; //This exists to count the number of sentence
  int word_ctr = 0; //This exists to count the number of words
  int tracker = 0;
  int letter_ctr = 0;
 
  fin.open(FILE_NAME);
  //This reads in the entire file 
  getline(fin,File,'\0');  
  
  fin.close(FILE_NAME);
   
  
  for(int i = 0;i<sentence_amt;i++)
  {
    word_ctr=sentence_word_count(sentence[][][],MAX_WORD,i);
  for(int i = 0;i<word_ctr;i++)
      {
        strcpy(word_array[i],sentence_array,);   
      }
      

  return;
}

int sentence_count(const string sentence_add)
{
  int sentence_amount = 0;
  for(int i = 0;i<strlen(Data);i++; 
  {
    if(Data[i]=='?'||Data[i]=='!'||Data[i]=='.')
    {
      sentence_amount++;
    }  
    i++;       
  }
  
  return sentence_amount;
}

int sentence_word_count(const char sentence[][][],const int SIZE,
const int sentence_num)
{
  int amt_of_words=0;
  for(int i = 0; i<SIZE; i++)
  {
    if(sentence[sentence_num][amt_of_words][i]==' ')
      amt_of_words++;
  }
  return amt_of_words;
}

void Replace_Words(char sentence[][][],const char replace[],
const char replace_too[])
{
  static int replace_count=0;//This is to count what sentence its on
  int word_ctr=0; //This exists to count the number of words 
  
  for(int i=0;i<sentence_word_count(sentence,MAX_WORD))
  {
    if(strcmp(sentence[replace_count][word_ctr],replace)==0)
    {
      strcpy(sentence[replace_count][word_ctr]=replace_too);
    }
  }
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

void Destroy_Jibberish(char sentence[][][]);
{
  static int sentence_hold = 0; //This keeps track of which sentence
  int word_ctr = 0; //This keeps track of the amount of words in the sentence
  
  if(strcmp(sentence[sentence_hold][word_ctr],Jibberish1==0)
    strcpy(sentence[sentence_hold][word_ctr],'\0');
  
  if(strcmp(sentence[sentence_hold][word_ctr],Jibberish2==0)
    strcpy(sentence[sentence_hold][word_ctr],'\0');
  
  if(strcmp(sentence[sentence_hold][word_ctr],Jibberish3==0)
    strcpy(sentence[sentence_hold][word_ctr],'\0');
  
  if(strcmp(sentence[sentence_hold][word_ctr],Jibberish4==0)
    strcpy(sentence[sentence_hold][word_ctr],'\0');
  
  sentence_hold++;
}