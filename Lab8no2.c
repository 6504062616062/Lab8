#include <stdio.h>

int checkscore(char std[]);
int countNo1Correct(char ans[][10], int n);

char keys[10] = {'D','B','D','C','C','D','A','E','A','D'};

int main() {
    int i;
    char ans[8][10] = {
        {'A','B','A','C','C','D','E','E','A','D'}, //7
        {'D','B','A','B','C','A','E','E','A','D'}, //6
        {'E','D','D','A','C','B','E','E','A','D'}, //5
        {'C','B','A','E','D','C','E','E','A','D'}, //4
        {'A','B','D','C','C','D','E','E','A','D'}, //8
        {'B','B','E','C','C','D','E','E','A','D'}, //7
        {'B','B','A','C','C','D','E','E','A','D'}, //7
        {'E','B','E','C','C','D','E','E','A','D'}  //7
    };
     printf("Number of students correct in No.1 = %d\n",
        countNo1Correct(ans, 8));
       
    

    return 0;
}

int checkscore(char std[]) {
    int score = 0;
    int i;

    for(i = 0; i < 10; i++) {
        if(std[i] == keys[i]) {
            score++;
        }
    }

    return score;
}

int countNo1Correct(char ans[][10], int n) {
    int i, count = 0;

    for(i = 0; i < n; i++) {
        if(ans[i][0] == keys[0]) {
            count++;
        }
    }

    return count;
    
}
