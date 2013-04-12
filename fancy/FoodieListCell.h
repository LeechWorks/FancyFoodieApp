//
//  FoodieListCell.h
//  fancy
//
//  Created by shaoxinjiang on 1/20/13.
//  Copyright (c) 2013 Xinjiang Shao. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BButton;
@class QBPopupMenu;
@interface FoodieListCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *photoView;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet BButton *menuButton;
@property (nonatomic, retain) QBPopupMenu *popupMenu;


- (IBAction) showPopupMenu:(id)sender;
- (IBAction) share:(id)sender;
- (IBAction) updateComment:(id)sender;
- (void) setupMenuInCell;
@end
