#include<iostream>
#include<vector>
#include<string>

class vertex{
    public:
    float x,y,z;

    vertex(){}
    vertex(float a,float b,float c)
        :x(a),y(b),z(c){

        }
};

std::ostream& operator<<(std::ostream& stream,const vertex& other){
    stream<<other.x<<','<<other.y<<','<<other.z ;
    return stream;
}
int main(){
    std::vector<vertex> vertices;

    vertices.push_back({1,2,3});
    vertices.push_back({4,5,6});

    for(int i=0;i<vertices.size();i++){
        std::cout<<vertices[i]<<std::endl;
    }
    return 0;

}