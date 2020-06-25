//
//  PhotoCell.h
//  TumblrLab
//
//  Created by Carmen Gutierrez on 6/25/20.
//  Copyright © 2020 Carmen Gutierrez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImageView+AFNetworking.h"

NS_ASSUME_NONNULL_BEGIN

@interface PhotoCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *postView;

@end

NS_ASSUME_NONNULL_END
