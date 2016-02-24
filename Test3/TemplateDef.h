//
//  TemplateDef.h
//  Test3
//
//  Created by 박대웅 on 2016. 2. 25..
//  Copyright © 2016년 박대웅. All rights reserved.
//

#ifndef TemplateDef_h
#define TemplateDef_h

template <typename Container>
Container make(const char s[])
{
    return Container(&s[0], &s[strlen(s)]);
}


#endif /* TemplateDef_h */
