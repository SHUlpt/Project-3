#ifndef _IDNODE_H
#define _IDNODE_H
#include<iostream>
#include<string>
using namespace std;
struct idNode
{
	string idNum;
	string name;      //姓名
	string gender;    //性别
	string age;         //年龄
	string phoneNum;   //电话号码
	string add;       //地址
	string nativePlace; //籍贯
	idNode();
	idNode(string idN, string N, string G, string Age, string PN, string A, string NP);
};
idNode::idNode()
{
	idNum = "000000000000000000";
	name = "xxx";
	gender = "x";
	age = "0";
	phoneNum = "00000000000";
	add = "xxx路xxx弄xxx号xxx室";
	nativePlace = "x";
}
idNode::idNode(string idN, string N, string G, string Age, string PN, string A, string NP)
{
	idNum = idN;
	name = N;
	gender = G;
	age = Age;
	phoneNum = PN;
	add = A;
	nativePlace = NP;
}
#endif // !_IDNODE_H#pragma once
