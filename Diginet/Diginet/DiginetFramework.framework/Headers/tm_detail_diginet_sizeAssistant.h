//
//  tm_detail_diginet_sizeAssistant.h
//  知足
//
//  Created by chenmangue on 16/7/30.
//  Copyright © 2016年 NANA admin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "tm_detail_diginet_netProtocol.h"
typedef void(^pageWillClose)();

extern NSString *  const tmDiginetFootSizeNotification;

@interface tm_detail_diginet_sizeAssistant : UIViewController

@property (nonatomic, weak) id<tm_detail_diginet_netProtocol> diginetprotocol;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, assign) BOOL isGirl;
@property (nonatomic, copy) pageWillClose pageWillClose;

@end
