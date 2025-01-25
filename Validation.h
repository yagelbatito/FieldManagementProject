//
// Created by sgvch on 26/02/2024.
//
#include <iostream>
#include "SQLiteCpp/SQLiteCpp.h"
#include <string>
#include <set>
#include <regex> // For regular expressions
#include "Date.h"
#include "DataAccessLayer.h"
#include <ctime>
#include <cctype>
using namespace std;
using namespace SQLite;
#ifndef FIELDMANAGEMENTPROJECT_VALIDATION_H
#define FIELDMANAGEMENTPROJECT_VALIDATION_H

///validation check for register/login
bool check_id(const string& id);
bool check_existing_id_Player(const string& id);
bool check_name(const string& name);
bool check_city(const string& city);
bool check_email(const string& email);
bool check_existing_email(const string& email);
bool check_password(const string& password);
bool check_phone_number(const string& password);
bool check_existing_phone_number(const string& phone_number);
bool check_gender(char gender);
bool check_existing_id_Manager(const string& id);

///validation checks for order new game
bool check_date(const string& date_str);
bool check_time_format(const string& time_str);
bool check_existing_city(string manager_city);
bool check_time_exist(const string& start_time_str, const string& finish_time_str, const string& date_str);
void get_current_date(int& year, int& month, int& day);
string choose_field_id(const string& city, const string& game_type);
string date_to_sqlite_string(const Date& date);
string choose_city_from_list(Database& db);
string choose_field_type_from_list(Database& db);
void cleanBuffer();
int time_to_minutes(const string& time_str);
bool check_overlap(const pair<int, int>& interval1, const pair<int, int>& interval2);
bool isDigitsOnly(const std::string& str);



#endif //FIELDMANAGEMENTPROJECT_VALIDATION_H
