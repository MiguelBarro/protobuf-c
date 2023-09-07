#pragma once

#define GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(TypeName)    \
   TypeName(const TypeName&);                           \
   void operator=(const TypeName&)

#define GOOGLE_CHECK_EQ(x,y)
#define GOOGLE_DCHECK_GE(x,y)

#define GOOGLE_ARRAYSIZE(a) \
  ((sizeof(a) / sizeof(*(a))) / \
   static_cast<size_t>(!(sizeof(a) % sizeof(*(a)))))

#define GOOGLE_LOG(severity) std::cout
