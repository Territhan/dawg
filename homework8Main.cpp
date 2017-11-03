//Programmers: Terry Rorie, Jonah Marz
//Date 10/30/2017
//Class 1570 Section c 
//File: homework8Main.cpp 
//Purpose: This will create an encryption for secret penguin messages
//Instructor: San Yueng

#include<iostream>
#include<fstream>
#include<string>
#include "homework8.h"

int main()
{
  //Variable Declarations//
  string encryted_data;/* This holds the entire file 
  in one array the first array holds the sentence, the second holds the words,
  the third holds the characters within the words*/
  int sentence_amt; //This is the total amount of sentences   
  string even_or_odd;  
  string decrypted_data; 
  string decrypted_sentence; 
  string encrypted_sentence;
  
  //Greeting//
  greeting();
  //Read in Data//
  encryted_data=Read_in_File();
  //Get sentences and decrypt them//
  sentence_amt=sentence_count(encryted_data); 
  for(int i = 0; i<=sentence_amt;i++)
  {
    encrypted_sentence= break_into_sentence(encryted_data,even_or_odd);
    if(even_or_odd=="even")
    {
      even_replace(encrypted_sentence);
    }
    if(even_or_odd=="odd");
    {
      Un_swap_odd(encryted_data);
    }
    decrypted_sentence=decrypt_sentence(encryted_sentence,even_or_odd);
    
    decrypted_data+=decrypted_sentence;  
  }
  
  
  
  
  //Goodbye//
  goodbye(); 
  
  return 0;
}
