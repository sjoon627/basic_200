#include <stdio.h>
#include <utility>
using namespace std;
 
int main(void){
    
    //-----------------------------------
    //        make_pair 사용
    //-----------------------------------
    pair<int, int> p1;
    p1 = make_pair(10, 20);
 
    //-----------------------------------
    //        생성자를 이용
    //-----------------------------------
    pair<int, int> p2(30,40);
    
    //-----------------------------------
    //        pair 내부에 pair 가능
    //-----------------------------------
    pair<pair<int, int>, pair<double, double>> pp2;
 
    scanf("%d %d", &pp2.first.first, &pp2.first.second);
    scanf("%lf %lf", &pp2.second.first, &pp2.second.second);
 
    printf("%d %d\n", pp2.first.first, pp2.first.second);
    printf("%lf %lf\n", pp2.second.first, pp2.second.second);
 
}
