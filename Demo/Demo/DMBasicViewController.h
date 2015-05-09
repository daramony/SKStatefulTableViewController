//
//  DMBasicViewController.h
//  SKStatefulTableViewControllerDemo
//
//  Created by Shiki on 10/27/13.
//  Copyright (c) 2013 Shiki. All rights reserved.
//

#import "SKStatefulTableViewController.h"

@interface DMBasicViewController : SKStatefulTableViewController

@property (strong, nonatomic) NSMutableArray *items;

- (void)addItems:(NSInteger)count insertFromTop:(BOOL)insertFromTop;

@end
