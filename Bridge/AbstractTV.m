//
//  AbstractTV.m
//  Bridge
//
//  Created by Terwer Green on 16/6/1.
//  Copyright © 2016年 Terwer Green. All rights reserved.
//

#import "AbstractTV.h"

@implementation AbstractTV

- (void)switchChannel {
    NSLog(@"切换频道，由具体的子类来实现");
}

- (void)adjustVolume {
    NSLog(@"调节音量，由具体的子类来实现");
}

- (void)powerSwitch {
    NSLog(@"电源开关，由具体的子类来实现");
}

@end
