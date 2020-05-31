import 'dart:io';
import 'dart:math';
import 'dart:core';

class Pair{
  int x;
  String c;
  Pair(int x, String c){
    this.x = x;
    this.c = c;
  }
}
main(List<String> args) {
  int n = int.parse(stdin.readLineSync());
  List<Pair> p;
  for(int i = 0; i < n; i++){
    List<String> a = stdin.readLineSync().split(" ");
    p.add(Pair(int.parse(a[0]), a[1]));
  }

  List<int> red, blue;
  for(var t in p){
    if(t.c == "R"){
      red.add(t.x);
    }
    else{
      blue.add(t.x);
    }
  }
  red.sort();
  blue.sort();

  red.forEach((f) => print(f));
  blue.forEach((f) => print(f));
}