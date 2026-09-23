/*
ID: odiedo11
LANG: C++17
TASK: transform
*/

#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream fin("transform.in");
    ofstream fout("transform.out");
    int n;
    fin >> n;
    vector<string> grid1;
    for(int i = 0; i < n;i++){
        string input;
        fin >> input;
        grid1.push_back(input);
    }
    vector<string> grid2;
    for(int i = 0 ; i < n; i++){
        string input;
        fin >> input;
        grid2.push_back(input);
    }
    bool control = false;
    int ans = 0;
    bool case1 = true;
    while (case1 == true){
        for(int i = 0;i < n;i++){
            for(int k = 0;k<n;k++){
                if(grid1[i][k] != grid2[k][n-i-1]){
                    case1 = false;
                    break;
                }
            }
        }
        if(case1 == true){
            ans = 1;
            control = true;
            case1 = false;
        }
    }
    bool case2 = true;
    if(control == true){
        case2 = false;
    }
    while (case2 == true){
        for(int i = 0;i< n;i++){
            for(int k = 0;k<n;k++){
                if(grid1[i][k] != grid2[n-i-1][n-k-1]){
                    case2 = false;
                    break;
                }
            }
        }
        if(case2 == true){
            ans = 2;
            control = true;
            case2 = false;


        }
    }

    bool case3 = true;
    if(control == true){
        case3 = false;
    }
    while (case3 == true){
        for(int i = 0;i< n;i++){
            for(int k = 0;k < n;k++){
                if(grid1[i][k] != grid2[n-k-1][i]){
                    case3 = false;
                    break;
                }
            }
        }
        if(case3 == true){
            ans = 3;
            control = true;
            case3 = false;
        }
    }

    bool case4 = true;
    if(control == true){
        case4 = false;
    }
    while (case4 == true){
        for(int i = 0;i< n;i++){
            for(int k = 0;k<n;k++){
                if(grid1[i][k] != grid2[i][n-k-1]){
                    case4= false;
                    break;
                }
            }
        }
        if(case4 == true){
            ans = 4;
            control = true;
            case4 = false;

        }
    }


    bool case5 = true;
    if(control == true){
        case5 = false;
    }
    while (case5 == true){
        for(int i = 0;i< n;i++){
            for(int k = 0;k<n;k++){
                if(grid1[i][k] != grid2[n-k-1][n-i-1]){
                    case5 = false;
                    break;
                }
            }
        }
        if(case5 == true){
            ans = 5;
            control = true;
            case5 = false;

        }
    }
    bool case6 = true;
    if(control == true){
        case6 = false;
    }
    while (case6 == true){
        for(int i = 0;i< n;i++){
            for(int k = 0;k<n;k++){
                if(grid1[i][k] != grid2[k][i]){
                    case6= false;
                    break;
                }
            }
        }
        if(case6 == true){
            ans = 5;
            control = true;
            case6 = false;

        }
    }

    bool case7 = true;
    while (case7 == true){
        for(int i = 0;i< n;i++){
            for(int k = 0;k<n;k++){
                if(grid1[i][k] != grid2[i][n-k-1]){
                    case7= false;
                    break;
                }
            }
        }
        if(case7 == true){
            ans = 6;
            case7 = false;

        }
    }

    if(ans == 0){
        fout << "7" <<"\n";
    }
    else{
        fout << ans << "\n";
    }
}