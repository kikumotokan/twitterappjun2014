//
//  TimeLineCell.h
//  LeHuyTran2.0
//
//  Created by Codeal on 2014/06/21.
//  Copyright (c) 2014年 Kan KIkumoto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimeLineCell : UITableViewCell

@property (nonatomic, strong) UILabel *tweetTextLabel;
@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, strong) UIImageView *profileImageView;
@property (nonatomic) CGFloat tweetTextLabelHeight;

@end
