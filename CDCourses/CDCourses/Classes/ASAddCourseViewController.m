//
//  ASAddCourseViewController.m
//  CDCourses
//
//  Created by Aditya Sinha on 04/08/13.
//  Copyright (c) 2013 Aditya Sinha. All rights reserved.
//

#import "ASAddCourseViewController.h"

@interface ASAddCourseViewController ()

@end

@implementation ASAddCourseViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    
    self.titleField.text=self.currentCourse.title;
    self.authorField.text=self.currentCourse.author;
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];
    self.dateField.text = [dateFormatter stringFromDate:self.currentCourse.releaseData];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



- (IBAction)cancel:(UIBarButtonItem *)sender {
    
    [self.delegate addCourseViewControllerDidCancel:self.currentCourse];
    
    
}

- (IBAction)save:(UIBarButtonItem *)sender {
    
    self.currentCourse.title = self.titleField.text;
    self.currentCourse.author = self.authorField.text;
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];
    self.currentCourse.releaseData = [dateFormatter dateFromString:self.dateField.text];
    
    [self.delegate addCourseViewControllerDidSave];
}
@end
