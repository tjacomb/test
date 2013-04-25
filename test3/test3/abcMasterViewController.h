//
//  abcMasterViewController.h
//  test3
//
//  Created by Timothy Jacomb on 4/25/13.
//  Copyright (c) 2013 Timothy Jacomb. All rights reserved.
//

#import <UIKit/UIKit.h>

@class abcDetailViewController;

@interface abcMasterViewController : UITableViewController

@property (strong, nonatomic) abcDetailViewController *detailViewController;

@end
