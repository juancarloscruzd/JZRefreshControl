//
//  JZRefreshControl.h
//  JZRefreshControlExample1
//
//  Created by Jeremy Zedell on 1/20/14.
//  Copyright (c) 2014 Jeremy Zedell. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^VoidBlock)(void);

@interface JZRefreshControl : UIView <UIScrollViewDelegate>

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, assign) id<UIScrollViewDelegate> delegate;
@property (nonatomic, copy) VoidBlock refreshBlock;
@property (nonatomic, assign, getter = isRefreshing, readonly) BOOL refreshing;

- (void)amountOfControlVisible:(CGFloat)visibility;
- (void)refreshingWithDelta:(CGFloat)delta;
- (void)beginRefreshing;
- (void)endRefreshing;
- (void)reset;

@end
