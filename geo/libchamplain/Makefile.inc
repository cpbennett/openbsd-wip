# $OpenBSD: Makefile.inc,v 1.13 2011/04/02 21:03:02 jasper Exp $

SHARED_ONLY?=		Yes

CATEGORIES+=		geo/libchamplain geo devel

HOMEPAGE?=		http://projects.gnome.org/libchamplain/

VERSION?=		0.12.2
API_VERSION=		0.12
SUBST_VARS=		API_VERSION

# LGPLv2.1
PERMIT_PACKAGE_CDROM?=	Yes
PERMIT_PACKAGE_FTP?=	Yes
PERMIT_DISTFILES_CDROM?=Yes
PERMIT_DISTFILES_FTP?=	Yes

MASTER_SITES?=		http://download.gnome.org/sources/libchamplain/${VERSION:C/^([0-9]+\.[0-9]+).*/\1/}/
EXTRACT_SUFX?=		.tar.xz

DIST_SUBDIR=		libchamplain

USE_GMAKE?=		Yes

USE_LIBTOOL?=		Yes
LIBTOOL_FLAGS?=		--tag=disable-static

CONFIGURE_STYLE?=	gnu
CONFIGURE_ARGS+=	${CONFIGURE_SHARED}
