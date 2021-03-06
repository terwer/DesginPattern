//
//  WebSiteFactory.h
//  FlyweightPattern
//
//  Created by Terwer Green on 16/8/5.
//  Copyright © 2016年 Terwer Green. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WebSiteProtocol.h"

@interface WebSiteFactory : NSObject

@property (nonatomic, strong) NSDictionary *flyweights; //共享对象

- (id<WebSiteProtocol>)getWebSiteCategory:(NSString *)webKey;
- (NSInteger)getWebSiteCount;

@end
