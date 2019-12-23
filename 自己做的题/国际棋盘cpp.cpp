#include<stdio.h> 
int main() 
{ 

int a=0,b=0;
int hang,lie;
scanf("%d",&hang);
scanf("%d",&lie);

for(int j=0;j<lie;j++){

if(j%2==0){

for(int i=0;i<hang;i++){
if(a==0){
printf("  ");
a=1;}

if(a==1){
printf("%c",219);
a=0;}

}

}

if(j%2==1){
b=0;
for(int i=0;i<hang;i++){
if(a==0){
printf("%c",219);
a=1;
}
if(a==1){
printf("  ");
a=0;
}



}
}
printf("\n");
}


return 0;

 }
