//
//  EHCircularProgressView.h
//  ChatKit-OC
//
//  Created by 岳琛 on 2017/9/11.
//  Copyright © 2017年 ElonChan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EHCircularProgressView : UIView

@property(nonatomic, strong) UIColor *trackTintColor UI_APPEARANCE_SELECTOR;
@property(nonatomic, strong) UIColor *progressTintColor UI_APPEARANCE_SELECTOR;
@property(nonatomic, strong) UIColor *innerTintColor UI_APPEARANCE_SELECTOR;

@property(nonatomic) NSInteger roundedCorners UI_APPEARANCE_SELECTOR;
@property(nonatomic) CGFloat thicknessRatio UI_APPEARANCE_SELECTOR;
@property(nonatomic) NSInteger clockwiseProgress UI_APPEARANCE_SELECTOR;

@property(nonatomic) CGFloat progress;
@property(nonatomic) CGFloat indeterminateDuration UI_APPEARANCE_SELECTOR;
@property(nonatomic) NSInteger indeterminate UI_APPEARANCE_SELECTOR;

- (void)setProgress:(CGFloat)progress animated:(BOOL)animated;
- (void)setProgress:(CGFloat)progress animated:(BOOL)animated initialDelay:(CFTimeInterval)initialDelay;
- (void)setProgress:(CGFloat)progress animated:(BOOL)animated initialDelay:(CFTimeInterval)initialDelay withDuration:(CFTimeInterval)duration;

@end
