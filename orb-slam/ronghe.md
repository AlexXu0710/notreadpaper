```
LVI-SAM    
官方参考https://github.com/TixiaoShan/LVI-SAM    
创建工作空间    
mkdir catkin_ws    
cd catkin_ws    
mkdir src    
cd src    
catkin_init_workspace    
安装依赖库    
1. 安装gtsam-4.0.3(ubuntu20.04必须安装4.0.3及以上版本)    
wget -P ~/catkin_ws/library https://github.com/borglab/gtsam/archive/4.0.3.zip    
cd ~/catkin_ws/library/gtsam-4.0.3    
mkdir build    
cd build    
cmake -DGTSAM_BUILD_WITH_MARCH_NATIVE=OFF ..    
sudo make install -j4    
2. 安装ceres-1.14.0    
wget -P ~/catkin_ws/library https://github.com/ceres-solver/ceres-solver/archive/1.14.0.zip    
cd ~/catkin_ws/library/ceres-solver-1.14.0    
mkdir build    
cd build    
cmake ..    
sudo make install -j4    
修改    
1. 在lvi-sam目录下的CMakelists.txt中添加如下：    
ADD_COMPILE_OPTIONS(-std=c++11 )    
ADD_COMPILE_OPTIONS(-std=c++14 )    
set( CMAKE_CXX_FLAGS “-std=c++11 -O3” )    
该部分主要是opencv2.x与4.x中对应的头文件命名不一致    
1. 在LVI-SAM/src/lidar_odometry/utility.h中修改：#include <opencv/cv.h> 为 #include <opencv2/opencv.hpp>    
2. LVI-SAM/src/visual_odometry/visual_loop/ThirdParty/DVision/BRIEF.cpp文件添加头文件#include <opencv2/imgproc.hpp>，修改53行CV_RGB2GRAY为 cv::COLOR_RGB2GRAY    
3. LVI-SAM/src/visual_odometry/visual_loop/parameters.h添加头文件#include <opencv2/opencv.hpp>    
4. LVI-SAM/src/visual_odometry/visual_feature/parameters.h添加头文件#include <opencv2/opencv.hpp>    
5. LVI-SAM/src/visual_odometry/visual_loop/keyframe.cpp的240行CV_FONT_HERSHEY_SIMPLEX改为cv::FONT_HERSHEY_SIMPLEX    
6. LVI-SAM/src/visual_odometry/visual_loop/loop_detection.cpp的64， 82， 92， 112， 149行中修改CV_FONT_HERSHEY_SIMPLEX为cv::FONT_HERSHEY_SIMPLEX    
编译时容易因为内存不足造成死机或者编译中断，可以设置虚拟内存保证编译成功率    
编译    
cd ~/catkin_ws/src    
git clone https://github.com/TixiaoShan/LVI-SAM.git    c
d ~/catkin_ws    
catkin_make    
测试    
roslaunch lvi_sam run.launch    
rosbag play garden.bag
```

https://zeal-up.github.io/2023/03/13/lio_sam/intro/

https://zhuanlan.zhihu.com/p/366991604

https://www.guyuehome.com/35709

https://xiaotaoguo.com/p/lio-sam-overview/

https://github.com/XiaotaoGuo/lio-sam-w-comments