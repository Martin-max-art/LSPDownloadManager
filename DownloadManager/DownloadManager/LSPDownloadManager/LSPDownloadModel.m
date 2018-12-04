//
//  LSPDownloadModel.m
//  DownloadManager
//
//  Created by zhudou on 2018/12/4.
//  Copyright © 2018年 lsp. All rights reserved.
//

#import "LSPDownloadModel.h"
#import "LSPDownloadManager.h"

@implementation LSPDownloadModel

- (NSString *)fileLocalPath {
    NSString *fileName = [NSString stringWithFormat:@"%@.%@", self.fileID, [[self.fileUrl componentsSeparatedByString:@"."] lastObject]];
    
    return [[KDownloadManager downloadDataDir] stringByAppendingPathComponent:fileName];
}

@end
