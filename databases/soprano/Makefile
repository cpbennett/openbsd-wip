# $OpenBSD: Makefile,v 1.6 2010/11/15 00:22:54 espie Exp $

SHARED_ONLY =	Yes
COMMENT =	rdf framework
CATEGORIES =	databases devel textproc sysutils

SHARED_LIBS +=  soprano                   1.0 # 1.0
SHARED_LIBS +=  sopranoclient             1.0 # 1.0
SHARED_LIBS +=  sopranoindex              1.0 # 1.0
SHARED_LIBS +=  sopranoserver             1.0 # 1.0

HOMEPAGE =	http://soprano.sourceforge.net/
DISTNAME =	soprano-2.7.0
EXTRACT_SUFX =	.tar.bz2
MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=soprano/}

# GPL/LGPL
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MODULES +=		devel/cmake x11/qt4
CONFIGURE_STYLE =	cmake
SEPARATE_BUILD =	simple

LIB_DEPENDS += 	textproc/clucene \
	    	databases/iodbc,-main \
		textproc/raptor \
		textproc/redland

post-extract:
	cd ${WRKDIST}/cmake/modules && rm FindQt4.cmake MacroPushRequiredVars.cmake

WANTLIB += c clucene iodbc lib/qt4/QtCore lib/qt4/QtDBus lib/qt4/QtNetwork \
	lib/qt4/QtXml m pthread raptor2 rdf stdc++


.include <bsd.port.mk>