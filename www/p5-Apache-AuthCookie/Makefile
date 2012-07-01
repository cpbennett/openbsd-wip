# $OpenBSD: Makefile,v 1.7 2012/04/07 14:28:57 sthen Exp $

COMMENT =	authentication and authorization via cookies

MODULES =	cpan
DISTNAME =	Apache-AuthCookie-3.14
CATEGORIES =	www

# Perl
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

RUN_DEPENDS =		www/mod_perl>=1.27
#			www/ap2-mod_perl >= 1.999022

BUILD_DEPENDS=		${RUN_DEPENDS}

APACHE_TEST_APXS=	/usr/sbin/apxs
APACHE_TEST_HTTPD=	/usr/sbin/httpd

REGRESS_DEPENDS =	www/p5-Apache-Test

.include <bsd.port.mk>
