#pragma once
#include <iostream>
#include <string>
#include <vector>

class Person {
    std::string name;

    public:
        Person();
        Person(std::string init_name);
        void set_name(std::string p_name);
        std::string get_name();
};

class Team {
    std::vector<Person> member;
    
    public:
        Team();
        Team(Person init_member);
        void add_member(const Person& person);
        std::vector<Person> get_member();
};

class Project {
    std::vector<Team> teams;

    public:
        Project();
        Project(Team init_team);
        void add_team(Team team);
        void add_team_member(int team_num, Person person);
        void print_team_members() const;

};
