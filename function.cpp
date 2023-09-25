#include <iostream>  

using namespace std;  

void area_circle(double r){  

double area;  

area = 3.14 * r * r;  

cout << area;  

}  

void area_circle(int r){  

int area;  

area = 3.14 * r * r;  

cout << area;  

}  

void area_rectangle(double length, double breadth){  

double area;  

area = length * breadth;  

cout << area;  

}  

void area_rectangle(int length, double breadth){  

double area;  

area = length * breadth;  

cout << area;  

}  

void area_rectangle(double length, int breadth){  

double area;  

area = length * breadth;  

cout << area;  

}  

void area_rectangle(int length, int breadth){  

int area;  

area = length * breadth;  

cout << area;  

}  

void area_triangle(double base, double height){  

double area;  

area = 0.5 * base * height;  

cout << area;  

} 

void area_triangle(int base, double height){ 

double area; 

area = 0.5 * base * height; 

cout << area; 

} 

void area_triangle(double base, int height){ 

double area; 

area = 0.5 * base * height; 

cout << area; 

} 

void area_triangle(int base, int height){ 

int area; 

area = 0.5 * base * height; 

cout << area; 

} 

int main() { 

cout << "1. Circle" << endl << "2. Rectangle" << endl << "3. Triangle" << endl; 

float rad; 

cout << "Enter radius:"; 

cin >> rad; 

cout << "Area of circle:"; 

area_circle(rad); 

cout << endl; 

float length, breadth; 

cout << "Enter length and breadth:"; 

cin >> length >> breadth; 

cout << "Area of rectangle :"; 

area_rectangle(length, breadth); 

cout << endl; 

float base, height; 

cout << "Enter base and height : "; 

cin >> base >> height; 

cout << "Area of triangle :"; 

area_triangle(base, height); 

cout << endl; 

return 0; 

} 
