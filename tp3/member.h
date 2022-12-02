#ifndef MEMBER_H_INCLUDED
#define MEMBER_H_INCLUDED

const int Max = 6;

struct member{
    int IDNumber;
    float Poin[Max];
};

void inputData (member &MB);
float ratarata (member MB);
void showData(member MB);



#endif // MEMBER_H_INCLUDED
