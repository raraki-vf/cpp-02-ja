#include "people.hpp"

Person::Person() {
    name = "hogehoge";
}

Person::Person(std::string init_name) :Person() {
    name = init_name;
}

void Person::set_name(std::string p_name) {
    name = p_name;
}

std::string Person::get_name(){
    return name;
}

Team::Team() {
}

Team::Team(Person init_member) :Team() {
    add_member(init_member);
}

void Team::add_member(const Person& person) {
    member.push_back(person);
}

std::vector<Person> Team::get_member() {
    return member;
}

Project::Project() {
}

Project::Project(Team init_team) :Project() {
    add_team(init_team);
}

void Project::add_team(Team team) {
    teams.push_back(team);
}

void Project::add_team_member(int team_num, Person person) {
    teams[team_num].add_member(person);
}

void Project::print_team_members() const {
    int team_num = 0;
    for (Team team : teams){
        std::cout << "Team " << team_num << " members" << std::endl;
        for (Person member : team.get_member()){
            std::cout << member.get_name() << std::endl;
        }
        team_num++;
        std::cout << std::endl;
    }
}