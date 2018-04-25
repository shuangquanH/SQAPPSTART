//
//  SQMacroFile.h
//  SQAPPSTART
//
//  Created by apple on 2018/4/25.
//  Copyright © 2018年 apple. All rights reserved.
//

#ifndef SQMacroFile_h
#define SQMacroFile_h

#endif /* SQMacroFile_h */


#ifndef __OPTIMIZE__
#define SQLog(...) NSLog(__VA_ARGS__)
#else
# define NSLog(...) {}
#endif



