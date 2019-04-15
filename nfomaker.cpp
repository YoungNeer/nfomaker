#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
using namespace std;
int strlen(string s)
  {
    int l=0;
    for (l=0;(s[l]!='\0'||s[l]==32);++l);
    return l;
  }
int getOption(string s,string op)
  {
    retry:
      cout<<s<<endl;
      string a;
      cout<<op<<endl;
      printf("\nHit what's in your mind_>");
      cin>>a;
    if (strlen(a)>1){
      cout<<"\nInvalid Option! ";
      goto retry;
    }
    if (a[0]!=49&&a[0]!=50){
      cout<<"\nInvalid option! ";
      goto retry;
    }
    return a[0]-48;
  }
string replacechar(string str,char c,char rc,char c2,char rc2){
  for (int i=0;str[i]!='\0';++i)
    if (str[i]==c)
      str[i]=rc;
    else if (str[i]==c2)
      str[i]=rc2;
  return str;
}
void println(char c,int line,char rc,char rc2){
  switch (line){
  case 1:
    switch (c){
    case 65:
      cout<<replacechar("#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 66:
      cout<<replacechar("#@#@#@#@         ",'#',rc,'@',rc2);
      break;
    case 67:
      cout<<replacechar("#@#@#@#@       ",'#',rc,'@',rc2);
      break;
    case 68:
      cout<<replacechar("#@#@#@#@          ",'#',rc,'@',rc2);
      break;
    case 69:
      cout<<replacechar("#@#@#@#@#@#       ",'#',rc,'@',rc2);
      break;
    case 70:
      cout<<replacechar("#@#@#@#@#@#       ",'#',rc,'@',rc2);
      break;
    case 71:
      cout<<replacechar("#@#@#@#@#         ",'#',rc,'@',rc2);
      break;
    case 72:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 73:
      cout<<replacechar("#@#@       ",'#',rc,'@',rc2);
      break;
    case 74:
      cout<<replacechar("#@#@#@#@#@#     ",'#',rc,'@',rc2);
      break;
    case 75:
      cout<<replacechar("#@#   #@#       ",'#',rc,'@',rc2);
      break;
    case 76:
      cout<<replacechar("#@#            ",'#',rc,'@',rc2);
      break;
    case 77:
      cout<<replacechar("#@#@#   #@#@#      ",'#',rc,'@',rc2);
      break;
    case 78:
      cout<<replacechar("#@#      #@        ",'#',rc,'@',rc2);
      break;
    case 79:
      cout<<replacechar("#@#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 80:
      cout<<replacechar("#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 81:
      cout<<replacechar("#@#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 82:
      cout<<replacechar("#@#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 83:
      cout<<replacechar("#@#@#@#@#@#@#      ",'#',rc,'@',rc2);
      break;
    case 84:
      cout<<replacechar("#@#@#@#@#@#@#@     ",'#',rc,'@',rc2);
      break;
    case 85:
      cout<<replacechar("#@#        #@      ",'#',rc,'@',rc2);
      break;
    case 86:
      cout<<replacechar("#@        #@       ",'#',rc,'@',rc2);
      break;
    case 87:
      cout<<replacechar("#@         #@      ",'#',rc,'@',rc2);
      break;
    case 88:
      cout<<replacechar("#@#  #@#     ",'#',rc,'@',rc2);
      break;
    case 89:
      cout<<replacechar("#@#@    #@      ",'#',rc,'@',rc2);
      break;
    case 90:
      cout<<replacechar("#@#@#@#@#@      ",'#',rc,'@',rc2);
      break;

  }
    break;
  case 2:
    switch (c){
    case 65:
      cout<<replacechar("#@     #@        ",'#',rc,'@',rc2);
      break;
    case 66:
      cout<<replacechar("#@     #@        ",'#',rc,'@',rc2);
      break;
    case 67:
      cout<<replacechar("#@             ",'#',rc,'@',rc2);
      break;
    case 68:
      cout<<replacechar("#@     #@         ",'#',rc,'@',rc2);
      break;
    case 69:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 70:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 71:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 72:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 73:
      cout<<replacechar(" #@        ",'#',rc,'@',rc2);
      break;
    case 74:
      cout<<replacechar("     #@#        ",'#',rc,'@',rc2);
      break;
    case 75:
      cout<<replacechar("#@#  #@         ",'#',rc,'@',rc2);
      break;
    case 76:
      cout<<replacechar("#@#            ",'#',rc,'@',rc2);
      break;
    case 77:
      cout<<replacechar("#@  #@ #@  #@      ",'#',rc,'@',rc2);
      break;
    case 78:
      cout<<replacechar("#@#@     #@        ",'#',rc,'@',rc2);
      break;
    case 79:
      cout<<replacechar("#@       #@        ",'#',rc,'@',rc2);
      break;
    case 80:
      cout<<replacechar("#@     #@        ",'#',rc,'@',rc2);
      break;
    case 81:
      cout<<replacechar("#@        #        ",'#',rc,'@',rc2);
      break;
    case 82:
      cout<<replacechar("#@       #@        ",'#',rc,'@',rc2);
      break;
    case 83:
      cout<<replacechar("#@#                ",'#',rc,'@',rc2);
      break;
    case 84:
      cout<<replacechar("     #@#           ",'#',rc,'@',rc2);
      break;
    case 85:
      cout<<replacechar("#@#        #@      ",'#',rc,'@',rc2);
      break;
    case 86:
      cout<<replacechar("#@        #@       ",'#',rc,'@',rc2);
      break;
    case 87:
      cout<<replacechar("#@         #@      ",'#',rc,'@',rc2);
      break;
    case 88:
      cout<<replacechar(" #@  #@      ",'#',rc,'@',rc2);
      break;
    case 89:
      cout<<replacechar("  #@#  #@       ",'#',rc,'@',rc2);
      break;
    case 90:
      cout<<replacechar("        #@        ",'#',rc,'@',rc2);
      break;
  }
    break;
  case 3:
    switch (c){
    case 65:
      cout<<replacechar("#@     #@        ",'#',rc,'@',rc2);
      break;
    case 66:
      cout<<replacechar("#@      #@       ",'#',rc,'@',rc2);
      break;
    case 67:
      cout<<replacechar("#@             ",'#',rc,'@',rc2);
      break;
    case 68:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 69:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 70:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 71:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 72:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 73:
      cout<<replacechar(" #@        ",'#',rc,'@',rc2);
      break;
    case 74:
      cout<<replacechar("     #@#        ",'#',rc,'@',rc2);
      break;
    case 75:
      cout<<replacechar("#@# #@          ",'#',rc,'@',rc2);
      break;
    case 76:
      cout<<replacechar("#@#            ",'#',rc,'@',rc2);
      break;
    case 77:
      cout<<replacechar("#@   #@#   #@      ",'#',rc,'@',rc2);
      break;
    case 78:
      cout<<replacechar("#@ #@    #@        ",'#',rc,'@',rc2);
      break;
    case 79:
      cout<<replacechar("#@       #@        ",'#',rc,'@',rc2);
      break;
    case 80:
      cout<<replacechar("#@     #@        ",'#',rc,'@',rc2);
      break;
    case 81:
      cout<<replacechar("#@        #        ",'#',rc,'@',rc2);
      break;
    case 82:
      cout<<replacechar("#@       #@        ",'#',rc,'@',rc2);
      break;
    case 83:
      cout<<replacechar("#@#                ",'#',rc,'@',rc2);
      break;
    case 84:
      cout<<replacechar("     #@#           ",'#',rc,'@',rc2);
      break;
    case 85:
      cout<<replacechar("#@#        #@      ",'#',rc,'@',rc2);
      break;
    case 86:
      cout<<replacechar("#@        #@       ",'#',rc,'@',rc2);
      break;
    case 87:
      cout<<replacechar("#@         #@      ",'#',rc,'@',rc2);
      break;
    case 88:
      cout<<replacechar("  #  #       ",'#',rc,'@',rc2);
      break;
    case 89:
      cout<<replacechar("    #@#@        ",'#',rc,'@',rc2);
      break;
    case 90:
      cout<<replacechar("      #@          ",'#',rc,'@',rc2);
      break;
  }
    break;
  case 4:
    switch (c){
    case 65:
      cout<<replacechar("#@     #@        ",'#',rc,'@',rc2);
      break;
    case 66:
      cout<<replacechar("#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 67:
      cout<<replacechar("#@             ",'#',rc,'@',rc2);
      break;
    case 68:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 69:
      cout<<replacechar("#@#@#@            ",'#',rc,'@',rc2);
      break;
    case 70:
      cout<<replacechar("#@#@#@            ",'#',rc,'@',rc2);
      break;
    case 71:
      cout<<replacechar("#@  #@#@          ",'#',rc,'@',rc2);
      break;
    case 72:
      cout<<replacechar("#@#@#@#@#@        ",'#',rc,'@',rc2);
      break;
    case 73:
      cout<<replacechar(" #@        ",'#',rc,'@',rc2);
      break;
    case 74:
      cout<<replacechar("     #@#        ",'#',rc,'@',rc2);
      break;
    case 75:
      cout<<replacechar("#@#@#           ",'#',rc,'@',rc2);
      break;
    case 76:
      cout<<replacechar("#@#            ",'#',rc,'@',rc2);
      break;
    case 77:
      cout<<replacechar("#@    #    #@      ",'#',rc,'@',rc2);
      break;
    case 78:
      cout<<replacechar("#@  #@   #@        ",'#',rc,'@',rc2);
      break;
    case 79:
      cout<<replacechar("#@       #@        ",'#',rc,'@',rc2);
      break;
    case 80:
      cout<<replacechar("#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 81:
      cout<<replacechar("#@    #@  #        ",'#',rc,'@',rc2);
      break;
    case 82:
      cout<<replacechar("#@#@#@#@#          ",'#',rc,'@',rc2);
      break;
    case 83:
      cout<<replacechar(" #@#@#@#@#@#       ",'#',rc,'@',rc2);
      break;
    case 84:
      cout<<replacechar("     #@#           ",'#',rc,'@',rc2);
      break;
    case 85:
      cout<<replacechar("#@#        #@      ",'#',rc,'@',rc2);
      break;
    case 86:
      cout<<replacechar(" #@      #@        ",'#',rc,'@',rc2);
      break;
    case 87:
      cout<<replacechar("#@         #@      ",'#',rc,'@',rc2);
      break;
    case 88:
      cout<<replacechar("   #@        ",'#',rc,'@',rc2);
      break;
    case 89:
      cout<<replacechar("     #@         ",'#',rc,'@',rc2);
      break;
    case 90:
      cout<<replacechar("    #@            ",'#',rc,'@',rc2);
      break;}
    break;
  case 5:
    switch (c){
    case 65:
      cout<<replacechar("#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 66:
      cout<<replacechar("#@    #@         ",'#',rc,'@',rc2);
      break;
    case 67:
      cout<<replacechar("#@             ",'#',rc,'@',rc2);
      break;
    case 68:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 69:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 70:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 71:
      cout<<replacechar("#@    #@          ",'#',rc,'@',rc2);
      break;
    case 72:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 73:
      cout<<replacechar(" #@        ",'#',rc,'@',rc2);
      break;
    case 74:
      cout<<replacechar("#@   #@#        ",'#',rc,'@',rc2);
      break;
    case 75:
      cout<<replacechar("#@# #@          ",'#',rc,'@',rc2);
      break;
    case 76:
      cout<<replacechar("#@#   #@#      ",'#',rc,'@',rc2);
      break;
    case 77:
      cout<<replacechar("#@         #@      ",'#',rc,'@',rc2);
      break;
    case 78:
      cout<<replacechar("#@   #@  #@        ",'#',rc,'@',rc2);
      break;
    case 79:
      cout<<replacechar("#@       #@        ",'#',rc,'@',rc2);
      break;
    case 80:
      cout<<replacechar("#@               ",'#',rc,'@',rc2);
      break;
    case 81:
      cout<<replacechar("#@     #@ #        ",'#',rc,'@',rc2);
      break;
    case 82:
      cout<<replacechar("#@   #@            ",'#',rc,'@',rc2);
      break;
    case 83:
      cout<<replacechar("         #@#       ",'#',rc,'@',rc2);
      break;
    case 84:
      cout<<replacechar("     #@#           ",'#',rc,'@',rc2);
      break;
    case 85:
      cout<<replacechar("#@#        #@      ",'#',rc,'@',rc2);
      break;
    case 86:
      cout<<replacechar("  #@    #@         ",'#',rc,'@',rc2);
      break;
    case 87:
      cout<<replacechar("#@   #@    #@      ",'#',rc,'@',rc2);
      break;
    case 88:
      cout<<replacechar("  #  #       ",'#',rc,'@',rc2);
      break;
    case 89:
      cout<<replacechar("     #@         ",'#',rc,'@',rc2);
      break;
    case 90:
      cout<<replacechar("  #@              ",'#',rc,'@',rc2);
      break;}
    break;
  case 6:
    switch (c){
    case 65:
      cout<<replacechar("#@     #@        ",'#',rc,'@',rc2);
      break;
    case 66:
      cout<<replacechar("#@     #@        ",'#',rc,'@',rc2);
      break;
    case 67:
      cout<<replacechar("#@             ",'#',rc,'@',rc2);
      break;
    case 68:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 69:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 70:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 71:
      cout<<replacechar("#@    #@          ",'#',rc,'@',rc2);
      break;
    case 72:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 73:
      cout<<replacechar(" #@        ",'#',rc,'@',rc2);
      break;
    case 74:
      cout<<replacechar("#@   #@#        ",'#',rc,'@',rc2);
      break;
    case 75:
      cout<<replacechar("#@#  #@         ",'#',rc,'@',rc2);
      break;
    case 76:
      cout<<replacechar("#@#   #@#      ",'#',rc,'@',rc2);
      break;
    case 77:
      cout<<replacechar("#@         #@      ",'#',rc,'@',rc2);
      break;
    case 78:
      cout<<replacechar("#@    #@ #@        ",'#',rc,'@',rc2);
      break;
    case 79:
      cout<<replacechar("#@       #@        ",'#',rc,'@',rc2);
      break;
    case 80:
      cout<<replacechar("#@               ",'#',rc,'@',rc2);
      break;
    case 81:
      cout<<replacechar("#@#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 82:
      cout<<replacechar("#@    #@           ",'#',rc,'@',rc2);
      break;
    case 83:
      cout<<replacechar("         #@#       ",'#',rc,'@',rc2);
      break;
    case 84:
      cout<<replacechar("     #@#           ",'#',rc,'@',rc2);
      break;
    case 85:
      cout<<replacechar("#@#        #@      ",'#',rc,'@',rc2);
      break;
    case 86:
      cout<<replacechar("   #@  #@          ",'#',rc,'@',rc2);
      break;
    case 87:
      cout<<replacechar("#@  #@ #@  #@      ",'#',rc,'@',rc2);
      break;
    case 88:
      cout<<replacechar(" #@  #@      ",'#',rc,'@',rc2);
      break;
    case 89:
      cout<<replacechar("     #@         ",'#',rc,'@',rc2);
      break;
    case 90:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
  }
    break;
  case 7:
    switch (c){
    case 65:
      cout<<replacechar("#@     #@        ",'#',rc,'@',rc2);
      break;
    case 66:
      cout<<replacechar("#@#@#@#@         ",'#',rc,'@',rc2);
      break;
    case 67:
      cout<<replacechar("#@#@#@#@#@     ",'#',rc,'@',rc2);
      break;
    case 68:
      cout<<replacechar("#@#@#@#           ",'#',rc,'@',rc2);
      break;
    case 69:
      cout<<replacechar("#@#@#@#@          ",'#',rc,'@',rc2);
      break;
    case 70:
      cout<<replacechar("#@                ",'#',rc,'@',rc2);
      break;
    case 71:
      cout<<replacechar("#@#@#@#@          ",'#',rc,'@',rc2);
      break;
    case 72:
      cout<<replacechar("#@      #@        ",'#',rc,'@',rc2);
      break;
    case 73:
      cout<<replacechar("#@#@       ",'#',rc,'@',rc2);
      break;
    case 74:
      cout<<replacechar("#@#@#@#@        ",'#',rc,'@',rc2);
      break;
    case 75:
      cout<<replacechar("#@#   #@#       ",'#',rc,'@',rc2);
      break;
    case 76:
      cout<<replacechar("#@#@#@#@#      ",'#',rc,'@',rc2);
      break;
    case 77:
      cout<<replacechar("#@         #@      ",'#',rc,'@',rc2);
      break;
    case 78:
      cout<<replacechar("#@     #@#@        ",'#',rc,'@',rc2);
      break;
    case 79:
      cout<<replacechar("#@#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 80:
      cout<<replacechar("#@               ",'#',rc,'@',rc2);
      break;
    case 81:
      cout<<replacechar("          #@       ",'#',rc,'@',rc2);
      break;
    case 82:
      cout<<replacechar("#@     #@          ",'#',rc,'@',rc2);
      break;
    case 83:
      cout<<replacechar("#@#@#@#@#@#        ",'#',rc,'@',rc2);
      break;
    case 84:
      cout<<replacechar("     #@#           ",'#',rc,'@',rc2);
      break;
    case 85:
      cout<<replacechar(" #@#@#@#@#@#@      ",'#',rc,'@',rc2);
      break;
    case 86:
      cout<<replacechar("    #@#@           ",'#',rc,'@',rc2);
      break;
    case 87:
      cout<<replacechar("#@#@    #@#@#      ",'#',rc,'@',rc2);
      break;
    case 88:
      cout<<replacechar("#@#  #@#     ",'#',rc,'@',rc2);
      break;
    case 89:
      cout<<replacechar("     #@         ",'#',rc,'@',rc2);
      break;
    case 90:
      cout<<replacechar("#@#@#@#@#@#       ",'#',rc,'@',rc2);}
    break;
 }}
void println(char c,char rc,char c2,char rc2){
for (int l=1;l<=7;++l){
  println(c,l,rc,rc2);
  if (l!=7)cout<<endl;}
}
void printr(char c[15],char lh=97,int r=26){
for (int l=1;l<=7;++l){
  for (int i=0;c[i]!='\0';++i)
     println(c[i],l,int(lh)+rand()%r,int(lh)+rand()%r);
  cout<<endl;}
}
void printAnimated(char c[15],int choice,int l){
    if (choice==0)
      while(1){
        system("clear;echo '\n'");
        printr(c,l);
        usleep(10000);
      }
    else
      while(1){
        system("clear;echo '\n'");
        printr(c,48,l);
        usleep(10000);
      }
}
void printg(char c[15],char ch){
  for (int l=1;l<=7;++l){
    for (int i=0;c[i]!='\0';++i)
      println(c[i],l,ch,ch);
    cout<<endl;}}
void printc(char c[15]){
  for (int l=1;l<=7;++l){
  for (int i=0;c[i]!='\0';++i)
     println(c[i],l,c[i],c[i]);
cout<<endl;}}
main(){
  char name[15];
  char c,l;
  int choice=0;
  bool anim,firstChar,randomPrint,givenChar;
  cout<<"Enter your name: ";
  cin>>name;
  if (getOption("\nDo you want to print you name in Animated?\n","1. Animated would be best\n2. No, classic will do\n")==1)
  {
    if (getOption("\nDo you want to animate numbers or just character?\n","1. Yeah numbers, i love numbers\n2. No use character instead\n")==1)
    {
      choice=-1;
      l=((getOption("\nOne last Question. You want to use Base 1 numbers or Base 10 numbers?\n","1. I'm a real man, so i choose base-1\n2. Base-10 rules the world, so go for base-10\n")==1)?2:10);
    }
    else 
    {
      choice=0;
      l=((getOption("\nOne last Question. You want to use capital chracter or lowercase character?\n","1. Lowercase of-course\n2. Uppercase, i like uppercase\n")==1)?97:65);
    }
  }
  else{
    if (getOption("\nDo you want to decide what character your name should have?\n","1. Yes I have the right to decide\n2. No I want you to do that\n")==1){
      cout<<"Please enter the character: ";
      choice=1;
      cin>>c;}
    else{
      if (getOption("\nDo you want to use the first letter of your name as the character or..?\n","1. Yes that would be great\n2. No use random character instead\n")==1)
        choice=2;
      else{
        choice=3;
        l=((getOption("\nOne last Question. You want to use capital chracter or lowercase character?\n","1. Lowercase of-course\n2. Uppercase, i like uppercase\n")==1)?97:65);
        }
      }}
  //convert name to lowercase
  system("clear");cout<<char(10);
  for (int i=0;name[i]!='\0';++i)
  if (name[i]>=97&&name[i]<=122)
    name[i]-=32;
  switch(choice){
    case -1:
      printAnimated(name,-1,l);
      break;
    case 0:
      printAnimated(name,0,l);
      break;
    case 1:
      printg(name,c);
      break;
    case 2:
      printc(name);
      break;
    case 3:
      printr(name,l);
      break;
    default:
      system("exit");
  }
}
