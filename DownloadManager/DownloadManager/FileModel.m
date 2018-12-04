//
//  FileModel.m
//  DownloadManager
//
//  Created by zhudou on 2018/12/4.
//  Copyright © 2018年 lsp. All rights reserved.
//

#import "FileModel.h"

@implementation FileModel

// 实现这个方法的目的：告诉MJExtension框架模型中的属性名对应着字典的哪个key
+ (NSDictionary *)replacedKeyFromPropertyName{
    return @{
             @"file_id" : @"id"
             };
}

- (NSString *)file_url {
    if (self.songLink) {
        return self.songLink;
    }else if (self.video_uri) {
        return self.video_uri;
    }
    return nil;
}

@end
