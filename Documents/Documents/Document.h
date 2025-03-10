//
//  Document.h
//  Documents
//
//  Created by Michael Stoffer on 11/5/19.
//  Copyright © 2019 Michael Stoffer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Document : NSObject

- (instancetype)initWithTitle:(NSString *)title text:(NSString *)text;

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) NSInteger wordCount;

@end
