//
//  MovieCell.h
//  rottentomatoes
//
//  Created by Bharti Agrawal on 6/6/14.
//  Copyright (c) 2014 Yahoo Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *movieTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *movieSynopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *movieImageView;
@end
