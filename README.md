TDDBC for gcc with Boost.Test
================================

これは、 g++ と Boost.Test を使用した C++ プロジェクトテンプレートです。

## 動作環境

* -std=gnu++11 オプションが使用可能な g++
 * g++ 4.8 で動作確認しました
* 今のところ cmake 必須
 * TODO: Makefile の作成
* Boost 1.54.0
 * プロジェクト直下の CMakeLists.txt に記述されている Boost のバージョンを変更すれば、別のバージョンでも動きます

## ビルド とか

### Linux

```bash
mkdir build
cd build
cmake ..
make
./test/sample_test
```

### MinGW

```bash
mkdir build
cd build
cmake .. -G "MinGW Makefiles"
make
./test/sample_test
```

## ライセンス

修正 BSD ライセンス(New BSD License) です。
詳しくはプロジェクト直下の LICENSE を読んでください。
