#ifndef _IDNODE_H
#define _IDNODE_H
#include<iostream>
#include<string>
using namespace std;
struct idNode
{
	string idNum;
	string name;      //����
	string gender;    //�Ա�
	string age;         //����
	string phoneNum;   //�绰����
	string add;       //��ַ
	string nativePlace; //����
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
	add = "xxx·xxxŪxxx��xxx��";
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
