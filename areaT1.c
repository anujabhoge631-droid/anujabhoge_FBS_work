#include<stdio.h>
void area();
void main(){
	area();
}
void area(){
	float radius=10;
	float area=3.14*radius*radius;
	printf("area=%.2f",area);

}