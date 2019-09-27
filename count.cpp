#include<iostream>
using namespace std;

int main(){
	
	char eiji[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char moji[30];
	int  cnt [26];
	int i,j;
	//初期化
	for(j=0;j<26;j++) cnt[j] = 0;
	//処理
	cout << "文字を一文字ずつ入力してください。\n最後に終了の合図として「＃」を入力してください" << endl;
	j=0;
	do{
		cin >> moji[j];
		j++;
	}while(moji[j-1] != '#');
	j=0;
	cout << "あなたの入力した文字は「";
	while(moji[j] != '#'){
		cout << moji[j];
		j++;
	}
	cout << "」です。" << endl;
	i = 0;
	while(moji[i] != '#'){
		j = 0;
		while(moji[i] != eiji[j]) j++;//同じ文字が見つかるまでインクリメント
		cnt[j]++;
		i++;
	}
	for(j=0;j<26;j++){
		if(cnt[j] != 0) cout << "文字" << eiji[j] << "," << cnt[j] << endl;
	}
}
