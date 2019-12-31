
------------------------------------------
5th Asprova Programming Contest Visualizer
------------------------------------------

使い方
・index.htmlとindex.jsを同じディレクトリに入れてください。
・index.htmlをブラウザで開き、input fileに入力データファイルを、output fileに出力データファイルを指定するとガントチャートを表示します。大きいファイルだとやや時間がかかることがあります。Google Chromeではドラッグアンドドロップに対応しております。
・各工程の上にマウスを乗せると再早開始日時、納期などのラインがガントチャート上に表示され、また詳細情報のポップアップがデフォルトでは右下に表示されます。
・工程をクリックすることでその工程を選択でき、その状態で表示モードを切り替えると割付け可能な資源、及び出力ファイルにおいて割付けている資源を抽出して表示することができます。
・何らかの工程を選択した状態で詳細情報のポップアップをドラッグすることで、好きな位置にポップアップを移動させることができます。
・納期遅れが発生しているオーダに関しては、'!'がそのオーダの工程の上に表示されます。
・画面右上にあるボタンでチャートを拡大縮小できます。
・チャートをドラッグする、またはマウスホイールを動かすことで表示位置を変更できます。

使用上の注意
・このビジュアライザはすべてのブラウザで作動することを保証していません。推奨ブラウザはGoogle Chrome、動作ブラウザはMozilla FireFox、Microsoft Edgeです。
・このビジュアライザで計算された得点が、AtCoder上で計算される得点と一致することは保証されていません。大きな実数を扱った場合、有効桁数の問題で差異が出ることがあります。
・自分のプログラムの出力データの評価はoutput_checker.cppを使用し、ビジュアライザはあくまで出力データの視覚化のための補助的なツールとして使って頂けると幸いです。　
・output_checker.cppとビジュアライザの評価結果が異なる場合はoutput_checker.cppの方を信用してください。
・特にプログラムの出力データが制約を満たしていない場合、ビジュアライザの動作は未定義です。

ライセンス
・© Asprova Corporation
・MIT License (URL: https://opensource.org/licenses/mit-license.php)
・longcontest visualizer framework を使って作成しています。(URL: https://github.com/kmyk/longcontest-visualizer-framework)
・デザインや初期のコードは rco-contest-2019 を参考にさせて頂きました。(URL: https://github.com/recruit-communications/rco-contest-2019)

------------------------------------------

HOW TO USE
・Put index.html and index.js into the same folder.
・Open index.html in a browser, and specify input data file and output data file to display the Gantt chart. Large files may take some time. Google Chrome supports drag and drop.
・When you hover the mouse over each process, line corresponding to start time will be isplayed on Gantt chart, and various details will be displayed on popup.
・By clicking a process, you can select that process. Switching the display mode while selecting a process you can determine possible resource that can be assigned, and resources that are assigned in the output file.
・You can move the popup to any position by dragging it while selecting process.
・For orders with late delivery '!' mark will be displayed above the order's process.
・You can zoom the chart by clicking buttons at the top right of the page.
・You can change chart diaplay position by dragging it or by moving the mouse after click on the wheel button.

USAGE NOTES
・The visualizer is not guaranteed to work on all browsers. Recommended browser are Google Chrome, it also works on Mozilla FireFox、Microsoft Edge.
・The score calculated with this visualizer is not guaranteed to match the score calculated on AtCoder. When dealing with large real numbers, there may be differences due to precision limitations.
・Use output_checker.cpp to evaluate the output data of your program. Consider visualizer as an auxiliary tool for visualizing the output data.
・If the evaluation results of output_checker.cpp and the visualizer are different, please trust output_checker.cpp.
・The behavior of the visualizer is undefined, when the output data of the program does not meet the constraints.

License agreement
・© Asprova Corporation
・MIT License (URL: https://opensource.org/licenses/mit-license.php)
・Created using the longcontest visualizer framework. URL: https://github.com/kmyk/longcontest-visualizer-framework)
・Design and initial code were taken from rco-contest-2019.(URL: https://github.com/recruit-communications/rco-contest-2019)
