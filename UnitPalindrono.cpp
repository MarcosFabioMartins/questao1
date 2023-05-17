//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitPalindrono.h"

#include <fstream>
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent *Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
   int longestPalindrono, aux;
   longestPalindrono = aux = 0;
   AnsiString _longestPalindrono;
   if (!OpenDialog->Execute())
   {
      ShowMessage("Erro ao abrir o arquivo.");
      return;
   }
   else
   {
      AnsiString fileName = OpenDialog->FileName;
      std::ifstream inputFile(fileName.c_str());

      UnicodeString longestPalindrom;
      std::string line;
      while (std::getline(inputFile, line))
      {
         std::string longestPalindrome = findLongestPalindrome(line);
         longestPalindrom = longestPalindrome.c_str();
         Memo1->Lines->Add("Palíndromo: " + longestPalindrom);
         longestPalindrono = longestPalindrome.length();
         if (longestPalindrono > aux)
         {
            aux = longestPalindrono;
            _longestPalindrono = longestPalindrom;
         }
      }
      Memo1->Lines->Add("");
      Memo1->Lines->Add("Maior palíndromo: " + _longestPalindrono);
      Memo1->Lines->Add("Tamanho: " + IntToStr(aux));
   }
}

std::string TForm1::findLongestPalindrome(const std::string &str)
{
   int maxLength = 0;
   std::string longestPalindrome;

   // Percorre todas as substrings possíveis
   for (int i = 0; i < str.length(); i++)
   {
      for (int j = i; j < str.length(); j++)
      {
         std::string substring = str.substr(i, j - i + 1);

         // Verifica se a substring é um palíndromo e se seu tamanho é maior que o maior palíndromo encontrado até agora
         if (isPalindrome(substring) && substring.length() > maxLength)
         {
            maxLength = substring.length();
            longestPalindrome = substring;
         }
      }
   }

   return longestPalindrome;
}

bool TForm1::isPalindrome(const std::string &str)
{
   int left = 0;
   int right = str.length() - 1;

   while (left < right)
   {
      if (str[left] != str[right])
      {
         return false;
      }
      left++;
      right--;
   }
   return true;
}

//---------------------------------------------------------------------------

