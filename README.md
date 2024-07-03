## コマンド
cd 
`cd C:\Users\F\qmk_firmware\keyboards`
コンパイル
`qmk compile -kb sherie -km default `

## memo

USBとかの周りはGNDベタにしたほうがいいかも。
udb-sのPCBを参照。

## Ref
https://note.com/copkbd/n/n587afde1812e

ATMEGA32U4直付の手順は以下を参照します。
https://wiki.ai03.com/books/pcb-design/chapter/pcb-designer-guide

https://taro-hayashi.github.io/LetsMakeaKeypadWithAtmega32u2/

typeC周りの回路
https://github.com/Unified-Daughterboard/UDB-S

静電気対策（特に金属ケースの場合は参照）
https://gist.github.com/s-show/286ffb1f5d9c886b514ff7a37e6d8d37

ベタGNDとか
https://taro-hayashi.github.io/LetsMakeaKeypadWithAtmega32u2/