{
        Project: FindDupFar http://code.google.com/p/findupfar/
	Author: Alexey Suhinin http://x-alexey.narod.ru
	License: GPL v.2
}

{.$DEFINE DEBUG}
{.$DEFINE SORT_PANEL}
{.$DEFINE AUTO_GROUP_REMOVE}

{���� ���������� - ������ �������� ��� ����� ��� ���������� ������,
 ���� ���������� �������� ������ �������� �������������} 
{.$DEFINE FullRescan}

{���� ���������� - �������� ����������� ���� ��������� ������, 
 ����� - �������� ������ F6, F8 - �� �������� ��������� ������}
{$DEFINE VALIDATE} 

{$IFDEF DEBUG}
  {$O-}
{$ENDIF DEBUF}                    

{$IFNDEF VPASCAL}
  {$IFNDEF FPC}
    {$DEFINE DELPHI}
    {$IFDEF VER100}
      {$DEFINE OLD_PAS}
    {$ENDIF}
  {$ENDIF}
{$ENDIF}

{$IFDEF VIRTUALPASCAL}

  {$DEFINE OLD_PAS}
//  {$DEFINE VP}
  {&Delphi+,AlignData+,AlignRec+,H+,Z+,Use32+}

{$ELSE}
  {$IFDEF FPC}
    {$MODE DELPHI}
    {$DEFINE USE_DELPHI4}   { Delphi 4.0 or higher }
  {$ELSE}
     {$ALIGN OFF}
     {$MINENUMSIZE 4}
     {$R-}

     {$WRITEABLECONST ON}

     {$IFNDEF VER80}           { Delphi 1.0     }
      {$IFNDEF VER90}          { Delphi 2.0     }
       {$IFNDEF VER93}         { C++Builder 1.0 }
         {$IFNDEF VER100}
           {$IFNDEF VER110}
             {$DEFINE USE_DELPHI4}   { Delphi 4.0 or higher }
           {$ENDIF}
         {$ENDIF}
       {$ENDIF}
      {$ENDIF}
     {$ENDIF}
  {$ENDIF}
{$ENDIF}