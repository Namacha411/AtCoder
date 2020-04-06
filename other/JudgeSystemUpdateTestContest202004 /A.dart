import 'dart:io';
import 'dart:math';
import 'dart:core';

main(List<String> args) {
  List<int> a = stdin.readLineSync().split(" ").map((i) => int.parse(i)).toList();

  if(a[0] >= a[1] && a[0] <= a[2]){
    print(a[0]);
  }
  else if(a[0] < a[1]){
    print(a[1]);
  }
  else{
    print(a[2]);
  }
}