//
//  XYZTodoItem.h
//  TodoList
//
//  Created by Nadeem Khan on 2/8/14.
//  Copyright (c) 2014 Nadeem Khan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZTodoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly)NSDate *creationDate;

@end
