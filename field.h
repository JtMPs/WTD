#pragma once
#include <utility>
#include <vector>

class Field {
public:
    enum Object {platform};
    using object = std::pair<Object, std::pair<int, int>>;
    enum Edge {left, right, up, down};  
    Field(std::vector<object> objects) : objects(objects) {}
    Field(std::vector<object> objects, std::pair<Field*, Edge> neigbours[4])
        : objects(objects) {for(int i = 0; i < 4; i++) this->neighbours[i] = neigbours[i];}
    void set_neighbour(Edge e, Field * f, Edge ef) { neighbours[e] = std::make_pair(f, ef); }
    std::pair<Field*, Edge> get_edge(Edge e) {return neighbours[e];}
private:
    std::pair<Field*, Edge> neighbours[4];  
    std::vector<object> objects;
};
