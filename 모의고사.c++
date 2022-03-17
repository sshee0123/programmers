#include <string>
#include <vector>
using namespace std;

//수포자 3명 규칙
int p1[5] = {1,2,3,4,5};
int p2[8] = {2,1,2,3,2,4,2,5};
int p3[10] = {3,3,1,1,2,2,4,4,5,5};
    
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> score = {0,0,0};
    int max_score = 0;
    
    //완전 탐색
    for(int i=0; i<answers.size();i++){
        if (answers[i] == p1[i%5])
            score[0]++;
        if (answers[i] == p2[i%8])
            score[1]++;
        if (answers[i] == p3[i%10])
            score[2]++;
    }
    max_score = max(max(score[0],score[1]), score[2]);

    for(int i=0; i<score.size();i++){
        if (score[i] == max_score){
            answer.push_back(i+1);
        }
    }
    
    return answer;
}
