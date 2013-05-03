//
//  GentEvent.h
//  Hackathon
//
//  Created by Hackathon on 03/05/13.
//  Copyright (c) 2013 Team Bazinga. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Contact.h"

@interface GentEvent : NSObject

@property (nonatomic,strong) NSString *language;
@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *subtitle;
@property (nonatomic,strong) NSString *summary;
@property (nonatomic,strong) NSString *description;
@property (nonatomic,strong) NSString *category;
@property (nonatomic,strong) NSArray *contacts;



@end
