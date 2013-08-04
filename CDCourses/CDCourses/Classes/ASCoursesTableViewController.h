//
//  ASCoursesTableViewController.h
//  CDCourses
//
//  Created by Aditya Sinha on 04/08/13.
//  Copyright (c) 2013 Aditya Sinha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ASCoursesTableViewController : UITableViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSFetchedResultsController *fetchedResultsController; 

@end
