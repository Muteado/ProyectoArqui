#include <stdio.h>

int a = 1;
int b = 1;
int c = 1;
int d = 1;
int an = 0;
int bn = 0;
int cn = 0;
int dn = 0;

int A(){
  if ((bn && cn && dn) || (a && cn) || (b && d) || c ){
    printf("Entra en A\n"); }else{ printf("No entra en A\n"); }
  return 0;
}

int B(){
  if ((cn && dn) || (an && bn) || (c && d) || a ){
    printf("Entra en B\n"); }else{ printf("No entra en B\n"); }
  return 0;
}

int C(){
  if (cn || (c && d) || (b && c) || (a && c)){
    printf("Entra en C\n"); }else{ printf("No entra en C\n"); }
  }

int D(){
  if ((an && bn && cn && dn) || (b && cn && d) || (an && bn && c) || (c && dn) || a){
    printf("Entra en D\n"); }else{ printf("No entra en D\n"); }
  }

int E(){
  if ((bn && cn && dn) || (a && b) || (c && dn) || (a && bn && c)){
    printf("Entra en E\n"); }else{ printf("No entra en E\n"); }
  }

int F(){
  if ((cn && dn) || (b && cn) || (b && c && dn) || a){
    printf("Entra en F\n"); }else{ printf("No entra en F\n"); }
  }

int G(){
  if ((an && bn && c) || (b && cn) || (an && b && dn) || a){
    printf("Entra en G\n"); }else{ printf("No entra en G\n"); }
  }

int main(){
  A();
  B();
  C();
  D();
  E();
  F();
  G();
  return 0;

}

