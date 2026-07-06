#include <stdio.h>
#include <ctype.h>

int main()
{
   int d1,d2,d3,d4,d5,d6,d7,d8,a1,a2,a3,a4,a5,a6,a7,a8;
   int min_delta,dep_h,dep_m,arr_h,arr_m,t,h,m,closest_dep,closest_arr;
   char *dep_suffix, *arr_suffix, c;

   d1 = 8*60;     a1=10*60+16;
   d2 = 9*60+43;  a2=11*60+52;
   d3 = 11*60+19; a3=13*60+31;
   d4 = 12*60+47; a4=3*60;
   d5 = 14*60;    a5=16*60+8;
   d6 = 15*60+45; a6=17*60+55;
   d7 = 19*60;    a7=21*60+20;
   d8 = 21*60+45; a8=23*60+58;

   printf("Enter a 12-hour time (hh:mm am/pm): ");
   scanf("%d:%d %c",&h,&m,&c);
    c = tolower(c);
    if (c=='p' && h!=12)
    t = (12+h)*60+m;
    else t = h*60+m;


   closest_arr=a1;
   closest_dep=d1;

   if (t>d1){
    min_delta = t-d1;
   }
   else {
    min_delta=d1-t;
   }

   if (t>d2){
    if (t-d2<min_delta){
        min_delta=t-d2;
        closest_arr=a2;
        closest_dep=d2;
        }
    }
    else if(d2-t<min_delta){
        min_delta=d2-t;
        closest_arr=a2;
        closest_dep=d2;
    }

    if (t>d3){
    if (t-d3<min_delta){
        min_delta=t-d3;
        closest_arr=a3;
        closest_dep=d3;
        }
    }
    else if(d3-t<min_delta){
        min_delta=d3-t;
        closest_arr=a3;
        closest_dep=d3;
    }

    if (t>d4){
    if (t-d4<min_delta){
        min_delta=t-d4;
        closest_arr=a4;
        closest_dep=d4;
        }
    }
    else if(d4-t<min_delta){
        min_delta=d4-t;
        closest_arr=a4;
        closest_dep=d4;
    }

    if (t>d5){
    if (t-d5<min_delta){
        min_delta=t-d5;
        closest_arr=a5;
        closest_dep=d5;
        }
    }
    else if(d5-t<min_delta){
        min_delta=d5-t;
        closest_arr=a5;
        closest_dep=d5;
    }

    if (t>d6){
    if (t-d6<min_delta){
        min_delta=t-d6;
        closest_arr=a6;
        closest_dep=d6;
        }
    }
    else if(d6-t<min_delta){
        min_delta=d6-t;
        closest_arr=a6;
        closest_dep=d6;
    }

    if (t>d7){
    if (t-d7<min_delta){
        min_delta=t-d7;
        closest_arr=a7;
        closest_dep=d7;
        }
    }
    else if(d7-t<min_delta){
        min_delta=d7-t;
        closest_arr=a7;
        closest_dep=d7;
    }

    if (t>d8){
    if (t-d8<min_delta){
        min_delta=t-d8;
        closest_arr=a8;
        closest_dep=d8;
        }
    }
    else if(d8-t <min_delta){
        min_delta=d8-t;
        closest_arr=a8;
        closest_dep=d8;
    }

    dep_h = closest_dep/60%12;
    dep_h = dep_h==0 ? 12 : dep_h;
    dep_m = closest_dep%60;
    dep_suffix = closest_dep/60 <12 ? "a.m." : "p.m.";

    arr_h = closest_arr/60%12;
    arr_h = arr_h==0 ? 12 : arr_h;
    arr_m = closest_arr%60;
    arr_suffix = closest_arr/60 < 12 ? "a.m." : "p.m.";

    printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s",dep_h,dep_m,dep_suffix,arr_h,arr_m,arr_suffix);

    return 0;

   }

