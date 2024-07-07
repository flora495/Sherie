## コマンド
cd 
`cd /c/Users/F/qmk_firmware/keyboards/sherie`
コンパイル
`qmk compile -kb sherie -km default`
フラッシュ
`qmk flash -kb sherie -km default`

## memo

USBとかの周りはGNDベタにしたほうがいいかも。
udb-sのPCBを参照。

## Ref
[1]https://note.com/copkbd/n/n587afde1812e

ATMEGA32U4直付の手順は以下を参照します。
[2]https://wiki.ai03.com/books/pcb-design/chapter/pcb-designer-guide

[3]https://taro-hayashi.github.io/LetsMakeaKeypadWithAtmega32u2/

typeC周りの回路
[4]https://github.com/Unified-Daughterboard/UDB-S

静電気対策（特に金属ケースの場合は参照）
[5]https://gist.github.com/s-show/286ffb1f5d9c886b514ff7a37e6d8d37

ベタGNDとか
[6]https://taro-hayashi.github.io/LetsMakeaKeypadWithAtmega32u2/

[7]https://qiita.com/Sugimoto_Yuuki/items/860ca6a57c2501f1cbab

## バグ
QMK MSYSでflashできない場合
以下のようなエラーが出てflashに失敗する場合があります。

![alt text](./images/image.png)
<br>
これは実はエラーができても書き込み自体はできているっぽいです。
<br>
エラーなく書き込みたい場合は、QMK Toolboxを使って書き込みます。
<br>
エラーの原因はよくわからないが、おそらくポートのデバイスではなくてUSBデバイスとして認識しているのが原因。
<br>
おそらくですが、USBのドライバーが原因でした。[7]を参照し、ドライバーをWinUSBに書き換えます。こうするとQMK toolboxでエラーなしで読み込むことができるようになりました。
ただし、winUSBにするとQMK MSYSではflashできないぽいです。
ちなみにドライバーを変えるとシリアルポートで認識するようにもでるようにもできるっぽいです。


## 改良点
1. 真ん中にネジ穴追加
1. スタビライザーのネジ穴のワッシャー分もボトムプレートの範囲を広げる
1. 電源のLEDが明るすぎる。暗くするのと、ジャンパでLEDを接続しないこともできるようにする
1. 1.5uのキーにもスタビライザーを追加？