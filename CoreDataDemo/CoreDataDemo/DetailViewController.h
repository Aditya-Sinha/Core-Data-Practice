//
//  DetailViewController.h
//  CoreDataDemo
//
//  Created by Aditya Sinha on 28/07/13.
//  Copyright (c) 2013 Aditya Sinha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
