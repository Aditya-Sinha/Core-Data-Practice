//
//  Course.h
//  CodelessDemo
//
//  Created by Aditya Sinha on 28/07/13.
//  Copyright (c) 2013 Aditya Sinha. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Course : NSManagedObject

@property (nonatomic, retain) NSString * author;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSDate * releaseDate;

@end
