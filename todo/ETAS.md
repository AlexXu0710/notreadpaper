# guide

[星期五 14:26] JIN Longan (XC-AS/EDB2-CN)

[Package -- Diag Communication - XC-DX/EDB-CN - Docupedia (bosch.com)](https://inside-docupedia.bosch.com/confluence/display/EBR/Package+--+Diag+Communication)



[Pacakge -- VRTE component - XC-DX/EDB-CN - Docupedia (bosch.com)](https://inside-docupedia.bosch.com/confluence/display/EBR/Pacakge+--+VRTE+component)



**O:\Engineering\domain\DA\04_Driving\03_BSW\12_J6E\J6E_CP_AP_Autosar**

O:\Engineering\domain\DA\04_Driving\03_BSW\00_BSW_General\01_Knowledge_Center\AUTOSAR_Adaptive_Platform\03_Reference

O:\Engineering\domain\DA\04_Driving\03_BSW\00_BSW_General\00_Tools\ETAS\VRTE_v2022-09-07T1558\vrte_doc



https://inside-docupedia.bosch.com/confluence/display/EBR/01+ETAS+RTA-VRTE+Env+setup#id-01ETASRTAVRTEEnvsetup-envsetup

https://inside-docupedia.bosch.com/confluence/display/VC4BEG/VRTE

https://inside-docupedia.bosch.com/confluence/display/VC4BEG/Introduction+to+RTA_VRTE_EAP

https://inside-docupedia.bosch.com/confluence/pages/viewpage.action?pageId=3274232086

# ETAS

易特驰是全球领先的**嵌入式软件开发**与汽车信息安全解决方案和服务提供商。易特驰集团成立于1994年，是罗伯特·博世集团的全资子公司。作为一家系统供应商，易特驰提供整套的工具和工具解决方案，同时也提供工程服务、咨询、培训和支持等服务。ESCRYPT，则致力于提供完整的物联网安全解决方案。

ETAS软件通常用于**汽车电子系统的仿真、调试、测量和校准**等方面。它们可以帮助工程师优化发动机控制单元、车辆网络通信、车身电子系统等各个方面。ETAS提供的工具和服务涵盖了整个汽车电子开发周期，从概念设计到最终产品的生产。具体来说，ETAS的产品和软件可能包括用于虚拟测试、实时仿真、数据采集与分析、通信协议分析、以及嵌入式系统开发的工具。这些工具的使用有助于确保汽车电子系统的性能、稳定性和安全性。



## AUTOSAR

![2024-04-03_10h00_46](C:\Users\ubw1szh\Desktop\assets\2024-04-03_10h00_46.png)

![2024-04-03_10h03_50](C:\Users\ubw1szh\Desktop\assets\2024-04-03_10h03_50.png)

![2024-04-03_10h04_22](C:\Users\ubw1szh\Desktop\assets\2024-04-03_10h04_22.png)

![2024-04-03_10h05_35](C:\Users\ubw1szh\Desktop\assets\2024-04-03_10h05_35.png)

![2024-04-03_10h08_19](C:\Users\ubw1szh\Desktop\assets\2024-04-03_10h08_19.png)

AUTOSAR：标准，格式，中间键

Adaptive AUTOSAR

Adaptive AUTOSAR是一个官方定义的术语，将其描述为 “用于自适应应用程序（ARA）的AUTOSAR运行时。提供两种类型的接口，即服务和API，该平台由功能集群组成，这些功能集群又分组在服务中，并且构成了自适应AUTOSAR基础” 。

## RTA-VRTE——基于AUTOSAR自适应标准的微处理器汽车中间件

### 概况，官方

https://etas.services/zh/products/rta-vrte.php

一款可为您的车辆计算机和中央域控制器提供所需的所有便利和基本相关功能的中间件。

配备微处理器的车辆计算机是现在和未来网络化和自动化驾驶 E/E 架构的核心组件。其先决条件是安全可靠的中间件，使得车辆制造商和服务提供商能够专注于他们的软件应用功能。

**中间件必须支持以下功能：**

- 可灵活高效地集成具有不同安全要求的跨域功能；

- 可在一个ECU 上清楚地将软件与不同供应商分开；
- 在整个车辆生命周期中具备持续安全更新能力；
- 支持软件和服务领域的新商业模式。
- 此外，还需满足传统的车辆要求：

**满足最高安全性要求；**

1. 具备实时能力，即使在多次软件更新后（不受干扰）；
2. 具有成本效益 ；
3. 生命周期内车辆软件具有可维护性。

为了应对这些挑战，ETAS 提供了基于自适应 AUTOSAR 的 RTA-VRTE （车辆运行环境）。VRTE的建立原则是面向服务的架构（ SOA ），所以能够在 ECU 上集成不同供应商的软件构建基块（服务）。如有必要,虚拟机监控程序(第三方提供）可以分离不同安全级的功能，最高可达 ASIL D级，并支持持续的空中安全软件更新（OTA)。】

**优点：**

- 、·


### OVERVIEW

![2024-04-02_10h03_14](C:\Users\ubw1szh\Desktop\assets\2024-04-02_10h03_14.png)

![2024-04-02_10h05_30](C:\Users\ubw1szh\Desktop\assets\2024-04-02_10h05_30.png)
