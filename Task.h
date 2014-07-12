//
//  Task.h
//  SwiftClassTodo
//
//  Created by Kirstin "Kir" Jarchow on 7/12/14.
//  Copyright (c) 2014 Kirstin "Kir" Jarchow. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

- (id)initWithName:(NSString *)name;

@property (nonatomic, copy) NSString *name;

@end
