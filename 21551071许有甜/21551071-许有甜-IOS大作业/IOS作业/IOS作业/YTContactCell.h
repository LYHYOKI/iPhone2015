//
//  YTContactCell.h
//  IOS作业
//
//  Created by Lynn on 15/12/30.
//  Copyright © 2015年 xu. All rights

#import <UIKit/UIKit.h>
@class YTContact;
@interface YTContactCell : UITableViewCell

@property (nonatomic, strong) YTContact *contact;

+(instancetype)cellWithTableView:(UITableView *)tableView;

@end
