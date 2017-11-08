//
//  BasicPopView.h
//  Desktop_PadHD
//
//  Created by iOSMax on 16/4/28.
//  Copyright © 2016年 iOSMax. All rights reserved.
//

#import <UIKit/UIKit.h>



typedef enum : NSUInteger {
    /** 默认 渐显 */
    PopAnimation_Fade   = 0,
    /** 右边出现 */
    PopAnimation_Right,
    /** 底部弹出 */
    PopAnimation_Bottom,
    /** 顶部弹出 */
    PopAnimation_Top,
    
} PopAnimationType;

typedef enum : NSUInteger {
    /** 默认 透明黑 */
    BcViewType_Black = 0,
    /** 模糊 */
    BcViewType_Blur,
} BcViewType;


typedef void(^PopViewWillDisappear)(void);
@interface BasicPopView : UIView

@property (nonatomic, strong) UIView *m_bcView;

/**
 *  模糊背景
 */
@property (nonatomic, assign) BOOL m_fuzzyBc;

@property (nonatomic, assign) BOOL m_clearBcColor;

/**
 *  背景是否透明
 */
@property (nonatomic, assign) BOOL m_backClear;
/**
 *  透明区域
 */
@property (nonatomic, assign) CGRect m_transparentFrame;

@property (nonatomic, assign) PopAnimationType m_animationType;

@property (nonatomic, copy) PopViewWillDisappear m_popViewWillDisappear;

/**
 *  背景类型
 */
//@property (nonatomic, strong) UIColor m_bcViewType;


- (void)show;

- (void)close;

- (void)initView;


- (UIViewController *)getAppRootVic;

@end
