//
//  LOCategoryNutritionDetailViewController.h
//  Loop
//
//  Created by Ryan Phillip Thomas on 3/26/16.
//  Copyright © 2016 Ryan Phillip Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LOCategoryNutritionDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIView *paralaxView;
@property (strong, nonatomic) UIView  *blurView;

@property (nonatomic) BOOL isLastWeek;
@property (nonatomic) BOOL isThisWeek;

@property (nonatomic, strong) NSString *imageName; //candrop

@end
