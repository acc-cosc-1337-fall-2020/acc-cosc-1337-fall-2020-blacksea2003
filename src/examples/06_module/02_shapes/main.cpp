//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
using std::unique_ptr; using std::make_unique;

int main() 
{
	unique_ptr<Shape> shape = make_unique<Circle>();
	shape -> draw();

	unique_ptr<Shape> shape = make_unique<Line>();
	Line -> draw();

	std::cout<<"\n\n";

	std::vector<unique_ptr<Shape>> shapes;
	shapes.push_back(std::move(circle));

	shapes.push_back(std::move(line));

	for(auto& shape: shapes){
		shape->draw();
	}

	return 0;
}