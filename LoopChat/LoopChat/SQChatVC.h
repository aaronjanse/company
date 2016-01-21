//
//  SQChatVC.h
//  LoopChat
//
//  Created by XinJinquan on 2016/1/18.
//  Copyright © 2016年 XinJinquan. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol SQChatViewDelegate <NSObject>

- (NSString *)avatarWtihChatter:(NSString *)chatter;
- (NSString *)nickNameWithChatter:(NSString *)chatter;

@end
@interface SQChatVC : UIViewController
@property (strong, nonatomic) IBOutlet UITableView *chatTableView;
@property (nonatomic, strong) NSMutableArray *rowData;
@property (nonatomic, strong) NSMutableArray *dataSource;
@property (nonatomic) BOOL inInvisble;
@property (nonatomic, assign) id <SQChatViewDelegate> delegate;
- (void)reloadData;
- (void)hideImagePicker;

- (void)sendTextMessage:(NSString *)textMessage;
- (void)sendImageMessage:(NSString *)image;
- (void)sendLocationLatitude:(double)latitude
                   longitude:(double)longitude
                  addAddress:(NSString *)address;
- (void)addMessage:(EMMessage *)message;
- (EMMessageType)messageType;
@end
