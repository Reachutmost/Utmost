//
//  LONewsArticleData.h
//  Utmost
//
//  Created by Ryan Thomas on 8/10/16.
//  Copyright © 2016 Ryan Phillip Thomas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LONewsArticleData : NSObject <NSXMLParserDelegate>

@property (nonatomic, strong) NSMutableDictionary *dictData;
@property (nonatomic,strong) NSMutableArray *marrXMLData;
@property (nonatomic,strong) NSMutableString *mstrXMLString;
@property (nonatomic,strong) NSMutableDictionary *mdictXMLPart;

- (void)startParsingWithCompletion:(void (^)(BOOL performed))completionBlock;

@end
