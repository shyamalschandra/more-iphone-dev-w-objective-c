//
//  SuperDBPickerCell.h
//  SuperDB
//
//  Created by Jayant Varma on 8/03/2015.
//  Copyright (c) 2015 OZ Apps. All rights reserved.
//

#import "SuperDBEditCell.h"

@interface SuperDBPickerCell : SuperDBEditCell <UIPickerViewDataSource, UIPickerViewDelegate>
@property (strong, nonatomic) NSArray *values;
@end
