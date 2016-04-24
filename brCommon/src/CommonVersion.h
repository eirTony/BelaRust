#ifndef COMMONVERSION_H
#define COMMONVERSION_H

#define CVER_STRING     "v0.01B"
#define CVER_BSTRING	""
#define CVER_MAJOR      0
#define CVER_MINOR      2
#define CVER_BRANCH     0
#define CVER_BRANCHID   ""
#define CVER_RELEASE    1
#define CVER_BUILD      1002

#define CVER_COPYRIGHT  "Copyright (c) 1997-2016, Dynamic DeZigns"
#define CVER_PRODNAME   "Pixel DeZigns"
#define CVER_COMPANY    "Dynamic DeZigns"
#define CVER_ORGNAME    "DDZtech"
#define CVER_ICON       "../../../Common.ico"

#define VOS_NT          0x00040000L
#define VFT_APP         0x00000001L
#define VFT_DLL         0x00000002L

#ifndef VER_STRING
#  ifdef BVER_STRING
#    define VER_STRING BVER_STRING
#  else
#    define VER_STRING CVER_STRING
#  endif
#endif

#ifndef VER_BSTRING
#  ifdef BVER_BSTRING
#    define VER_BSTRING BVER_BSTRING
#  else
#    define VER_BSTRING CVER_BSTRING
#  endif
#endif

#ifndef VER_BRANCHID
#  ifdef BVER_BRANCHID
#    define VER_BRANCHID BVER_BRANCHID
#  else
#    define VER_BRANCHID CVER_BRANCHID
#  endif
#endif

#ifndef VER_MAJOR
# define VER_MAJOR CVER_MAJOR
#endif

#ifndef VER_MINOR
# define VER_MINOR CVER_MINOR
#endif

#ifndef VER_BRANCH
#  ifdef BVER_BRANCH
#    define VER_BRANCH BVER_BRANCH
#  else
#    define VER_BRANCH CVER_BRANCH
#  endif
#endif

#ifndef VER_RELEASE
# define VER_RELEASE CVER_RELEASE
#endif

#ifndef VER_COPYRIGHT
# define VER_COPYRIGHT CVER_COPYRIGHT
#endif

#ifndef VER_PRODNAME
# define VER_PRODNAME CVER_PRODNAME
#endif

#ifndef VER_COMPANY
# define VER_COMPANY CVER_COMPANY
#endif

#ifndef VER_ORGNAME
# define VER_ORGNAME CVER_ORGNAME
#endif

#ifndef VER_ICON
# define VER_ICON CVER_ICON
#endif
#endif // COMMONVERSION_H
