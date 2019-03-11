#pragma once
#include<iostream>
#include<vector>
#include"../Models/Board.h"
#include"../Models/Move.h"
#include"../Models/Rack.h"
#include"../GADDAG/GADDAG.h"


using namespace std;

class MoveGenerate{
   
    GADDAG *dag;
    string rack_;
   
    public:
    MoveGenerate();
    MoveGenerate(string gaddagpath);
   
    void send_Col(Board &board);
    void send_Row(Board &board);
    void set_Rack(Rack gameRack);
    bool check_other_dimension(Board board,string word,int row,int col,bool horizontal);
    vector<Play> check_words(Board&board,vector<pair<string,vector<int> > > returnedWords,int row,int col,bool horizontal);
    ~MoveGenerate();
};