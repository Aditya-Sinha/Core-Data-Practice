//
//  ASAddCourseViewController.h
//  CDCourses
//
//  Created by Aditya Sinha on 04/08/13.
//  Copyright (c) 2013 Aditya Sinha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Course.h"

@protocol AddCourseViewControllerDelegate;



@interface ASAddCourseViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UITextField *authorField;
@property (weak, nonatomic) IBOutlet UITextField *dateField;

@property (nonatomic, strong) Course *currentCourse;
@property (nonatomic, weak) id <AddCourseViewControllerDelegate> delegate;

- (IBAction)cancel:(UIBarButtonItem *)sender;
- (IBAction)save:(UIBarButtonItem *)sender;

@end

@protocol AddCourseViewControllerDelegate

-(void)addCourseViewControllerDidSave;

-(void)addCourseViewControllerDidCancel:(Course *)courseToDelete;

@end