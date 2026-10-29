#include<bits/stdc++.h>
using namespace std;

signed main()
{
    random_device rnd;
    mt19937 rng(rnd());
    auto uid = uniform_int_distribution<int>(1, 10000);

    printf("Checking...\n");

    system("> ./data/data.ans");
    system("> ./data/data.out");
    system("g++ gen.cpp -std=c++14 -static -O2 -o gen");
    system("g++ force.cpp -std=c++14 -static -O2 -o force");
    system("g++ main.cpp -std=c++14 -static -O2 -o main");

    auto start = chrono::steady_clock::now();

    system("./run.sh");
    // int val = 0;

    // while(++val <= 10000)
    // {
    //     int ramd = uid(rng);
    //     system(("bash -c './gen > ./data/data.in <<< " + to_string(ramd) + "'").c_str());
    //     // system("./force < ./data/data.in > ./data/data.ans");
    //     // system("./main < ./data/data.in > ./data/data.out");
    //     // if(system("diff ./data/data.ans ./data/data.out"))
    //     // {
    //     //     printf("WA, val = %d, checking done.\n", val);
    //     //     break;
    //     // }
    //     if(system("bash -c 'diff <(./force < ./data/data.in) <(./main < ./data/data.in) -q'"))
    //     {
    //         system("./force < ./data/data.in > ./data/data.ans");
    //         system("./main < ./data/data.in > ./data/data.out");
    //         printf("WA, val = %d, checking done.\n", val);
    //         break;
    //     }
    //     if (val % 100 == 0)
    //         printf("AC! val = %d\n", val);
    // }
    auto end = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);


    printf("Time consumed: %.3f s\n", double(duration.count()) / 1000000);

    return 0;
}

//g++ rand.cpp -std=c++14 -static -O2 -o rand 2> /dev/null
