//こちらでは値渡しについて
#include <stdio.h>

//関数の処理 返り値 関数名(仮引数){}
//関数の返り値を指定しない場合、voidを指定する
//引数を指定しない場合にもvoidを指定することがある
//Hello Worldと出力する関数
void function1(void) {
    printf("Hello Wolld\n\n");
}

//int型の引数として、int型を返す関数
//引数nの2乗を返す関数
int function2(int n) {
    return n * n;
}

//引数は複数指定することができる
//x * yの計算結果を返す
int function3(int x, int y) {
    return x * y;
}

//返り値(return)は１つしか指定することができない

int main(void) {
    int a, b;
    int ans;

    a = 91;
    b = 5;
    //関数の使用
    //Hello Worldと出力される
    //引数がない関数については()で使う
    function1();
    
    //10を引数として、function2を実行する
    //function2の計算結果がansに代入される
    ans=function2(10);
    printf("ans = %d\n\n", ans);
    
    //function3が実行され、その結果が出力される
    printf("function3(a, b) = %d\n\n", function3(a, b));

    return 0;
}

/*
    練習3-1:double型の変数 radiusを作成し、scanfを用いて値を入力できるようにする
            入力された値を用いて球の体積と表面積を小数第2位まで求める。
            円周率は3.14とする。
            球の体積と表面積それぞれを計算する関数を作って実装しよう。
            関数は２つ。出力はmainで行うようにしてみよう。
    作成例: radius = 5(ここ入力)
            volume = ~~~, surface area = ~~~
*/
