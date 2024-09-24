* **仓库说明**
远程仓库：https://github.com/huangyangl/ardupilot.git
远程仓库 huangyangl/ardupilot.git Fork自上游仓库：https://github.com/ArduPilot/ardupilot
* **分支说明**
截止2024.7.2，共建立3个分支：master、adrc-1.0、SunHiTech
master分支负责与上游仓库的master保持同步更新，在Github上使用 sync fork 实现。注意，从不准其他分支merge到master分支！
adrc-1.0分支开发了角速率环的adrc控制器。
SunHiTech分支创建自adrc-1.0分支，目前主要开发了包括 adrc + OEM + RPLidar noise filter 等新功能。在SunHiTech公司研发的无人机固件主要在SunHiTech分支上做开发！
* **如何更新上游仓库的最新代码进本地分支？**
例如，需要将上游仓库【https://github.com/ArduPilot/ardupilot】的最新代码更新进本地分支SunHiTech，步骤大致如下：
1.在Github上用sync fork按钮将上游仓库【https://github.com/ArduPilot/ardupilot】的最新代码拉取到【https://github.com/huangyangl/ardupilot.git】的master分支中。
2.将【https://github.com/huangyangl/ardupilot.git】的master分支pull到本地仓库的master分支中。
3.将本地仓库的master分支merge到本地的SunHiTech分支，这一步骤你可能要手动解决冲突后提交。
4.运行./waf submodule_force_clean 或 git submodule update --init --recursive更新仓库子模块。
5.编译验证代码是否有问题
4.将merge成功的SunHiTech分支push到远程仓库。
* **编译固件**
./waf configure --board=SunHiTech  --enable-custom-controller
./waf copter 