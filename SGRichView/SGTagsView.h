//
//  SGTagsView.h
//  SGRichViewExample
//
//  Created by kingsic on 2019/6/18.
//  Copyright © 2019年 kingsic. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SGTagsView;

typedef enum : NSUInteger {
    /** 水平样式，默认 */
    SGTagsViewStyleHorizontal,
    /** 垂直样式 */
    SGTagsViewStyleVertical,
    /** 均分样式 */
    SGTagsViewStyleEquable,
} SGTagsViewStyle;
@interface SGTagsViewConfigure : NSObject
/** 类方法 */
+ (instancetype)tagsViewConfigure;
/** SGTagsView 样式 */
@property (nonatomic, assign) SGTagsViewStyle tagsViewStyle;
/** 标签是否能够选择，默认为 YES */
@property (nonatomic, assign) BOOL selected;
/** SGTagsView 是否需要弹性效果，默认为 NO */
@property (nonatomic, assign) BOOL bounces;
/** SGTagsView 是否支持多选，默认为 NO */
@property (nonatomic, assign) BOOL multipleSelected;
/** 标签文字字号大小，默认 15 号字体 */
@property (nonatomic, strong) UIFont *font;
/** 普通状态下标签文字颜色，默认为黑色 */
@property (nonatomic, strong) UIColor *color;
/** 选中状态下标签文字颜色，默认为红色 */
@property (nonatomic, strong) UIColor *selectedColor;
/** 普通状态下标签背景颜色，默认为浅灰色 */
@property (nonatomic, strong) UIColor *backgroundColor;
/** 选中状态下标签背景颜色，默认为白色 */
@property (nonatomic, strong) UIColor *selectedBackgroundColor;
/** 标签边框宽度，默认为 0.0f，取值范围为：0～2.0f */
@property (nonatomic, assign) CGFloat borderWidth;
/** 普通状态下标签边框颜色，默认为白色 */
@property (nonatomic, strong) UIColor *borderColor;
/** 选中状态下标签边框颜色，默认为红色 */
@property (nonatomic, strong) UIColor *selectedBorderColor;
/** 标签圆角大小，默认为 0.0f */
@property (nonatomic, assign) CGFloat cornerRadius;
/** 标签水平之间的间距，默认为 20.0f */
@property (nonatomic, assign) CGFloat horizontalSpacing;
/** 标签垂直之间的间距，默认为 20.0f */
@property (nonatomic, assign) CGFloat verticalSpacing;
/** 标签额外增加的宽度，默认为 40.0f */
@property (nonatomic, assign) CGFloat additionalWidth;
/** SGTagsViewStyleVertical 样式下标签的高度，默认为 30.0f */
@property (nonatomic, assign) CGFloat height;
/** SGTagsViewStyleEquable 样式下标签的列数，默认为 3 */
@property (nonatomic, assign) NSInteger column;
/** 内容视图距离父视图左右边的间距，默认为 10.0f */
@property (nonatomic, assign) CGFloat contentSpacingLR;
/** 内容视图距离父视图上下边的间距，默认为 10.0f */
@property (nonatomic, assign) CGFloat contentSpacingTB;
@end


typedef void(^SGTagsViewSelectedBlock)(SGTagsView *tagsView, NSString *tag, NSInteger index);
typedef void(^SGTagsViewMultipleSelectedBlock)(SGTagsView *tagsView, NSArray *tags, NSArray *indexs);

@interface SGTagsView : UIView
/** 对象方法 */
- (instancetype)initWithFrame:(CGRect)frame configure:(SGTagsViewConfigure *)configure;
/** 类方法 */
+ (instancetype)tagsViewWithFrame:(CGRect)frame configure:(SGTagsViewConfigure *)configure;
/** 标签数组 */
@property (nonatomic, strong) NSArray *tags;
/** 标签选中回调函数 */
@property (nonatomic, copy) SGTagsViewSelectedBlock selectedBlock;
/** 多选标签选中回调函数 */
@property (nonatomic, copy) SGTagsViewMultipleSelectedBlock multipleSelectedBlock;

@end
