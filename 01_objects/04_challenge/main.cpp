#include "people.hpp"

int main() {
    Person hoge = Person();
    Person fuga = Person("fugafuga");
    Person foo = Person("foo");
 
    Team team = Team();
    team.add_member(hoge);
    team.add_member(fuga);

    Project project = Project();
    project.add_team(team);
    project.add_team_member(0, foo);
    project.print_team_members();

    return 0;
}