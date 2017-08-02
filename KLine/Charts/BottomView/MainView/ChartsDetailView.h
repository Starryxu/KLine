//
//  ChartsDetailView.h
//  KLine
//
//  Created by chenfanfang on 2017/8/1.
//  Copyright © 2017年 DanDanLiCai. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TimeLineModel;

// 显示详细信息的view 左右两边显示的数据指标都显示在这个view上
// 长按显示的数据也显示在这里
@interface ChartsDetailView : UIView

/** 最高价 */
@property (nonatomic, assign) CGFloat maxPrice;

/** 最低价 */
@property (nonatomic, assign) CGFloat minPrice;

/** 昨收 */
@property (nonatomic, assign) CGFloat preClosePrice;

/** 折线图的区间数 */
@property (nonatomic, assign) NSInteger chartsLineSections;

/** 折线图上部的偏移量 */
@property (nonatomic, assign) CGFloat topMargin;

/** 折线图下部的偏移量 */
@property (nonatomic, assign) CGFloat bottomMargin;



//==========================================================



/** 最多成交量 */
@property (nonatomic, assign) NSInteger maxVolumn;

/** 最少成交量 */
@property (nonatomic, assign) NSInteger minVolumn;

/** 成交量图的区间数 */
@property (nonatomic, assign) NSInteger volumnSections;


//==========================================================

/** 现在是否处于长按的状态 */
@property (nonatomic, assign) BOOL isLongPress;

/** 触摸的点(计算好的点，知己就可以绘制) */
@property (nonatomic, assign) CGPoint touchPoint;

/** TimeLineModel */
@property (nonatomic, strong) TimeLineModel *timeLineModel;

//重新绘图
- (void)reDraw;

@end