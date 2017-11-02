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
  string file_data;/* This holds the entire file 
  in one array the first array holds the sentence, the second holds the words,
  the third holds the characters within the words*/
     
  
  
  //Greeting//
  greeting();
  //Read in Data//
  Read_in_File(file_data);
  
  //Goodbye//
  goodbye(); 
  
  return 0;
}
