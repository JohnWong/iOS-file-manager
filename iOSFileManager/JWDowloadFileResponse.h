//
//  JWDowloadFileResponse.h
//  iOSFileManager
//
//  Created by John Wong on 9/8/15.
//  Copyright (c) 2015 John Wong. All rights reserved.
//

#import "HTTPFileResponse.h"

@interface JWDowloadFileResponse : HTTPFileResponse

@property (nonatomic, strong) NSString *fileName;

@end
