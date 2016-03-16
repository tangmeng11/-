//
//  UIView＋TMView.h
//  02.22-视图切换动画-04
//
//  Created by 唐萌 on 16/2/23.
//  Copyright © 2016年 唐萌. All rights reserved.
//

#import <UIKit/UIKit.h>
//kCATransitionFade  交叉淡化过度
//    kCATransitionMoveIn  新视图移到就视图上
//    kCATransitionPush   新视图把旧视图推出去
//    kCATransitionReveal  将就视图移开，显示下面的新视图
//pageCurl            向上翻一页
//     pageUnCurl          向下翻一页
//     rippleEffect        滴水效果
//     suckEffect          收缩效果，如一块布被抽走
//     cube                立方体效果
//     oglFlip             上下翻转效果
//cameraIrisHollowOpen  打开相机的效果
//cameraIrisHollowClose 关闭相机的效果
//


typedef enum : NSUInteger {
    TMTransitionFade, //交叉淡化过度
    TMTransitionMoveIn,//新视图移到就视图上
    TMTransitionPush, //新视图把旧视图推出去
    TMTransitionReveal,//将就视图移开，显示下面的新视图
    TMTransitionPageCurl, //向上翻一页
    TMTransitionPageUnCurl, //向下翻一页
    TMTransitionRippleEffect,//滴水效果
    TMTransitionSuckEffect,//收缩效果，如一块布被抽走
    TMTransitionCube,//立方体效果
    TMTransitionOglFlip,//上下翻转效果
    TMTransitionCameraIrisHollowOpen,//打开相机的效果
    TMTransitionCameraIrisHollowClose//关闭相机的效果
} TMTransitionType;

typedef enum : NSUInteger {
    TMTransitionFromRight,
    TMTransitionFromLeft,
    TMTransitionFromTop,
    TMTransitionFromBottom,
} TMTransitionDirection;


@interface UIView(TMView)

-(void)addTransitionAnimationWithDuration:(double)duration type:(TMTransitionType)transitionType directionTpye:(TMTransitionDirection)direction;

@end
