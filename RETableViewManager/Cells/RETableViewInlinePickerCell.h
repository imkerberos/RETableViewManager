//
//  RETableViewInlinePickerCell.h
//  RETableViewManagerExample
//
//  Created by Roman Efimov on 10/5/13.
//  Copyright (c) 2013 Roman Efimov. All rights reserved.
//

#import <RETableViewManager/RETableViewCell.h>
#import <RETableViewManager/REInlinePickerItem.h>

@interface RETableViewInlinePickerCell : RETableViewCell <UIPickerViewDataSource, UIPickerViewDelegate>

@property (strong, readwrite, nonatomic) REInlinePickerItem *item;

@end
