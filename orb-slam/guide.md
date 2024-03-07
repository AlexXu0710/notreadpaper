# link

https://blog.csdn.net/kuvinxu/category_11957094.html

http://t.csdnimg.cn/dkPw7



https://blog.51cto.com/u_14439393/5732302

https://vincentqin.tech/posts/orb-slam3/

https://blog.csdn.net/weixin_45947476/article/details/123595935

https://blog.csdn.net/weixin_45947476/category_11603869.html

https://apollo.baidu.com/community/online-course/1#course_review

http://t.csdnimg.cn/GDqaN

https://medium.com/@sallyrobotics.blog/a-review-on-orb-slam-2-paper-3554d4fcaa7c

**https://zhuanlan.zhihu.com/p/452256687**

# guidelines

1. Lidar-visual fusion SLAM

orbslam3, LVI-SAM, FASTLIO2, R3Live++ , data processing, 不同场景的预处理，针对于相机和LiDAR不同场景的失效。

2. visual SLAM

orbslam3, map reconstruction (glass, semantic)。

SDF-SLAM: A Deep Learning Based Highly Accurate SLAM Using Monocular Camera Aiming at Indoor Map Reconstruction With Semantic and Depth Fusion
https://ieeexplore.ieee.org/document/9686720

https://github.com/hku-mars

DROID-SLAM: Deep Visual SLAM for Monocular, Stereo, and RGB-D Cameras 纯端到端的单目SLAM 稠密图建立

A survey of state-of-the-art on visual SLAM (2022)

https://www.sciencedirect.com/science/article/pii/S0031320321000091 Visual SLAM for robot navigation in healthcare facility

2D LiDAR and Camera Fusion in 3D Modeling of Indoor Environment

TextSLAM: Visual SLAM With Semantic Planar Text Features https://ieeexplore.ieee.org/document/10285400

https://www.researchgate.net/publication/338580865_Visual-LiDAR_SLAM_with_loop_closure

LiDAR-Camera Calibration using 3D-3D Point
correspondences

https://zhuanlan.zhihu.com/p/620343641


https://mp.weixin.qq.com/s/Ni5w-8eveGMhx4U6a8KdIQ

# orbslam3 -official

https://github.com/UZ-SLAMLab/ORB_SLAM3

本文介绍了 ORB-SLAM3，这是**首个能够使用单目、立体和 RGB-D 摄像机 the first system able to perform visual, visual-inertial and multi-map SLAM with monocular, stereo and RGB-D cameras, using pin-hole and fisheye lens models**，利用针孔和鱼眼镜头模型执行视觉、视觉-惯性和多地图 SLAM 的系统。第一个主要创新点是基于特征的视觉-惯性 SLAM 系统，**该系统完全依赖于最大后验（MAP）估计**，甚至在 IMU 初始化阶段也是如此。因此，该系统能在室内和室外、小型和大型环境中稳健地实时运行，其精确度是以往方法的 2 到 5 倍。第二个主要**创新点是多地图系统，**它依赖于一种新的地点识别方法，具有更高的召回率。得益于此，ORB-SLAM3 能够在长时间视觉信息不足的情况下生存：当迷路时，它会启动一个新地图，当再次访问地图区域时，该地图将与之前的地图无缝合并。与只使用最后几秒信息的视觉里程测量系统相比，ORB-SLAM3 是第一个能在所有算法阶段重复使用所有先前信息的系统。这就允许在捆绑调整中包含共同可见的关键帧，从而提供高视差观测，提高精确度，即使这些关键帧在时间上相距甚远或来自上一次测绘工作。我们的实验表明，在所有传感器配置下，ORB-SLAM3 的鲁棒性都不亚于现有文献中的最佳系统，而且精度更高。值得注意的是，我们的立体惯性 SLAM 在 EuRoC 无人机上实现了 3.6 厘米的平均精度，在 TUM-VI 数据集（AR/VR 场景的代表）的房间内快速手持运动下实现了 9 毫米的平均精度。为了社区的利益，我们公开了源代码。

ORB-SLAM3 is the first real-time SLAM library able to perform **Visual, Visual-Inertial and Multi-Map SLAM** with **monocular, stereo and RGB-D** cameras, using **pin-hole and fisheye** lens models. In all sensor configurations, ORB-SLAM3 is as robust as the best systems available in the literature, and significantly more accurate.

# ubuntu 20.04+ORB_SLAM3 无坑 有版本

https://blog.csdn.net/kuvinxu/category_11957094.html

```
 ubuntu: 20.04
 gcc: 9.4.0
 cmake:3.23.2
 opencv: 4.5.5
 eigen3: 3.3.7
Pangolin: v0.6 (注意：高版本的库不能工作)
boost: 1.79.0
ORB_SLAM3： V1.0, December 22th, 2021

```

待测试

# 一文详解orbslam3-- 没读完

https://blog.51cto.com/u_14439393/5732302

**他是第一个基于特征的紧耦合的VIO系统，仅依赖于最大后验估计(包括IMU在初始化时)。**这样一个系统的效果就是：不管是在大场景还是小场景，室内还是室外都能鲁棒实时的运行，在精度上相比于上一版提升了2到5倍。本文的第二个创新点是**根据改进recall的新的重定位模块来构建的混合地图，因为这个模块他可以让ORB-SLAM3在特征不是很好的场景中长期运行**：当里程计失败的时候，系统会重新构建地图并将这个地图和原来构建的地图对齐。和那些仅利用最新的几帧数据的里程计相比，ORB-SLAM3是第一个能够在所有算法阶段重用所有先前信息的系统。这样的机制就可以在BA的时候用有共视关系的关键帧，即使两帧在时间相差很远，或者来自原来的建图过程。

它允许在BA中匹配并使用执行三种数据关联的先前观测值：

- 短期数据关联：在最新的几秒中匹配地图元素。就像是VO中做的一样，丢掉那些已经看不到的帧，这会导致有累计的漂移。
- 中期数据关联：匹配相机累计误差小的地图，这也可以用在BA中，当系统在已经建好的地图中运行的时候可以达到零漂移。
- 长期数据关联：利用场景重识别来匹配当前的观测和先前的观测，不用管累计误差而且即使跟踪失败也可以实现,长期的匹配可以利用位姿图优化重新设置漂移，为了更准确也可以利用BA。这是SLAM在大场景中精度保证的关键。

![image-20240307134922308](C:\notreadpaper\orb-slam\assets\image-20240307134922308.png)

1. Atlas是一个由一系列离散的地图组成的混合地图。这里会维护一个active map来定位来的新的关键帧，local mapping线程不断的优化更新这个地图。Atlas里面还有non-active地图。这个系统基于词袋模型给系统编码用于重定位、闭环检测和地图融合。

2. 跟踪线程处理传感器信息、实时的计算当前帧和active map的位姿，最小化匹配特征点的重投影误差，这个线程还有一个关键帧筛选的过程。在VIO的模式下，机体的速度和IMU的bias利用惯导的参差来=进行优化。当跟踪线程跟丢的时候，跟踪线程尝试在所有的Alats中完成当前帧的重定位，如股票重定位成功，跟踪就被拉回来了，否则过一段时间activate就会重新存储为non-active，一个新的active map就会被初始化。
3. 局部建图线程添加关键帧和点到active map中，删除多余的帧并使用视觉或者视觉惯导的BA来优化地图，这些都是在一个局部的滑窗中做的。除此之外，在有惯导的情况下，IMU的参数是利用MAP估计来初始化和优化。
4. 闭环检测和地图融合线程在active map和整个Atlas中检测相同的区域。如果相同的区域是在active中，就会执行闭环的过程，如果属于不同的map，他们就会被融合为一个地图。在闭环纠正后，一个全局的BA在一个线程中被触发来优化地图。

相机模型，重定位；视觉惯导slam；地图融合和闭环监测
