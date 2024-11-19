#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long int;
const int N = 1e9+7 ;

void easy()
{
    vector<pair<string,int>>v ;
    v.push_back({"5+3",8}) ;
    v.push_back({"10-4",6}) ;
    v.push_back({"8*2",16}) ;
    v.push_back({"16/4",4}) ;
    v.push_back({"9%4",1}) ;
    v.push_back({"6+7-3",10}) ;
    v.push_back({"3*5-2",13}) ;
    v.push_back({"(8+2)/2",5}) ;
    v.push_back({"15%6",3}) ;
    v.push_back({"10-(3+2)",5}) ;

    while(1)
    {
        int score=0,i ;
        vector<int>vv(5) ;
        for(i=1;i<=5;i++)
        {
            int num=rand()%10 ;
            vv[i-1]=num ;
        }
        for(i=0;i<vv.size();i++)
        {
            int ans ;
            cout << "Evaluate This : " << v[vv[i]].first << " = ?" << endl ;
            cin >> ans ;
            if(ans==v[vv[i]].second)
            {
                cout << "Correct Answer" << endl ;
                score++ ;
            }
            else
            {
                cout << "Wrong Answer" << endl ;
            }
        }
        cout << "Score : " << score << " From 5" << endl ;
        cout << "Do you want to play again ?" << endl ;
        cout << "Press 1 : YES" << endl ;
        cout << "Press 2 : NO" << endl ;
        int start ;
        cin >> start ;
        while(1)
        {
            if(start>=1&&start<=2)
            {
                break ;
            }
            cout << "Invalid Input\nInput Again" << endl ;
            cin >> start ;
        }
        if(start==1)
        {
            continue ;
        }
        else if(start==2)
        {
            break ;
        }
    }
    cout << "Thanks For Playing" << endl ;
}

void medium()
{
    vector<pair<string,int>>v ;
    v.push_back({"25/5+4*3",17}) ;
    v.push_back({"18-(5*2)",8}) ;
    v.push_back({"(12+8)%5",0}) ;
    v.push_back({"6*7-15",27}) ;
    v.push_back({"(10/2)+(8*3)",29}) ;
    v.push_back({"45%(12-7)",0}) ;
    v.push_back({"(5*3)+(10/2)",20}) ;
    v.push_back({"(16+4)/(9%7)",10}) ;
    v.push_back({"(20*2)-(15+3)",22}) ;
    v.push_back({"6+(8*2)-(9/3)",19}) ;


    while(1)
    {
        int score=0,i ;
        vector<int>vv(5) ;
        for(i=1;i<=5;i++)
        {
            int num=rand()%10 ;
            vv[i-1]=num ;
        }
        for(i=0;i<vv.size();i++)
        {
            int ans ;
            cout << "Evaluate This : " << v[vv[i]].first << " = ?" << endl ;
            cin >> ans ;
            if(ans==v[vv[i]].second)
            {
                cout << "Correct Answer" << endl ;
                score++ ;
            }
            else
            {
                cout << "Wrong Answer" << endl ;
            }
        }
        cout << "Score : " << score << " From 5" << endl ;
        cout << "Do you want to play again ?" << endl ;
        cout << "Press 1 : YES" << endl ;
        cout << "Press 2 : NO" << endl ;
        int start ;
        cin >> start ;
        while(1)
        {
            if(start>=1&&start<=2)
            {
                break ;
            }
            cout << "Invalid Input\nInput Again" << endl ;
            cin >> start ;
        }
        if(start==1)
        {
            continue ;
        }
        else if(start==2)
        {
            break ;
        }
    }
    cout << "Thanks For Playing" << endl ;
}

void hard()
{
    vector<pair<string,int>>v ;
    v.push_back({"(48/6)+(5*4)-(18%7)",24}) ;
    v.push_back({"[(36/3)*4]-[50%(8+2)]",48}) ;
    v.push_back({"(14+6)/[(8%5)+(9-6)]",3}) ;
    v.push_back({"[(24*3)/(12+4)]+(25%7)",8}) ;
    v.push_back({"100-[(15/3)*(10%6)]",80}) ;
    v.push_back({"[(20%9)+8*2]/(16/4)",4}) ;
    v.push_back({"(5*6)-[(24/4)%(9-6)]",30}) ;
    v.push_back({"[(30*2)-(18+9)]/(21%5)",33}) ;
    v.push_back({"(15+5)*[(20/4)%(12-7)]",0}) ;
    v.push_back({"250/[(45%11)+(8*2)]-(14-9)",20}) ;


    while(1)
    {
        int score=0,i ;
        vector<int>vv(5) ;
        for(i=1;i<=5;i++)
        {
            int num=rand()%10 ;
            vv[i-1]=num ;
        }
        for(i=0;i<vv.size();i++)
        {
            int ans ;
            cout << "Evaluate This : " << v[vv[i]].first << " = ?" << endl ;
            cin >> ans ;
            if(ans==v[vv[i]].second)
            {
                cout << "Correct Answer" << endl ;
                score++ ;
            }
            else
            {
                cout << "Wrong Answer" << endl ;
            }
        }
        cout << "Score : " << score << " From 5" << endl ;
        cout << "Do you want to play again ?" << endl ;
        cout << "Press 1 : YES" << endl ;
        cout << "Press 2 : NO" << endl ;
        int start ;
        cin >> start ;
        while(1)
        {
            if(start>=1&&start<=2)
            {
                break ;
            }
            cout << "Invalid Input\nInput Again" << endl ;
            cin >> start ;
        }
        if(start==1)
        {
            continue ;
        }
        else if(start==2)
        {
            break ;
        }
    }
    cout << "Thanks For Playing" << endl ;
}

int main()
{
    cout << endl << "      MATH GAME       " << endl << endl ;
    cout << "Choose Your Difficulty Settings : \n" << endl ;
    vector<string>diff={"Easy","Medium","Hard"} ;
    int i,d ;
    for(i=0;i<diff.size();i++)
    {
        cout << "Press " << i+1 << " : " << diff[i] << endl ;
    }
    cin >> d ;
    while(1)
    {
        if(d>=1&&d<=3)
        {
            break ;
        }
        cout << "Invalid Input\nInput Again" << endl ;
        cin >> d ;
    }
    if(d==1)
    {
        easy() ;
    }
    else if(d==2)
    {
        medium() ;
    }
    else if(d==3)
    {
        hard() ;
    }
    return 0 ;
}

