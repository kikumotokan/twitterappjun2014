//
//  WebViewController.h
//  LeHuyTran2.0
//
//  Created by Codeal on 2014/06/21.
//  Copyright (c) 2014年 Kan KIkumoto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic, strong) NSURL *openURL;

@end
