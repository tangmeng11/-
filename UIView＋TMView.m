//
//  UIView＋TMView.m
//  02.22-视图切换动画-04
//
//  Created by 唐萌 on 16/2/23.
//  Copyright © 2016年 唐萌. All rights reserved.
//

#import "UIView＋TMView.h"

@implementation UIView(TMView)

-(void)addTransitionAnimationWithDuration:(double)duration type:(TMTransitionType)transitionType directionTpye:(TMTransitionDirection)direction
{
    //1.创建一个切换动画对象
    CATransition * transition = [CATransition animation];
    //2.设置动画时间
    transition.duration = duration;
    //3.设置动画类型
    NSArray * typeArray = @[kCATransitionPush,kCATransitionMoveIn,kCATransitionPush,kCATransitionReveal,@"pageCurl",@"pageUnCurl",@"rippleEffect",@"suckEffect",@"cube",@"ogFlip",@"cameraIrisHollowOpen",@"cameraIrisHollowClose"];
    
    transition.type = typeArray[transitionType];
    
    //4.设置动画方向
    NSArray * directionArray = @[kCATransitionFromRight,kCATransitionFromLeft,kCATransitionFromTop,kCATransitionFromBottom];
    
    transition.subtype = directionArray[direction];
    
    //5.添加动画(只是视图控制器的view来调用)
    [self.window.layer addAnimation:transition forKey:nil];
    
}

@end
