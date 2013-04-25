//
//  abcDetailViewController.h
//  test3
//
//  Created by Timothy Jacomb on 4/25/13.
//  Copyright (c) 2013 Timothy Jacomb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface abcDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
