# $OpenBSD$

COMMENT =		OpenVAS security scanner cli
DISTNAME =		openvas-cli-1.1.4
# PKGNAME =		${DISTNAME}

MASTER_SITES =		${MASTER_SITES_OPENVAS:=1016/}

WANTLIB += assuan c glib-2.0 gnutls gpg-error gpgme openvas_base
WANTLIB += openvas_hg openvas_misc openvas_nasl openvas_omp pthread

RUN_DEPENDS +=		print/htmldoc
LIB_DEPENDS +=		security/openvas/libraries \
			devel/glib2 \
			security/gnutls \
			security/gpgme \
			security/libgpg-error

.include <bsd.port.mk>
