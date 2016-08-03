# このソフトウェアについて #

StyleGuide201607301718は私個人が学習目的で作成したソフトウェアです。

[Google C++スタイルガイド](http://www.textdrop.net/google-styleguide-ja/cppguide.xml)をみてWndProcのclass化を修正しました。

# 開発環境 #

* Windows XP SP3
* C++/Win32
* Visual C++ 2010 Express

# 修正 #

* class型のstaticメンバ変数をポインタ型に修正してnew/deleteのタイミングを明記できるようにした
* 関数の引数にconstリファレンス(`const &`)を用いた
* 1つのWindowだけを生成する

# イメージ #

## 実行 ##

![完成図](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160726/20160726213827.png)

# ライセンス #

このソフトウェアはCC0ライセンスです。

[![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png "CC0")](http://creativecommons.org/publicdomain/zero/1.0/deed.ja)
