//
//  tm_detail_diginet_netProtocol.h
//  知足
//
//  Created by chenmangue on 16/8/2.
//  Copyright © 2016年 NANA admin. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^diginetReturnSusssec)(id data);
typedef void(^diginetReturnFail)(id data);

@protocol tm_detail_diginet_netProtocol <NSObject>

-(void)getSizeByUserID:(NSString *)userId withSex:(NSString *)sex  withItemId:(NSString *)itemId withFootInfo:(NSDictionary *)footInfo success:(diginetReturnSusssec)success fail:(diginetReturnFail)fail;

-(void)clearData:(NSString *)userId success:(diginetReturnSusssec)success fail:(diginetReturnFail)fail;


@end
