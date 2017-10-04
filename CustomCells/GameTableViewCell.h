//
//  GameTableViewCell.h
//  CustomCells
//
//  Created by supermacho on 03.10.17.
//  Copyright © 2017 student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GameTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel* lblTitle;
@property (weak, nonatomic) IBOutlet UILabel* lblYear;
@property (weak, nonatomic) IBOutlet UIImageView* imgPoster;

@end
