#include <stdio.h>
#include <string.h>
#include <windows.h>
char name[20], passwd[8];
int sword,shield, healp, ragep, maxhealp, hardp, atkrate, defrate;//armor,boots;
long money, hp, maxhp, tsteps;
void Type(const char * p){

    if(NULL == p)
        return;

    while(*p){
        printf("%c\xDB", *p++);
        Sleep(20);
        printf("\b \b");
        Sleep(20);
    }
    Sleep(300);
}
int main()
{
    int  step, numchoice, lghp, f;
    char choice;
    FILE *login, *ngame;
    healp=1;
    //goto walk;
    s0:
        system("title MAIN MENU");
        //system("mode con cols=110 lines=52");
        system("cls");
        system("color 0d");
        printf("\n");
        printf("\t\t    MMMMMMMMMM  AAAAAAAA  IIIIIIII   NNNN   NN\n");
        printf("\t\t    MM  MM  MM  AA    AA     II      NN NN  NN\n");
        printf("\t\t    MM  MM  MM  AAAAAAAA     II      NN  NN NN\n");
        printf("\t\t    MM      MM  AA    AA  IIIIIIII   NN   NNNN\n");
        printf("\n");
        printf("\t\t    mmmmmmmmmm  eeeeeeee  nnnn    nn  uu    uu\n");
        printf("\t\t    mm  mm  mm  ee        nn nn   nn  uu    uu\n");
        printf("\t\t    mm  mm  mm  eeeeeeee  nn  nn  nn  uu    uu\n");
        printf("\t\t    mm  mm  mm  ee        nn   nn nn  uu    uu\n");
        printf("\t\t    mm  mm  mm  eeeeeeee  nn    nnnn  uuuuuuuu\n");
        printf("\n\n");
        printf("  1.  START      >>\n\n");
        printf("  2.  HELP       %c%c\n\n", 3,3);
        printf("  3.  CREDITS    @@\n\n");
        printf("  4.  EXIT       -_-\n\n");
        printf("\t\t\t\t    >>  ");
        scanf(" %c",&choice);
        switch(choice){

            case '1':{
                goto s1;
            }
            case '2':{
                goto help;

            }
            case '3':{
                goto credits;
            }
            case '4':{
                printf("YOU SURE LOOSER???(y/n)");
                scanf(" %c",&choice);
                if(choice == 'y'){
                    Type("GET THE HELL OUTTA HERE LOOSER");
                    return;
                }
                else if(choice == 'n'){
                    Type("YOU SHOULD NOT PLAY THIS GAME ANYWAY");
                    printf("\n");
                    Type("IF YOU CAN'T MAKE A DESIGEN! NVM");
                }
                else{
                    Type("PUNY HUMAN GO TO GOOGLE AND SEARCH HOW TO PRESS Y OR N");
                    goto s0;
                }
            }
            default:{
                Type("PUNY HUMAN GO TO GOOGLE AND SEARCH HOW TO USE KEYBORD");
                goto s0;
            }
        }

    s1:
    system("cls");
    system("color 0a");
    printf("\n");
    printf("\t\t  ~~~~~~~~~~~~              ~~~~~~~~~~~~  \n");
    printf("\t\t   ~90000006~                ~90000006~   \n");
    printf("\t\t  ~9.      .6~              ~9.      .6~  \n");
    printf("\t\t ~9.        .6~            ~9.        .6~ \n");
    printf("\t\t~9.          .6~          ~9.          .6~\n");
    printf("\t\t(0.  LOGIN   .0)          (0. NEW GAME .0)\n");
    printf("\t\t~9.          .6~          ~9.          .6~\n");
    printf("\t\t ~9.        .6~            ~9.        .6~ \n");
    printf("\t\t  ~9        6~              ~9        6~  \n");
    printf("\t\t   ~90000006~                ~90000006~   \n");
    printf("\n");
    printf("\t\t  ~~~~~~~~~~~~              ~~~~~~~~~~~~  \n");
    printf("\t\t       1.                         2.      \n");
    printf("\n\n\n\n\t\t\t\t>>  ");
    scanf("%d", &numchoice);
    switch(numchoice)
    {
    case 2:
    {
        //FILE *f = fopen("maji.wav", "r");
        //PlaySound("maji.wav", NULL, *f);
        printf("\a\nnew game");
        system("cls");
        goto newgame;
        break;
    }
    case 1:
    {
        printf("\ncontinue");
        system("cls");
        goto conti;
        break;
    //case 3:{
      //  goto start;
    //}
    }
    default:
    {
        printf("\nINVALID ENTRY");
        goto s1;
    }

    }
    credits:
        system("color 0e");
        system("cls");
        printf("\n\n\t\t\t     @@- - - CREDITS - - -@@");
        if(name!=' '){
        printf("\n\n  WELCOME PLAYER");
        printf("\n\n  THIS GAME IS MADE BY VEDARTH JOSHI LMAO");
        printf("\n\n  GAME VERSION v0.0.1");
        scanf(" %c", &choice);
        }
        else printf("hello player");

    help:
        system("cls");
        system("color 1c");
        system("title HELP");
        printf("\n\n\t\t\t\t   - - - HELP - - -");
        scanf(" %c", &choice);

    newgame:
        ngame=fopen("haha.txt", "w");
        money=1000;
        putw(money,ngame);
        hp=100;
        putw(hp,ngame);
        maxhp=150;
        putw(maxhp,ngame);
        tsteps=0;
        putw(tsteps,ngame);
        atkrate=1;
        putw(atkrate,ngame);
        defrate=1;
        putw(defrate,ngame);
        healp=1;
        putw(healp,ngame);
        maxhealp=0;
        putw(maxhealp,ngame);
        ragep=0;
        putw(ragep,ngame);
        hardp=0;
        putw(hardp,ngame);
        system("color 0c");
        printf("\n\n\t\t\t\t---NEW GAME---");
        printf("\n\nENTER YOUR USERNAME\t>>    ");
        scanf("%s", &name);
        printf("\n\nEnter Your Password    \t>>    ");
        scanf("%s", &passwd);
        Type("\n\nWould You like to read the prologue?  (y/n)");
        printf("\n\n\t\t\t>>    ");
        //fflush();
        //gets(choice);
        scanf(" %c", &choice);
        if(choice == 'Y' || choice == 'y'){
            goto prologue;
        }
        else if(choice == 'N' || choice == 'n')
        {
            goto start;
        }
        return;
    conti:

        printf("continue");

    prologue:

        system("cls");
        system("color 70");
        printf("\n\n\t\t\t\t----Prolougue----\n\n");
        Type("You are");
        printf(" %s ", name);
        Type("born in medieval time, you were living with a caravan your job");
        printf("\n");
        Type("was to cut the wood and gather it whenever the caravan stops.");
        printf("\n\n\n");
        Type("everything was normal until once you saw a portal in the middle");
        printf("\n");
        Type("of the foreast");
        system("color 0d");
        system("cls");
        printf("\n\n\n");
    printf("\t\t\t\t  ~~~~~~~~~~~~              \n");
    printf("\t\t\t\t   ~90000006~               \n");
    printf("\t\t\t\t  ~9.      .6~              \n");
    printf("\t\t\t\t ~9.        .6~             \n");
    printf("\t\t\t\t~9.          .6~            \n");
    printf("\t\t\t\t(0.  PORTAL  .0)            \n");
    printf("\t\t\t\t~9.          .6~            \n");
    printf("\t\t\t\t ~9.        .6~             \n");
    printf("\t\t\t\t  ~9        6~              \n");
    printf("\t\t\t\t   ~90000006~               \n");
    printf("\n");
    printf("\t\t\t\t  ~~~~~~~~~~~~              \n");
    printf("\nWOULD YOU LIKE TO ENTER THE PORTAL(y/n)\?");
        scanf(" %c", &choice);
        if(choice == 'Y' || choice == 'y'){
            goto start;
        }
        else if(choice == 'N' || choice == 'n')
        {
            printf("\n\nfine You ended your life cutting woods lol");
            getch();
        }
        return;

    start:
        f=3;
        system("cls");
        system("color 0a");
        printf("\n\n\t\t\t\t---NOREST TOWN---");
        printf("\n\n\n");
        printf("\t1. Walk\n\n");
        printf("\t2. Fortress\n\n");
        printf("\t3. Store\n\n");
        printf("\t4. Haste Of Heal\n\n");
        printf("\t5. Use Itm\n\n");
        printf("\t6. Check Status\n\n");
        printf("\t7. Save Game\n\n");
        printf("\t\t\t\t>>   ");
        scanf("%d", &choice);
        switch(choice){

            case 1:{

                goto walk;
            }
            case 2:{

                goto fortress;
            }
            case 3:{

                goto store;
            }
            case 4:{

                // goto heal1;
            }
            case 5:{

                 goto use;
            }
            case 6:{

                 goto status;
            }
            case 7:{

                // goto save;
            }
            default:{
                goto start;
            }

        }

        fortress:
            system("color 07");
            system("cls");
            printf("MONEY: %ld", money);
            printf("\n\t\t\t\t---FORTRESS---\n");
            printf("  1.\t     ______________________\n");
            printf("\t    |                      \\\n");
            printf("\t====|    -------------------\)\n");
            printf("\t    |______________________/");
            printf("\n\n\tSWORD \tPRICE: 300");
            printf("\n    You have %d sword\n\n", sword);
            printf("  2.\t ___________\n");
            printf("\t|           |\n");
            printf("\t|     |     |\n");
            printf("\t \\    -    /\n");
            printf("\t  \\   |   /\n");
            printf("\t   \\_____/");
            printf("\n\n\tSHIELD\tPRICE: 400");
            printf("\n    You have %d shield\n\n", shield);
            printf("  3.\tback to town\n");
            printf("\t\t\t\t>>   ");
            scanf("%d", &choice);
            switch(choice){

                case 1:{
                    if(money>=300 && sword==0){
                        money=money-300;
                        sword=1;
                        goto fortress;
                    }
                    else{
                        if(money<300){
                            Type("you don't have enough money");
                            goto fortress;
                        }
                        else{
                            Type("You already Have a Sword");
                            goto fortress;
                        }
                    }

                }
                case 2:{
                    if(money>=400 && shield==0){
                        money=money-400;
                        shield=1;
                        goto fortress;
                    }
                    else{
                        if(money<400){
                            Type("you don't have enough money");
                            goto fortress;
                        }
                        else{
                            Type("You already Have a Shield");
                            goto fortress;
                        }
                    }
                }
                case 3:{
                    goto start;
                }
            }
            store:
                fflush(stdin);
                system("color 1e");
                system("cls");
                printf("MONEY: %ld $", money);
                printf("\n\n\t\t\t\t ----STORE----\n");
                printf("\n\n     ---HEALING ITMS---\t\t\t\t    ---KILLING ITMS---\n\n\n");
                printf("  1. HEAL POTION: 100$ heals 100Hp\t\t3. RAGE: 400$ Damage +20%\n\n");
                //printf("");
                printf("  You have %d heal potions    \t\t\tYou have %d RAGE\n\n\n",healp, ragep);
                printf("  2. MAXHEAL   : 1000$ heals max Hp\t\t4. HARDEN: 500$ Defence +20%\n\n");
                //printf("");
                printf("  You have %d MAX HEAL        \t\t\tYou have %d HARDEN\n\n",maxhealp,hardp);
                printf("\t\t\t\t5. GO BACK\n\n");
                printf("\t\t\t\t>>  ");
                scanf(" %c",&choice);

                switch(choice){
                    case '1':{
                        if(money>=100){
                            money=money-100;
                            healp=healp+1;
                            goto store;
                        }
                        else{
                            Type("\nYOU DON'T EVEN HAVE MONEY TO BUY CRAP LMAO");
                            goto store;
                        }
                    }
                    case '2':{
                        if(money>=1000){
                            money=money-1000;
                            maxhealp=maxhealp+1;
                            goto store;
                        }
                        else{
                            Type("\nYOU ARE: NO SON OF ELON MUSK");
                            goto store;
                        }
                    }
                    case '3':{
                        if(money>=400){
                            money=money-400;
                            ragep=ragep+1;
                            goto store;
                        }
                        else{
                            Type("\nNO MONEY NO KILL BOIII - VEDARTH 2022");
                            goto store;
                        }
                    }
                    case '4':{
                        if(money>=500){
                            money=money-500;
                            hardp=hardp+1;
                            goto store;
                        }
                        else{
                            Type("\nHEHE BOIII YOU CAN DIE!!!");
                            goto store;
                        }
                    }
                    case '5':{
                        goto start;
                    }
                    default:{
                        goto store;
                    }
                }

            status:
                system("color 0a");
                system("cls");
                printf("\n\n\n\t\t\t\t---STATUS---\n\n");
                printf("\tName         : %s\n\n", name);
                printf("\tpasswd       : %s\n\n", passwd);
                printf("\tHp           : %ld\n\n", hp);
                printf("\tMoney        : %ld\n\n", money);
                printf("\tEquipments   : ");
                if(sword==1){
                    printf("SWORD");
                }
                if(shield==1){
                    printf("  SHIELD");
                }
                printf("\n\n\tItems        : \n\n");
                printf("\tATTACK RATE  : \n\n");
                printf("\tDEFANCE RATE : \n\n");
                printf("  b for back\n\t\t\t\t>>  ");
                scanf(" %c",&choice);
                if(choice=='b'){
                    goto start;
                }
                else{
                    goto status;
                }

            walk:
                if(tsteps>=100){
                    printf("\n\n");
                    Type("You Reched LMAO town");
                }
                hp=1000;
                f=2;
                system("cls");
                system("title ROAD");
                system("color 0a");
                printf("Hp: %ld", hp);
                printf("\nMONEY %ld", money);
                printf("\n\n\t\tSTEPS: %ld  NEXT TOWN: %ld\n\n\n", tsteps, 100-tsteps);
                printf("\t0.Town\n\n");
                printf("\tENTER STEPS:  ");
                scanf("%d",&step);
                if(step == 0){
                    goto start;
                }
                tsteps=tsteps+step;
                /*step=(step+rand())*rand();
                printf("%d",step);
                printf("\n\n%d\n\n\n\na",step%2);
                Sleep(1000);
                goto walk;*/

                //if(tsteps%2 == 0){
                if(step%2 == 0){
                    goto mob;
                }
                else{
                    goto walk;
                }
            mob:
                system("color 0b");
                system("cls");
                if(tsteps<500){
                        lghp=20;
                        goto lg;
                }
            lg:
                f=1;
                system("title LITTLE GHOST");
                system("cls");
                if(hp<=0){

                    Type("You died");
                    goto walk;
                }
                if(lghp<=0){
                    system("color 0c");
                    system("cls");
                    printf("Hp: %ld", hp);
                    printf("\nMONEY %ld", money);

                    printf("\n\n\n\n\n\n\n");
                    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                    printf("\t\t\t!!! YOU KILLED THE LITTLE GHOST !!!\n\n");
                    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    money=money+10;
                    printf("\n\n\t+ 10 Money\n\n");
                    //printf("Right now you have %ld MONEY", money);
                    //printf("\n\n\n\n\n PRESS ENTER");
                    //fflush(stdin);
                    //getchar();
                    system("pause >nul");
                    //scanf(" %c",&choice);
                    goto walk;
                }
                printf("\n\n\tA LITTLE GHOST HAS APPEARED\n");
                printf("\t\t\t     _______________\n");
                printf("\t\t\t    |               |\n");
                printf("\t\t\t    |               |\n");
                printf("\t\t\t    |    \(\)   \(\)    |\t\t LITTLE GHOST HP: %d\n",lghp);
                printf("\t\t\t    |               |\n");
                printf("\t\t\t     \\             \/\n");
                printf("\t\t\t      |           |\n");
                printf("\t\t\t      |           |\n");
                printf("\t\t\t      |           |\n");
                printf("\t\t\t       \\_________/\n");
                printf("\nWhat Would You like to do\?\n");
                printf("\t\t     __________________________________\n");
                printf("\t\t    |   F.FIGHT               U.USE    |\n");
                printf("\t\t    |                                  |\t Your Hp: %ld\n", hp);
                printf("\t\t    |   T.TIME                R.RUN    |\n");
                printf("\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("\n\t\t\t\t>>  ");
                choice=getchar();
                //scanf(" %c",&choice);
                switch(choice){

                case 'f':{
                    goto fight;
                }
                case 'u':{
                    goto use;
                }
                case 't':{
                    goto skip;
                }
                case 'r':{
                    goto run;
                }
                }
                fight:
                    if(sword!=1 && shield!=1){
                        printf("\nwould you like to fight with your hands?(y/n)");
                        scanf(" %c", &choice);
                        if(choice == 'y'){
                            hp=hp-5;
                            lghp=lghp-10;
                            Type("HANDS: *BRRR*");
                        }
                        goto lg;
                    }
                    else if(sword!=1 && shield==1){
                        lghp=lghp-10;
                        Type("SHIELD: *THUDD*");
                    }
                    else if(sword == 1){
                        Type("SWORD: *SLASH*");
                        lghp=lghp-20;
                        goto lg;
                    }
                use:
                    system("cls");
                    system("color 5a");
                    printf("Hp: %ld\n", hp);
                    printf("MONEY %ld $", money);
                    printf("\n\n\t\t\t\t: Available Items :");
                    if(healp>0){
                        printf("\n\n\t1. HEAL POTION: %d", healp);
                    }
                    if(maxhealp>0){
                        printf("\n\n\t2. MAX HEAL   : %d", maxhealp);
                    }
                    if(ragep){
                        printf("\n\n\t3. RAGE       : %d", ragep);
                    }
                    if(hardp){
                        printf("\n\n\t4. HARDEN     : %d", hardp);
                    }
                        printf("\n\n\tb. Back");
                        printf("\n\n\t\t\t\t >>  ");

                    scanf(" %c", &choice);
                    switch(choice){
                        case '1':{
                            if(healp>0){
                            healp=healp-1;
                            hp=hp+100;
                            Type("used heal POTION");
                            goto use;
                            }
                            else{
                                Type("HEHE MAH BOIII IS BROKE");
                                goto use;
                            }
                        }
                        case '2':{
                            if(maxhealp>0){
                            maxhealp=maxhealp-1;
                            while(hp<maxhp){
                                hp++;
                            }
                            Type("used MAX HEAL POTION");
                            goto use;
                            }
                            else{
                                Type("HEHE BOIII DON'T DAYDREAM");
                                goto use;
                            }
                        }
                        case '3':{
                            if(ragep>0){
                            ragep=ragep-1;
                            atkrate=2;
                            Type("used RAGE");
                            goto use;
                            }
                            else{
                                Type("HERE BOIII MONEYLESS RAGE FO YA");
                                goto use;
                            }
                        }
                        case '4':{
                            if(hardp>0){
                            hardp=hardp-1;
                            defrate=2;
                            Type("used HARDEN");
                            goto use;
                            }
                            else{
                                Type("HEHE SPINELESS BOIII GOT NO DEFANCE");
                                goto use;
                            }
                        }
                        case 'b':{
                            if(f==1){
                                goto lg;
                            }
                            else if(f==2){
                                goto walk;
                            }
                            else if(f==3){
                                goto start;
                            }
                            else{
                                goto start;
                            }
                        }
                        default:{
                            goto use;
                        }
                    }
                    goto lg;
                skip:
                    printf("Would you like to skip the turn?");
                    scanf(" %c", &choice);
                    switch(choice){
                        case 'y':{
                            Type("\nLITTLE GHOST ATTACKED 10 DMG");
                            hp=hp-10;
                            goto lg;
                        }
                        case 'n':{
                            goto lg;
                        }
                    }
                run:
                    printf("Would You like to run away?");
                    scanf(" %c", &choice);
                    switch(choice){
                        case 'y':{
                            goto walk;
                        }
                        case 'n':{
                            goto lg;
                        }
                    }

    return 0;
}
