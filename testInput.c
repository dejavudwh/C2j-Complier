void print(char a[20], char c);

void f(int x, short y, long z) {
    enum e {a , b, c};

    struct TAG {
        int v1;
        int v2;
        char v3;
    } tag;

    struct TAG myTag;
    struct TAG herTag;
    myTag.v1 = 1;
    herTag.v1 = 2;

    int a = 0;
    int x = 0;

    if (x < 1)
        a = 1;
    else if (x < 2)
        a = 2;
    else
        a = 3;

    int i;
    for (i = 0; i < 3; i++) {
        int a =2;
    }

    int time;
    while (1) {
        print("Being parsed %d", time);
    }

    switch(a) {
       case 1:
           print("1");
           break;
       case 2:
           print("2");
           break;
     }

    return;
}