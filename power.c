double Exp(int x) {
double e = 2.718281;
double sum=1.0;
int i;
int flag=0;

if (x<0) {
x=x*-1;
flag=1;
}
for (i=1 ; i<=x; i++) {
sum=sum*e;
}
if (flag==1) return (1/sum);
return sum;
}


double Pow(double x , int y)  {
int i;
double sum=1.0;
int flag =0;

if (y == 0) return 1.0;
if (y<0) {
y=y*-1;
flag=1;
}

for (i=1; i<=y; i++) {
sum= sum*x;
}
if (flag==1) return (1/sum);
return sum;	

}

