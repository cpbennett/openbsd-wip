# $OpenBSD$

SHARED_ONLY =	Yes
CATEGORIES =	audio x11
COMMENT-main =	Qt4-based music player forked from amaroK 1.4
COMMENT-kde4 =	KDE4 Plasma runner for Clementine
DISTNAME =	clementine-1.0.1
PKGNAME-main =	${PKGNAME}
PKGNAME-kde4 =	${PKGNAME:C/-/-kde4-/1}
HOMEPAGE =	http://clementine-player.org/

PSEUDO_FLAVORS =	no_kde4
MULTI_PACKAGES =	-main -kde4

MAINTAINER =	Vadim Zhukov <persgray@gmail.com>
MASTER_SITES =	http://clementine-player.googlecode.com/files/
EXTRACT_SUFX =	.tar.gz

# GPLv2/LGPLv2/GFDL
PERMIT_DISTFILES_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_PACKAGE_CDROM =		Yes

WANTLIB-common =	${MODQT4_WANTLIB} lib/qt4/QtDBus lib/qt4/QtGui c m stdc++

WANTLIB-main =	${WANTLIB-common} ${MODQT4_WANTLIB} ${MODGETTEXT_WANTLIB}
WANTLIB-main +=	pthread z
WANTLIB-main +=	GL GLU GLEW ICE SM X11 Xext 
WANTLIB-main +=	lib/qt4/QtNetwork lib/qt4/QtOpenGL lib/qt4/QtSql
WANTLIB-main += lib/qt4/QtWebKit lib/qt4/QtXml lib/qt4/QtXmlPatterns
WANTLIB-main +=	gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0 gthread-2.0
WANTLIB-main +=	gstapp-0.10 gstbase-0.10 gstcdda-0.10 gstreamer-0.10
WANTLIB-main +=	gsttag-0.10
WANTLIB-main +=	avcodec avutil cdio lastfm mtp protobuf-lite qca2
WANTLIB-main +=	qjson tag>=5.0 usb xml2

WANTLIB-kde4 =	${WANTLIB-common} ${MODKDE4_WANTLIB}
WANTLIB-kde4 +=	lib/qt4/QtSvg kdeui plasma

MODULES =	devel/cmake devel/gettext x11/qt4 x11/kde4

.include <bsd.port.arch.mk>

BUILD_DEPENDS =		devel/boost

RUN_DEPENDS-main =	devel/desktop-file-utils \
			x11/qt4,-sqlite

RUN_DEPENDS-kde4 =	${BUILD_PKGPATH},-main \
			${MODKDE4_RUN_DEPENDS}

LIB_DEPENDS-main =	${MODGETTEXT_LIB_DEPENDS} \
			${MODQT4_LIB_DEPENDS} \
			audio/taglib>=1.4 \
			audio/libcdio \
			audio/libnjb \
			audio/liblastfm \
			devel/libmtp \
			devel/libplist \
			devel/protobuf \
			devel/qjson \
			graphics/ffmpeg \
			graphics/glew \
			multimedia/gstreamer-0.10/core \
			multimedia/gstreamer-0.10/plugins-base,-main \
			multimedia/gstreamer-0.10/plugins-base,-cdda \
			security/qca2

LIB_DEPENDS-kde4 =	${MODKDE4_LIB_DEPENDS}

# Requires audio/libgpod update, disable to avoid picking by accident
CONFIGURE_ARGS =	-DENABLE_LIBGPOD:Bool=No \
			-DENABLE_IMOBILEDEVICE:Bool=No

# Crash reporting
CONFIGURE_ARGS +=	-DENABLE_BREAKPAD:Bool=No

# Not ported, force using bundled version instead
CONFIGURE_ARGS +=	-DCHROMAPRINT_FOUND:Bool=No

# Unported stuff
CONFIGURE_ARGS +=	-DENABLE_SOUNDMENU:Bool=No

.if ${BUILD_PACKAGES:M-kde4}
# KDE4 Plasma integration
CONFIGURE_ARGS +=	-DENABLE_PLASMARUNNER:Bool=Yes
.else
CONFIGURE_ARGS +=	-DENABLE_PLASMARUNNER:Bool=No
.endif

.include <bsd.port.mk>
