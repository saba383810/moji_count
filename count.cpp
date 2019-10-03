#include<iostream>
#include<unistd.h>
#include<string>
using namespace std;

int main(){
	
	char eiji[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char moji[30];
	int  cnt [26];
	int i,j;
	int wait = 1;
	string ans;
	do{
	//初期化
	for(j=0;j<26;j++) cnt[j] = 0;
	//処理
	cout << "文字列を入力してください。\n最後に終了の合図として「＃」を入力してください" << endl;
	j=0;
	do{
		cin >> moji[j];
		j++;
	}while(moji[j-1] != '#');//「＃」が入力されるまで文字を格納し続ける。
	j=0;
	cout << "あなたの入力した文字は「";
	while(moji[j] != '#'){
		cout << moji[j];
		j++;
	}
	cout << "」ですね。" << endl;
	i = 0;
	cout << "この文字でお調べいたします。よろしいですか？(yes/no)" << endl;
	cin >> ans;
	}while(ans != "yes");
	while(moji[i] != '#'){
		j = 0;
		while(moji[i] != eiji[j]) j++;//同じ文字が見つかるまでインクリメント
		cnt[j]++;
		i++;
	}
	cout << "文字をお調べします!!(>O<)!" << endl;
	sleep(wait);
	cout << "." << endl;
	sleep(wait);
	cout << "." << endl;
	sleep(wait);
	cout << "." << endl;
	sleep(wait);
	cout << "." << endl;
	sleep(wait);
	for(j=0;j<26;j++){
		if(cnt[j] != 0) cout << "文字" << eiji[j] << "," << cnt[j] << endl;
	}
	cout << "文字は昇順に並べておきました！" << endl;
	cout << "ご利用ありがとうございます！" << endl;
}
