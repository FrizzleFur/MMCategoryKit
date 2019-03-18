//
//  UIImage+Category.h
//  Avenger
//
//  Created by Marlon on 2018/9/5.
//  Copyright © 2018年 Fansunion. All rights reserved.
//

#import <UIKit/UIKit.h>

#pragma mark ********* 创建图片 *********
/**
 图片相关扩展类
 */
@interface UIImage (Category)

/**
 以指定颜色创建图片

 @param color 颜色
 @return 图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 以指定颜色创建图片指定大小

 @param color 颜色
 @param size 大小
 @return 图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

/**
 以指定颜色创建图片，包含圆角

 @param color 颜色
 @param cornerRadius 圆角
 @return 图片
 */
+ (UIImage *)resizableImageWithColor:(UIColor *)color cornerRadius:(CGFloat)cornerRadius;


/**
 对View创建截图

 @param view 制定的view
 @return 截图
 */
+ (UIImage *)captureShotImageFromView:(UIView *)view;

#pragma mark ********* 处理图片 *********
/**
 修改图片的颜色
 
 @param color 颜色
 @return 修改过的图片
 */
- (UIImage*)imageChangeColor:(UIColor*)color;

/**
 指定宽度缩放图片
 
 @param width 指定宽度
 @return 结果图片
 */
- (UIImage *)scaleToWidth:(CGFloat)width;

/**
 指定高度缩放图片
 
 @param height 指定高度
 @return 结果图片
 */
- (UIImage *)scaleToHeight:(CGFloat)height;

/**
 等比例缩放图片

 @param image 指定图片
 @param scaleSize 比例
 @return 结果图片
 */
+ (UIImage*)scaleImage:(UIImage*)image toScale:(float)scaleSize;

/**
 图片拉伸(可指定方向)

 @param imageName 图片名
 @param top 上边不被拉伸区域比例
 @param left 左边不被拉伸区域比例
 @param down 下边不被拉伸区域比例
 @param right 右边不被拉伸区域比例
 @return 结果图片
 */
+ (UIImage *)resizeImageWithName:(NSString *)imageName top:(CGFloat)top left:(CGFloat)left down:(CGFloat)down right:(CGFloat)right;

/**
 图片拉伸(中间区域)

 @param imageName 图片名
 @return 结果图片
 */
+ (UIImage *)resizeImageWithName:(NSString *)imageName;

/**
 图片压缩到指定大小

 @param image 目标图片
 @param maxLength 指定大小
 @return 结果图片
 */
+ (UIImage *)compressImage:(UIImage *)image toByte:(NSUInteger)maxLength;

/**
 图片压缩到执行大小

 @param maxLength 指定大小
 @return 图片文件
 */
+ (NSData *)compressWithImage:(UIImage *)image maxLength:(NSUInteger)maxLength;

/*
 * 图像使用原始渲染
 */
+ (UIImage *)originImageWithName: (NSString *)name;


/**
 转换图片为黑白

 @param orignImage 原始图片
 @return 处理为黑白的图片
 */
+ (UIImage *) convertImageToGrey:(UIImage*) orignImage;
    
@end
