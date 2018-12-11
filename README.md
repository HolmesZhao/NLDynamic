# NLDynamic

> 逆向 `Near Lock` `App` , [Near Lock](https://nearlock.me/) 是款可以用手机锁屏 `Mac` 电脑的, 通过蓝牙判断距离, 来达到即走即锁, 即来即开

## 场景
公司是指纹打卡, 总是忘记下班打卡, 导致自己焦头烂额, 本来逆向微信电脑端, 增加了下班提醒推送

![image](https://user-images.githubusercontent.com/19728934/49783226-1703b800-fd54-11e8-8b79-8c1a9ccc7dab.png)

可是后来发现还是总忘记, 最近实在是没办法, 想了新的办法, 自己写一个 `MacOS` 和 `iOS` 通信的软件, 然后通过蓝牙判断电脑和手机的距离, 结果发现资源太少了, 没能写出来和 `Near Lock` 类似的东西, 只好逆向 `Near Lock` 加入我想要的部分, 还是挺坎坷的😂

## 实现结果

![image](https://user-images.githubusercontent.com/19728934/49783599-4535c780-fd55-11e8-946b-1ffcda3a4a27.png)
![image](https://user-images.githubusercontent.com/19728934/49783618-567ed400-fd55-11e8-82a2-544e7966ed80.png)

## 内容

* 上图的小助手, 提醒的优先级要高于关机, 也就是只有开启提醒关机才会执行
* `0.8m` 就是手机和电脑的距离, 会有点延迟, 但是还好不大, 比如我公司打卡位置和办公室门口距离我的电脑大概三米左右, 这个距离需要实测一下, 不要目测, 这个软件怎么计算的不清楚
* `Ping Phone` 就是我要提醒手机的操作, `APP` 自带的是叮叮叮的声音, 我把音效替换成了"支付宝到账100万元"
* 只要上班就打开电脑, 会自动打开这个软件, 手机需要手动打开一下, 要想后台模式要花钱升级 `Pro`, 我不想花这个钱
* 到了设定好的下班时间, 只要距离超过设定的距离, 就会有手机响起"支付宝到账100万元"以及20秒后电脑关机操作, 这样人走电脑自动关机, 还不忘记打卡

## 我的环境
* [MonkeyDev, 忘记是 4.3 还是 4.4 的版本了](https://github.com/AloneMonkey/MonkeyDev)
* Xcode 10
* macOS Mojave
* Near Lock macOS APP 5.0
* Near Lock iOS APP 5.0

## 代码

* 在 `NLDynamic.m` 中实现主要操作, 如下是配置的参数, 修改响应参数即可
![image](https://user-images.githubusercontent.com/19728934/49784276-aced1200-fd57-11e8-88f5-bfe400ca1f8a.png)

  * `nl_hour` 下班时间, 24小时制
  * `nl_distance` 手机与电脑的距离 
  * `nl_shutdownTime` 多久后关机, 单位是秒, 切记这个时间不要设置太短, 不然容易开机就关机死循环, 很烦, 时间长一点如果出现开机就关机可以将 APP 及时删除
  * `playSoundTime` 播放声音时间 我用的支付宝到账时间是五秒
  * `playSoundTimeFlag` 记录播放时间, 播放完记得重置为播放时间, 做递减操作
  * `ddf` 距离差 用于保证计算不失误

* 本来有写点击下班提醒那个按钮就弹出一个窗口, 进行管理这些参数, 但是这个逆向没到位, 不知道为什么在这个 `APP` 上除了 `Alert` 都不能弹出, 其中包括我写好的本地通知, 以及下图窗口, 如果有哪位大神看到, 麻烦帮忙看下, 对于 macOS 开发不怎么了解
![image](https://user-images.githubusercontent.com/19728934/49784583-c6428e00-fd58-11e8-8513-b298dc52fe45.png)

* 最后, 我使用的 `macOS` 和 `iOS` 版本的 `Near Lock` 的 `APP` 都已经上传在 `GitHub`, `iOS` 的在 `iOS APP` 目录下, `macOS` 的在 `Target APP` 目录下


