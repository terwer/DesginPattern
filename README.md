---
layout:     post
title:      "iOS设计模式"
subtitle:   "iOS Desgin-Pattern"
date:       2016-08-01 10:12:00
author:     "Terwer Green"
header-img: "img/2016-08-01-ios-desgin-pattern.jpg"
tags:
- Objective-C
- iOS
- Desgin-Pattern
---

# 常用的 23 种设计模式

设计模式总概况：

![](http://78rdf9.com1.z0.glb.clouddn.com/2016-05-31_152500.png)

经典的《设计模式》一书归纳出23种设计模式

## 创建型模式
>6种，其中5种包括在23种GOF设计模式之中，简单工厂模式不属于23种GOF设计模式之一

社会化的分工越来越细，自然在软件设计方面也是如此，因此对象的创建和对象的使用分开也就成为了必然趋势。因为对象的创建会消耗掉系统的很多资源，所以单独对对象的创建进行研究，从而能够高效地创建对象就是创建型模式要探讨的问题。这里有6个具体的创建型模式可供研究，它们分别是：

[**简单工厂模式（Simple Factory）**](https://github.com/terwer/DesginPattern/tree/master/SimpleFactory)

![](http://www.terwer.com/img/simpleFactory.png)

简单工厂模式是属于创建型模式，但不属于23种GOF设计模式之一。简单工厂模式是由一个工厂对象决定创建出哪一种产品类的实例。简单工厂模式是工厂模式家族中最简单实用的模式，可以理解为是不同工厂模式的一个特殊实现。

>**说明：严格来说，简单工厂模式不是GOF总结出来的23种设计模式之一。**

### [单例模式（Singleton）](https://github.com/terwer/DesginPattern/tree/master/Singleton)

![](http://my.csdn.net/uploads/201204/02/1333348032_1491.jpg)

保证一个类仅有一个实例，并提供一个访问它的全局访问点。

### [原型模式（Prototype）](https://github.com/terwer/DesginPattern/tree/master/Prototype)

![](http://my.csdn.net/uploads/201204/02/1333348002_1920.jpg)

用原型实例指定创建对象的种类，并且通过拷贝这些原型创建新的对象。

### [工厂方法模式（Factory Method）](https://github.com/terwer/DesginPattern/tree/master/FactoryMethod)

![](http://my.csdn.net/uploads/201204/02/1333347948_2280.jpg)

定义一个用于创建对象的接口，让子类决定实例化哪一个类。工厂方法使一个类的实例化延迟到其子类。

### [抽象工厂模式（Abstract Factory）](https://github.com/terwer/DesginPattern/tree/master/AbstractFactory)

![](http://my.csdn.net/uploads/201204/02/1333347971_2990.jpg)

提供一个创建一系列相关或相互依赖对象的接口，而无需指定它们具体的类。

### [建造者模式（Builder）](https://github.com/terwer/DesginPattern/tree/master/Builder)

![](http://my.csdn.net/uploads/201204/02/1333347984_5022.jpg)

将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。

## 结构型模式

>7种

在解决了对象的创建问题之后，对象的组成以及对象之间的依赖关系就成了开发人员关注的焦点，因为如何设计对象的结构、继承和依赖关系会影响到后续程序的维护性、代码的健壮性、耦合性等。对象结构的设计很容易体现出设计人员水平的高低，这里有7个具体的结构型模式可供研究，它们分别是：

### [适配器模式（Adapter）](https://github.com/terwer/DesginPattern/tree/master/Adapter)

![](http://my.csdn.net/uploads/201204/02/1333348086_9735.jpg)

将一个类的接口转换成客户希望的另外一个接口。Adapter 模式使得原本由于接口不兼容而不能一起工作的那些类可以一起工作。

### [桥接模式（Bridge）](https://github.com/terwer/DesginPattern/tree/master/Bridge)

![](http://my.csdn.net/uploads/201204/02/1333348092_2737.jpg)

将抽象部分与它的实现部分分离，使它们都可以独立地变化。

### [组合模式（Composite）](https://github.com/terwer/DesginPattern/tree/master/Composite)

![](http://my.csdn.net/uploads/201204/02/1333348099_8238.jpg)

将对象组合成树形结构以表示‘部分-整体’的层次结构。组合模式使得用户对单个对象和组合对象的使用具有一致性。

### [装饰模式（Decorator）](https://github.com/terwer/DesginPattern/tree/master/Decorator)

![](http://my.csdn.net/uploads/201204/02/1333348106_5577.jpg)

动态地给一个对象添加一些额外的职责，就增加功能来说，装饰模式比生成子类更为灵活。

### [外观模式（Facade）](https://github.com/terwer/DesginPattern/tree/master/Facade)

![](http://img.my.csdn.net/uploads/201204/02/1333348111_7885.jpg)

为子系统中的一组接口提供一个一致的界面，此模式定义了一个高层接口，这个接口使得这一子系统更加容易使用。

### [享元模式（Flyweight）](https://github.com/terwer/DesginPattern/tree/master/Flyweight)

![](http://img.my.csdn.net/uploads/201204/02/1333348170_8879.jpg)

运用共享技术有效地支持大量细粒度的对象。

### [代理模式（Proxy)](https://github.com/terwer/DesginPattern/tree/master/Proxy)

![](http://img.my.csdn.net/uploads/201204/02/1333348116_9640.jpg)

为其他对象提供一种代理以控制对这个对象的访问。

## 行为型模式

>11种

在对象的结构和对象的创建问题都解决了之后，就剩下对象的行为问题了，如果对象的行为设计的好，那么对象的行为就会更清晰，它们之间的协作效率就会提高，这里有11个具体的行为型模式可供研究，它们分别是：

### [职责链模式（Chain of Responsibility）](https://github.com/terwer/DesginPattern/tree/master/Chain)

![](http://img.my.csdn.net/uploads/201204/02/1333348141_1360.jpg)

使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。将这个对象连成一条链，并沿着这条链传递该请求，直到有一个对象处理它为止。

### [命令模式（Command）](https://github.com/terwer/DesginPattern/tree/master/Command)

![](http://img.my.csdn.net/uploads/201204/02/1333348147_7873.jpg)

将一个请求封装为一个对象，从而使你可用不同的请求对客户进行参数化；对请求排队或记录请求日志，以及支持可撤销的操作。

### 解释器模式（Interpreter）

给定一个语言，定义它的文法的一种表示，并定义一个解释器，这个解释器使用该表示来解释语言中的句子。

### 迭代器模式（Iterator）

提供一种方法顺序访问一个聚合对象中各个元素，而又不暴露该对象的内部表示。

### 中介者模式（Mediator）

用一个中介对象来封装一系列的对象交互。中介者使各对象不需要显式地相互引用，从而使其耦合松散，而且可以独立地改变它们之间的交互。

### 备忘录模式（Memento）

在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。这样以后就可将该对象恢复到原先保存的状态。

### 观察者模式（Observer）

定义了一种一对多的依赖关系，让多个观察者对象同时监听某一个主题对象。这个主题对象在状态发生变化时，会通知所有观察者对象，使它们能够自动更新自己。

### 状态模式（State）

当一个对象的内在状态改变时允许改变其行为，这个对象看起来像是改变了其类。

### 策略模式（Strategy）

它定义了算法家族，分别封装起来，让它们之间可以互相替换，此模式让算法的变化，不会影响到使用算法的客户。

### 模板方法模式（Template Method）

定义一个操作中的算法的骨架，而将一些步骤延迟到子类中。模板方法使得子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤。

### 访问者模式（Visitor）

表示一个作用于某对象结构中的各元素的操作。它使你可以在不改变各元素的类的前提下定义作用于这些元素的新操作。


# 设计模式的基本原则
设计模式的基本原则非常重要，只要真正深入地理解了设计原则，很多设计模式其实就是原则的应用而已，或许在不知不觉中就在使用设计模式了,下面是设计模式6大原则：

>单一职责原则（SRP），就一个类而言，应该仅有一个引起它变化的原因。

>里氏代换原则（LSP），子类型必须能够替换掉它们的父类型。

>依赖倒置原则（DIP），A. 高层模块不应该依赖低层模块，两个都应该依赖抽象。B. 抽象不应该依赖细节，细节应该依赖抽象。

>合成/聚合复用原则（CARP），尽量使用合成/聚合，尽量不要使用类继承。

>开放-封闭原则（OCP），是说软件实体（类、模块、函数等等）应该可以拓展，但是不可修改。

>迪米特法则（LoD），如果两个类不必彼此直接通信，那么这两个类就不应当发生直接的相互作用。如果其中一个类需要调用另一个类的某一个方法的话，可以通过第三者转发这个调用。

# 参考

[Cocoa如何应用设计模式](http://www.cnblogs.com/pengyingh/articles/2346299.html)

[iOS开发框架中的设计模式](http://diytz.me/design-partens-in-iOS/)

[设计模式总结](http://www.cnblogs.com/chenssy/p/3357683.html)

[设计模式学习－简单工厂模式](http://www.cnblogs.com/kdalan/archive/2012/05/30/2524979.html)

[IOS开发之单例设计模式（完整正确版本）](http://www.cnblogs.com/JackieHoo/p/5050010.html)

[IOS设计模式浅析之原型模式(Prototype)](http://www.cnblogs.com/eagle927183/p/3462439.html)

[iOS 原型模式](http://www.jianshu.com/p/5de56efccdea)

[iOS设计模式(03):工厂方法](http://www.cocoachina.com/ios/20130516/6219.html)

[IOS设计模式浅析之抽象工厂模式(Abstract Factory)](http://www.cnblogs.com/eagle927183/p/3479644.html)

[iOS设计模式之：建造者模式Builder Pattern,用于改进初始化参数](http://www.cnblogs.com/wengzilin/p/4365855.html)

[IOS设计模式浅析之建造者模式(Builder)](http://www.cnblogs.com/eagle927183/p/3468340.html)

[iOS设计模式-适配器](http://lastdays.cn/2016/02/29/Adapter/)

[iOS设计模式——桥接模式](http://my.oschina.net/daguoshi/blog/500403)

[Objective-C 设计模式－组合模式 (Composite)](http://www.cnblogs.com/markhy/archive/2013/06/12/3132355.html)

[iOS设计模式——组合模式](http://my.oschina.net/daguoshi/blog/504704)

[iOS设计模式学习---装饰模式](http://morisunshine.com/ios/ios_decorator/)

[IOS设计模式浅析之外观模式(Facade)](http://www.cnblogs.com/eagle927183/p/3511876.html)

[iOS设计模式——享元模式](http://www.mamicode.com/info-detail-1037340.html)

[iOS常用设计模式之委托模式](http://www.beyondabel.com/blog/2013/10/31/ios-proxymode/)

[iOS应用设计模式开发中职责链(责任链)模式的实现解析](http://www.zhougaga.com/ios/36431.html)

[iOS设计模式 - 命令模式](https://yq.aliyun.com/articles/37261)



