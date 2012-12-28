//
//  DetailViewController.h
//  OpsCenter
//
//  Created by Thomas Duffield on 12/28/12.
//  Copyright (c) 2012 Thomas Duffield. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
