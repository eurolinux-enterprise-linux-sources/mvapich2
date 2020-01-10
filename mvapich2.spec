# We only compile with gcc, but other people may want other compilers.
# Set the compiler here.
%define opt_cc gcc
# Optional CFLAGS to use with the specific compiler...gcc doesn't need any,
# so uncomment and define to use
#define opt_cflags
%define opt_cxx g++
#define opt_cxxflags
%define opt_f77 gfortran
#define opt_fflags
%define opt_fc gfortran
#define opt_fcflags

%{!?python_sitearch: %global python_sitearch %(%{__python} -c "from distutils.sysconfig import get_python_lib; print get_python_lib(1)")}

%define opt_cflags -O3 -fno-strict-aliasing
%define opt_cxxflags -O3
%ifarch i386
%define opt_cflags -m32 -O3 -fno-strict-aliasing
%define opt_cxxflags -m32 -O3
%define opt_fflags -m32
%define opt_fcflags -m32
%endif
%ifarch x86_64
%define opt_cflags -m64 -O3 -fno-strict-aliasing
%define opt_cxxflags -m64 -O3
%define opt_fflags -m64
%define opt_fcflags -m64
%endif

Name:    mvapich2
Version: 2.2
Release: 1.3%{?dist}
Summary: OSU MVAPICH2 MPI package
Group:   Development/Libraries
# Richard Fontana wrote in https://bugzilla.redhat.com/show_bug.cgi?id=1333114:
## The mvapich2 source code is predominantly 3-clause BSD with a smattering of
## 2-clause BSD, MIT and proto-MIT licensed source code. Under the license
## abbreviation system inherited from Fedora that set of licenses is adequately
## described as 'BSD and MIT'.
## There are a couple of source files that indicate they are taken from glibc
## with LGPL license notices, but context strongly suggests that the author of
## that particular code placed it under the MIT license (which is consistent
## with the approach to copyright assignment in glibc in which the author
## receives a broad grant-back license permitting sublicensing under terms
## other than LGPL).
License: BSD and MIT
URL:     http://mvapich.cse.ohio-state.edu
Source:  http://mvapich.cse.ohio-state.edu/download/mvapich/mv2/%{name}-%{version}.tar.gz
Source1: mvapich2.module.in
Source2: mvapich2.macros.in
Patch0:  aarch64-add-get_cycles.patch
# We delete bundled stuff in the prep step. The *-unbundle-* patches adjust
# the configure scripts and Makefiles accordingly.
Patch1: 0001-unbundle-contrib-hwloc.patch
Patch2: 0002-unbundle-osu_benchmarks.patch
# The -rh tarball is made by taking the upstream tarball and removing
# license-questionable, duplicated, and generated files, then editing
# the auto* files until it compiles.
Source100:  mvapich2-2.0a-rh.tgz

Source230:  http://mvapich.cse.ohio-state.edu/download/mvapich/mv2/%{name}-2.3b.tar.gz
Source231:  mvapich23.module.in
Source232:  mvapich23.macros.in
Patch231:   0001-mvapich23-unbundle-contrib-hwloc.patch
Patch232:   0002-mvapich23-unbundle-osu_benchmarks.patch

BuildRequires: gcc-gfortran
BuildRequires: libibumad-devel, libibverbs-devel >= 1.1.3, librdmacm-devel
BuildRequires: python, perl-Digest-MD5, hwloc-devel, libibmad-devel
BuildRequires: bison, flex
BuildRequires: autoconf, automake, libtool
%ifarch x86_64
BuildRequires: infinipath-psm-devel, libpsm2-devel >= 10.2.1
%endif
ExcludeArch: s390 s390x

%global common_desc MVAPICH2 is a Message Passing Interface (MPI 3.0) implementation based on MPICH\
and developed by Ohio State University.

%description
%{common_desc}

%package 2.2
Summary:   OSU MVAPICH2 MPI package
Group:     Development/Libraries
Obsoletes: mvapich2 < 2.0a-4
Provides:  mpi
Requires:  environment-modules

%description 2.2
%{common_desc}

%package 2.2-devel
Summary:   Development files for mvapich2-2.2
Group:     Development/Libraries
Obsoletes: mvapich2-devel < 2.0a-4
Provides:  mpi-devel
Requires:  librdmacm-devel, libibverbs-devel, libibumad-devel
Requires:  mvapich2-2.2%{?_isa} = %{version}-%{release}
Requires:  gcc-gfortran

%description 2.2-devel
Contains development headers and libraries for mvapich2-2.2.

%package 2.2-doc
Summary:   Documentation files for mvapich2-2.2
Group:     Documentation
BuildArch: noarch

%description 2.2-doc
Additional documentation for mvapich2-2.2.

%ifarch x86_64
%package 2.2-psm
Summary:   OSU MVAPICH2 MPI package for TrueScale adapters
Group:     Development/Libraries
Obsoletes: mvapich2-psm < 2.0a-4
Provides:  mpi
Requires:  environment-modules

%description 2.2-psm
%{common_desc}

This is a version of mvapich2 that uses the Infinipath PSM transport
for TrueScale adapters.

%package 2.2-psm-devel
Summary:   Development files for mvapich2-2.2-psm
Group:     Development/Libraries
Obsoletes: mvapich2-psm-devel < 2.0a-4
Provides:  mpi-devel
Requires:  librdmacm-devel, libibverbs-devel, libibumad-devel
Requires:  mvapich2-2.2-psm%{?_isa} = %{version}-%{release}
Requires:  gcc-gfortran

%description 2.2-psm-devel
Contains development headers and libraries for mvapich2-2.2-psm.

%package 2.2-psm2
Summary:   OSU MVAPICH2 MPI package for Omni-Path adapters
Group:     Development/Libraries
Provides:  mpi
Requires:  environment-modules

%description 2.2-psm2
%{common_desc}

This is a version of mvapich2 that uses the PSM2 transport for Omni-Path
adapters.

%package 2.2-psm2-devel
Summary:   Development files for mvapich2-2.2-psm2
Group:     Development/Libraries
Provides:  mpi-devel
Requires:  librdmacm-devel, libibverbs-devel, libibumad-devel
Requires:  mvapich2-2.2-psm2%{?_isa} = %{version}-%{release}
Requires:  gcc-gfortran

%description 2.2-psm2-devel
Contains development headers and libraries for mvapich2-2.2-psm2.
%endif

%package 2.0
Version:   2.0a
Release:   6.4%{?dist}
Summary:   OSU MVAPICH2 MPI package
Group:     Development/Libraries
Obsoletes: mvapich2 < 2.0a-4
Provides:  mvapich2 = %{version}-%{release}
Provides:  mvapich2%{?_isa} = %{version}-%{release}
Provides:  mpi
Requires:  environment-modules

%description 2.0
%{common_desc}

%package 2.0-devel
Version:   %{version}
Release:   %{release}
Summary:   Development files for mvapich2-2.0
Group:     Development/Libraries
Obsoletes: mvapich2-devel < 2.0a-4
Provides:  mvapich2-devel = %{version}-%{release}
Provides:  mpi-devel
Requires:  librdmacm-devel, libibverbs-devel, libibumad-devel
Requires:  mvapich2-2.0%{?_isa} = %{version}-%{release}
Requires:  gcc-gfortran

%description 2.0-devel
Contains development headers and libraries for mvapich2-2.0.

%package 2.0-doc
Version:   %{version}
Release:   %{release}
Summary:   Documentation files for mvapich2-2.0
Group:     Documentation
BuildArch: noarch
Obsoletes: mvapich2-common < 2.0a-4

%description 2.0-doc
Additional documentation for mvapich2-2.0.

%ifarch x86_64
%package 2.0-psm
Version:   %{version}
Release:   %{release}
Summary:   OSU MVAPICH2 MPI package for TrueScale adapters
Group:     Development/Libraries
Obsoletes: mvapich2-psm < 2.0a-4
Provides:  mvapich2-psm = %{version}-%{release}
Provides:  mvapich2-psm%{?_isa} = %{version}-%{release}
Provides:  mpi
Requires:  environment-modules

%description 2.0-psm
%{common_desc}

This is a version of mvapich2 that uses the Infinipath PSM transport
for TrueScale adapters.

%package 2.0-psm-devel
Version:   %{version}
Release:   %{release}
Summary:   Development files for mvapich2-2.0-psm
Group:     Development/Libraries
Obsoletes: mvapich2-psm-devel < 2.0a-4
Provides:  mvapich2-psm-devel = %{version}-%{release}
Provides:  mpi-devel
Requires:  librdmacm-devel, libibverbs-devel, libibumad-devel
Requires:  mvapich2-2.0-psm%{?_isa} = %{version}-%{release}
Requires:  gcc-gfortran

%description 2.0-psm-devel
Contains development headers and libraries for mvapich2-2.0-psm.
%endif

%package -n mvapich23
Summary:   OSU MVAPICH2 MPI package 2.3
Group:     Development/Libraries
Version:   2.3
Release:   0.3.b%{?dist}
Provides:  mpi
Requires:  environment-modules

%description -n mvapich23
%{common_desc}

%package -n mvapich23-devel
Version:   %{version}
Release:   %{release}
Summary:   Development files for mvapich23
Group:     Development/Libraries
Provides:  mpi-devel
Requires:  librdmacm-devel, libibverbs-devel, libibumad-devel
Requires:  mvapich23%{?_isa} = %{version}-%{release}
Requires:  gcc-gfortran

%description -n mvapich23-devel
Contains development headers and libraries for mvapich23.

%package -n mvapich23-doc
Version:   %{version}
Release:   %{release}
Summary:   Documentation files for mvapich23
Group:     Documentation
BuildArch: noarch

%description -n mvapich23-doc
Additional documentation for mvapich23.

%ifarch x86_64
%package -n mvapich23-psm
Version:   %{version}
Release:   %{release}
Summary:   OSU MVAPICH2 MPI package 2.3 for TrueScale adapters
Group:     Development/Libraries
Provides:  mpi
Requires:  environment-modules

%description -n mvapich23-psm
%{common_desc}

This is a version of mvapich2 2.3 that uses the PSM transport for TrueScale
adapters.

%package -n mvapich23-psm-devel
Version:   %{version}
Release:   %{release}
Summary:   Development files for mvapich23-psm
Group:     Development/Libraries
Provides:  mpi-devel
Requires:  librdmacm-devel, libibverbs-devel, libibumad-devel
Requires:  mvapich23-psm%{?_isa} = %{version}-%{release}
Requires:  gcc-gfortran

%description -n mvapich23-psm-devel
Contains development headers and libraries for mvapich23-psm.

%package -n mvapich23-psm2
Version:   %{version}
Release:   %{release}
Summary:   OSU MVAPICH2 MPI package 2.3 for Omni-Path adapters
Group:     Development/Libraries
Provides:  mpi
Requires:  environment-modules

%description -n mvapich23-psm2
%{common_desc}

This is a version of mvapich2 2.3 that uses the PSM2 transport for Omni-Path
adapters.

%package -n mvapich23-psm2-devel
Version:   %{version}
Release:   %{release}
Summary:   Development files for mvapich23-psm2
Group:     Development/Libraries
Provides:  mpi-devel
Requires:  librdmacm-devel, libibverbs-devel, libibumad-devel
Requires:  mvapich23-psm2%{?_isa} = %{version}-%{release}
Requires:  gcc-gfortran

%description -n mvapich23-psm2-devel
Contains development headers and libraries for mvapich23-psm2.

%endif

%prep
%setup -q -b 100 -b 230
cd ..

cd mvapich2-2.2
%patch0 -p1 -b .aarch64~
%patch1 -p1
%patch2 -p1
# bundled hwloc, knem kernel module
rm -r contrib/
# limic kernel module
rm -r limic2-0.5.6/
# bundled OSU benchmarks
rm -r osu_benchmarks/

# Remove rpath, part 1
find . -name configure -exec \
    sed -i -r 's/(hardcode_into_libs)=.*$/\1=no/' '{}' ';'

mkdir .default
mv * .default
mv .default default

%ifarch x86_64
cp -pr default psm
cp -pr default psm2
%endif

cd ..

cd mvapich2-2.0a
%patch0 -p1 -b .aarch64~

./autogen.sh

mkdir .default
mv * .default
mv .default default

%ifarch x86_64
cp -pr default psm
%endif

cd ..

cd mvapich2-2.3b
%patch231 -p1
%patch232 -p1
# bundled hwloc, knem kernel module
rm -r contrib/
# limic kernel module
rm -r limic2-0.5.6/
# bundled OSU benchmarks
rm -r osu_benchmarks/

# Remove rpath, part 1
find . -name configure -exec \
    sed -i -r 's/(hardcode_into_libs)=.*$/\1=no/' '{}' ';'

mkdir .default
mv * .default
mv .default default

%ifarch x86_64
cp -pr default psm
cp -pr default psm2
%endif

cd ..

%build
cd ..
export AR=ar

########### 2.3 ###########
cd mvapich2-2.3b

%ifarch x86_64
%global variant mvapich23-psm
%global libname %{variant}
%global namearch %{variant}-%{_arch}

cd psm
# Fool ./configure into not seeing psm2.h
ac_cv_header_psm2_h=no \
./configure \
    --prefix=%{_libdir}/%{libname} \
    --sbindir=%{_libdir}/%{libname}/bin \
    --mandir=%{_mandir}/%{namearch} \
    --includedir=%{_includedir}/%{namearch} \
    --sysconfdir=%{_sysconfdir}/%{namearch} \
    --datarootdir=%{_datadir}/%{libname} \
    --docdir=%{_docdir}/mvapich23 \
    --enable-error-checking=runtime \
    --enable-timing=none \
    --enable-g=mem,dbg,meminit \
    --enable-shared \
    --enable-wrapper-rpath=no \
    --enable-static \
    --disable-silent-rules \
    --with-hwloc-prefix=system \
    --with-device=ch3:psm \
    CC=%{opt_cc}    CFLAGS="%{?opt_cflags} $RPM_OPT_FLAGS $XFLAGS" \
    CXX=%{opt_cxx}  CXXFLAGS="%{?opt_cxxflags} $RPM_OPT_FLAGS $XFLAGS" \
    FC=%{opt_fc}    FCFLAGS="%{?opt_fcflags} $RPM_OPT_FLAGS $XFLAGS" \
    F77=%{opt_f77}  FFLAGS="%{?opt_fflags} $RPM_OPT_FLAGS $XFLAGS"

# Remove rpath, part 2
find . -name libtool -exec \
    sed -i 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g;
            s|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' '{}' ';'
make %{?_smp_mflags}
cd ..

%global variant mvapich23-psm2
%global libname %{variant}
%global namearch %{variant}-%{_arch}

cd psm2
./configure \
    --prefix=%{_libdir}/%{libname} \
    --sbindir=%{_libdir}/%{libname}/bin \
    --mandir=%{_mandir}/%{namearch} \
    --includedir=%{_includedir}/%{namearch} \
    --sysconfdir=%{_sysconfdir}/%{namearch} \
    --datarootdir=%{_datadir}/%{libname} \
    --docdir=%{_docdir}/mvapich23 \
    --enable-error-checking=runtime \
    --enable-timing=none \
    --enable-g=mem,dbg,meminit \
    --enable-shared \
    --enable-wrapper-rpath=no \
    --enable-static \
    --disable-silent-rules \
    --with-hwloc-prefix=system \
    --with-device=ch3:psm \
    CC=%{opt_cc}    CFLAGS="%{?opt_cflags} $RPM_OPT_FLAGS $XFLAGS" \
    CXX=%{opt_cxx}  CXXFLAGS="%{?opt_cxxflags} $RPM_OPT_FLAGS $XFLAGS" \
    FC=%{opt_fc}    FCFLAGS="%{?opt_fcflags} $RPM_OPT_FLAGS $XFLAGS" \
    F77=%{opt_f77}  FFLAGS="%{?opt_fflags} $RPM_OPT_FLAGS $XFLAGS"

# Remove rpath, part 2
find . -name libtool -exec \
    sed -i 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g;
            s|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' '{}' ';'
make %{?_smp_mflags}
cd ..
%endif

%global variant mvapich23
%global libname %{variant}
%global namearch %{variant}-%{_arch}

cd default
./configure \
    --prefix=%{_libdir}/%{libname} \
    --sbindir=%{_libdir}/%{libname}/bin \
    --mandir=%{_mandir}/%{namearch} \
    --includedir=%{_includedir}/%{namearch} \
    --sysconfdir=%{_sysconfdir}/%{namearch} \
    --datarootdir=%{_datadir}/%{libname} \
    --docdir=%{_docdir}/mvapich23 \
    --enable-error-checking=runtime \
    --enable-timing=none \
    --enable-g=mem,dbg,meminit \
    --enable-shared \
    --enable-wrapper-rpath=no \
    --enable-static \
    --disable-silent-rules \
    --with-hwloc-prefix=system \
    CC=%{opt_cc}    CFLAGS="%{?opt_cflags} $RPM_OPT_FLAGS $XFLAGS" \
    CXX=%{opt_cxx}  CXXFLAGS="%{?opt_cxxflags} $RPM_OPT_FLAGS $XFLAGS" \
    FC=%{opt_fc}    FCFLAGS="%{?opt_fcflags} $RPM_OPT_FLAGS $XFLAGS" \
    F77=%{opt_f77}  FFLAGS="%{?opt_fflags} $RPM_OPT_FLAGS $XFLAGS"

# Remove rpath, part 2
find . -name libtool -exec \
    sed -i 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g;
            s|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' '{}' ';'
make %{?_smp_mflags}
cd ..

cd ..

########### 2.2 ###########
cd mvapich2-2.2

%ifarch x86_64

%global variant mvapich2-2.2-psm
%global libname %{variant}
%global namearch %{variant}-%{_arch}

cd psm
# Fool ./configure into not seeing psm2.h
ac_cv_header_psm2_h=no \
./configure \
    --prefix=%{_libdir}/%{libname} \
    --sbindir=%{_libdir}/%{libname}/bin \
    --mandir=%{_mandir}/%{namearch} \
    --includedir=%{_includedir}/%{namearch} \
    --sysconfdir=%{_sysconfdir}/%{namearch} \
    --datarootdir=%{_datadir}/%{libname} \
    --docdir=%{_docdir}/mvapich2-2.2 \
    --enable-error-checking=runtime \
    --enable-timing=none \
    --enable-g=mem,dbg,meminit \
    --enable-shared \
    --enable-wrapper-rpath=no \
    --enable-static \
    --disable-silent-rules \
    --with-hwloc-prefix=system \
    --with-device=ch3:psm \
    CC=%{opt_cc}    CFLAGS="%{?opt_cflags} $RPM_OPT_FLAGS $XFLAGS" \
    CXX=%{opt_cxx}  CXXFLAGS="%{?opt_cxxflags} $RPM_OPT_FLAGS $XFLAGS" \
    FC=%{opt_fc}    FCFLAGS="%{?opt_fcflags} $RPM_OPT_FLAGS $XFLAGS" \
    F77=%{opt_f77}  FFLAGS="%{?opt_fflags} $RPM_OPT_FLAGS $XFLAGS"

# Remove rpath, part 2
find . -name libtool -exec \
    sed -i 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g;
            s|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' '{}' ';'
make %{?_smp_mflags}
cd ..

%global variant mvapich2-2.2-psm2
%global libname %{variant}
%global namearch %{variant}-%{_arch}

cd psm2
./configure \
    --prefix=%{_libdir}/%{libname} \
    --sbindir=%{_libdir}/%{libname}/bin \
    --mandir=%{_mandir}/%{namearch} \
    --includedir=%{_includedir}/%{namearch} \
    --sysconfdir=%{_sysconfdir}/%{namearch} \
    --datarootdir=%{_datadir}/%{libname} \
    --docdir=%{_docdir}/mvapich2-2.2 \
    --enable-error-checking=runtime \
    --enable-timing=none \
    --enable-g=mem,dbg,meminit \
    --enable-shared \
    --enable-wrapper-rpath=no \
    --enable-static \
    --disable-silent-rules \
    --with-hwloc-prefix=system \
    --with-device=ch3:psm \
    CC=%{opt_cc}    CFLAGS="%{?opt_cflags} $RPM_OPT_FLAGS $XFLAGS" \
    CXX=%{opt_cxx}  CXXFLAGS="%{?opt_cxxflags} $RPM_OPT_FLAGS $XFLAGS" \
    FC=%{opt_fc}    FCFLAGS="%{?opt_fcflags} $RPM_OPT_FLAGS $XFLAGS" \
    F77=%{opt_f77}  FFLAGS="%{?opt_fflags} $RPM_OPT_FLAGS $XFLAGS"

# Remove rpath, part 2
find . -name libtool -exec \
    sed -i 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g;
            s|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' '{}' ';'
make %{?_smp_mflags}
cd ..
%endif

%global variant mvapich2-2.2
%global libname %{variant}
%global namearch %{variant}-%{_arch}

cd default
./configure \
    --prefix=%{_libdir}/%{libname} \
    --sbindir=%{_libdir}/%{libname}/bin \
    --mandir=%{_mandir}/%{namearch} \
    --includedir=%{_includedir}/%{namearch} \
    --sysconfdir=%{_sysconfdir}/%{namearch} \
    --datarootdir=%{_datadir}/%{libname} \
    --docdir=%{_docdir}/mvapich2-2.2 \
    --enable-error-checking=runtime \
    --enable-timing=none \
    --enable-g=mem,dbg,meminit \
    --enable-shared \
    --enable-wrapper-rpath=no \
    --enable-static \
    --disable-silent-rules \
    --with-hwloc-prefix=system \
    CC=%{opt_cc}    CFLAGS="%{?opt_cflags} $RPM_OPT_FLAGS $XFLAGS" \
    CXX=%{opt_cxx}  CXXFLAGS="%{?opt_cxxflags} $RPM_OPT_FLAGS $XFLAGS" \
    FC=%{opt_fc}    FCFLAGS="%{?opt_fcflags} $RPM_OPT_FLAGS $XFLAGS" \
    F77=%{opt_f77}  FFLAGS="%{?opt_fflags} $RPM_OPT_FLAGS $XFLAGS"

# Remove rpath, part 2
find . -name libtool -exec \
    sed -i 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g;
            s|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' '{}' ';'
make %{?_smp_mflags}
cd ..

cd ..

########### 2.0a ###########
cd mvapich2-2.0a

%ifarch x86_64

%global variant mvapich2-psm
%global libname %{variant}
%global namearch %{variant}-%{_arch}

cd psm
./configure \
    --prefix=%{_libdir}/%{libname} \
    --sbindir=%{_libdir}/%{libname}/bin \
    --mandir=%{_mandir}/%{namearch} \
    --includedir=%{_includedir}/%{namearch} \
    --sysconfdir=%{_sysconfdir}/%{namearch} \
    --datarootdir=%{_datadir}/%{libname} \
    --docdir=%{_docdir}/mvapich2-2.0 \
    --enable-error-checking=runtime \
    --enable-timing=none \
    --enable-g=mem,dbg,meminit \
    --enable-mpe \
    --enable-shared \
    --enable-sharedlibs=gcc \
    --disable-silent-rules \
    --with-device=ch3:psm \
    CC=%{opt_cc}    CFLAGS="%{?opt_cflags} $RPM_OPT_FLAGS $XFLAGS" \
    CXX=%{opt_cxx}  CXXFLAGS="%{?opt_cxxflags} $RPM_OPT_FLAGS $XFLAGS" \
    FC=%{opt_fc}    FCFLAGS="%{?opt_fcflags} $RPM_OPT_FLAGS $XFLAGS" \
    F77=%{opt_f77}  FFLAGS="%{?opt_fflags} $RPM_OPT_FLAGS $XFLAGS"

make %{?_smp_mflags}
cd ..
%endif

%global variant mvapich2
%global libname %{variant}
%global namearch %{variant}-%{_arch}

cd default
./configure \
    --prefix=%{_libdir}/%{libname} \
    --sbindir=%{_libdir}/%{libname}/bin \
    --mandir=%{_mandir}/%{namearch} \
    --includedir=%{_includedir}/%{namearch} \
    --sysconfdir=%{_sysconfdir}/%{namearch} \
    --datarootdir=%{_datadir}/%{libname} \
    --docdir=%{_docdir}/mvapich2-2.0 \
    --enable-error-checking=runtime \
    --enable-timing=none \
    --enable-g=mem,dbg,meminit \
    --enable-mpe \
    --enable-shared \
    --enable-sharedlibs=gcc \
    --disable-silent-rules \
    --with-rdma=gen2 \
    CC=%{opt_cc}    CFLAGS="%{?opt_cflags} $RPM_OPT_FLAGS $XFLAGS" \
    CXX=%{opt_cxx}  CXXFLAGS="%{?opt_cxxflags} $RPM_OPT_FLAGS $XFLAGS" \
    FC=%{opt_fc}    FCFLAGS="%{?opt_fcflags} $RPM_OPT_FLAGS $XFLAGS" \
    F77=%{opt_f77}  FFLAGS="%{?opt_fflags} $RPM_OPT_FLAGS $XFLAGS"
make %{?_smp_mflags}
cd ..

%install
cd ..

finish_install() {
	local VARIANT="$1"
	local LIBNAME="$VARIANT"
	local NAMEARCH="$VARIANT-%{_arch}"

	local MODULE_TEMPLATE="$2"
	local MACROS_TEMPLATE="$3"
	local FORTRAN_SUBDIR_SUFFIX="$4"

	find %{buildroot}%{_libdir}/$LIBNAME/lib -name \*.la -delete

	mkdir -p %{buildroot}%{_mandir}/$NAMEARCH/man{2,4,5,6,7,8,9,n}
	mkdir -p %{buildroot}/%{_fmoddir}/$LIBNAME$FORTRAN_SUBDIR_SUFFIX
	mkdir -p %{buildroot}/%{python_sitearch}/$LIBNAME

	# Make the environment-modules file
	mkdir -p %{buildroot}%{_sysconfdir}/modulefiles/mpi
	sed "s#@LIBDIR@#%{_libdir}/$LIBNAME#g;
	     s#@ETCDIR@#%{_sysconfdir}/$NAMEARCH#g;
	     s#@FMODDIR@#%{_fmoddir}/$LIBNAME$FORTRAN_SUBDIR_SUFFIX#g;
	     s#@INCDIR@#%{_includedir}/$NAMEARCH#g;
	     s#@MANDIR@#%{_mandir}/$NAMEARCH#g;
	     s#@PYSITEARCH@#%{python_sitearch}/$LIBNAME#g;
	     s#@COMPILER@#$NAMEARCH#g;
	     s#@SUFFIX@#_$VARIANT#g" \
		< $MODULE_TEMPLATE \
		> %{buildroot}%{_sysconfdir}/modulefiles/mpi/$NAMEARCH

	# make the rpm config file
	mkdir -p %{buildroot}%{_sysconfdir}/rpm
	# do not expand _arch
	sed "s#@MACRONAME@#${LIBNAME//[-.]/_}#g;
	     s#@MODULENAME@#$NAMEARCH#" \
		< $MACROS_TEMPLATE \
		> %{buildroot}/%{_sysconfdir}/rpm/macros.$NAMEARCH
}

########### 2.3 ###########
cd mvapich2-2.3b

# 'make install' fails to mkdir docdir by itself before installing index.html
mkdir -p %{buildroot}%{_docdir}/mvapich23

%ifarch x86_64
cd psm
%make_install
finish_install mvapich23-psm %SOURCE231 %SOURCE232 ""
cd ..

cd psm2
%make_install
finish_install mvapich23-psm2 %SOURCE231 %SOURCE232 ""
cd ..
%endif

cd default
%make_install
finish_install mvapich23 %SOURCE231 %SOURCE232 ""
cd ..

cd ..
########### 2.2 ###########
cd mvapich2-2.2

# 'make install' fails to mkdir docdir by itself before installing index.html
mkdir -p %{buildroot}%{_docdir}/mvapich2-2.2

%ifarch x86_64
cd psm
%make_install
finish_install mvapich2-2.2-psm %SOURCE1 %SOURCE2 "-%{_arch}"
cd ..

cd psm2
%make_install
finish_install mvapich2-2.2-psm2 %SOURCE1 %SOURCE2 "-%{_arch}"
cd ..
%endif

cd default
%make_install
finish_install mvapich2-2.2 %SOURCE1 %SOURCE2 "-%{_arch}"
cd ..

cd ..
########### 2.0a ###########
cd mvapich2-2.0a

%ifarch x86_64
cd psm
%make_install
finish_install mvapich2-psm %SOURCE1 %SOURCE2 "-%{_arch}"
cd ..
%endif

cd default
%make_install
finish_install mvapich2 %SOURCE1 %SOURCE2 "-%{_arch}"
cd ..

rm -rf %{buildroot}%{_libdir}/%{name}*/lib/trace_rlog
ln -s mvapich2-%{_arch} %{buildroot}%{_sysconfdir}/modulefiles/mpi/mvapich2-2.0-%{_arch}
ln -s mvapich2-%{_arch} %{buildroot}%{_sysconfdir}/mvapich2-2.0-%{_arch}
%ifarch x86_64
ln -s mvapich2-psm-%{_arch} %{buildroot}%{_sysconfdir}/modulefiles/mpi/mvapich2-2.0-psm-%{_arch}
ln -s mvapich2-psm-%{_arch} %{buildroot}%{_sysconfdir}/mvapich2-2.0-psm-%{_arch}
%endif

%global variant mvapich23
%global libname %{variant}
%global namearch %{variant}-%{_arch}

%files -n mvapich23
%dir %{_libdir}/%{libname}
%dir %{_libdir}/%{libname}/bin
%dir %{_libdir}/%{libname}/lib
%dir %{_mandir}/%{namearch}
%dir %{_mandir}/%{namearch}/man*
%dir %{_fmoddir}/%{libname}
%dir %{python_sitearch}/%{libname}

%{_libdir}/%{libname}/bin/hydra_nameserver
%{_libdir}/%{libname}/bin/hydra_persist
%{_libdir}/%{libname}/bin/hydra_pmi_proxy
%{_libdir}/%{libname}/bin/mpichversion
%{_libdir}/%{libname}/bin/mpiexec
%{_libdir}/%{libname}/bin/mpiexec.hydra
%{_libdir}/%{libname}/bin/mpiexec.mpirun_rsh
%{_libdir}/%{libname}/bin/mpiname
%{_libdir}/%{libname}/bin/mpirun
%{_libdir}/%{libname}/bin/mpirun_rsh
%{_libdir}/%{libname}/bin/mpispawn
%{_libdir}/%{libname}/bin/mpivars
%{_libdir}/%{libname}/bin/parkill
%{_libdir}/%{libname}/lib/*.so.*
%{_mandir}/%{namearch}/man1/hydra_*
%{_mandir}/%{namearch}/man1/mpiexec.*
%{_sysconfdir}/modulefiles/mpi/%{namearch}

%files -n mvapich23-devel
%dir %{_includedir}/%{namearch}
%{_sysconfdir}/rpm/macros.%{namearch}
%{_includedir}/%{namearch}/*
%{_libdir}/%{libname}/bin/mpic++
%{_libdir}/%{libname}/bin/mpicc
%{_libdir}/%{libname}/bin/mpicxx
%{_libdir}/%{libname}/bin/mpif77
%{_libdir}/%{libname}/bin/mpif90
%{_libdir}/%{libname}/bin/mpifort
%{_libdir}/%{libname}/lib/pkgconfig
%{_libdir}/%{libname}/lib/*.a
%{_libdir}/%{libname}/lib/*.so
%{_mandir}/%{namearch}/man1/mpi[cf]*
%{_mandir}/%{namearch}/man3/*

%files -n mvapich23-doc
%{_docdir}/mvapich23

%ifarch x86_64

%global variant mvapich23-psm
%global libname %{variant}
%global namearch %{variant}-%{_arch}

%files -n mvapich23-psm
%dir %{_libdir}/%{libname}
%dir %{_libdir}/%{libname}/bin
%dir %{_libdir}/%{libname}/lib
%dir %{_mandir}/%{namearch}
%dir %{_mandir}/%{namearch}/man*
%dir %{_fmoddir}/%{libname}
%dir %{python_sitearch}/%{libname}

%{_libdir}/%{libname}/bin/hydra_nameserver
%{_libdir}/%{libname}/bin/hydra_persist
%{_libdir}/%{libname}/bin/hydra_pmi_proxy
%{_libdir}/%{libname}/bin/mpichversion
%{_libdir}/%{libname}/bin/mpiexec
%{_libdir}/%{libname}/bin/mpiexec.hydra
%{_libdir}/%{libname}/bin/mpiexec.mpirun_rsh
%{_libdir}/%{libname}/bin/mpiname
%{_libdir}/%{libname}/bin/mpirun
%{_libdir}/%{libname}/bin/mpirun_rsh
%{_libdir}/%{libname}/bin/mpispawn
%{_libdir}/%{libname}/bin/mpivars
%{_libdir}/%{libname}/bin/parkill
%{_libdir}/%{libname}/lib/*.so.*
%{_mandir}/%{namearch}/man1/hydra_*
%{_mandir}/%{namearch}/man1/mpiexec.*
%{_sysconfdir}/modulefiles/mpi/%{namearch}

%files -n mvapich23-psm-devel
%dir %{_includedir}/%{namearch}
%{_sysconfdir}/rpm/macros.%{namearch}
%{_includedir}/%{namearch}/*
%{_libdir}/%{libname}/bin/mpic++
%{_libdir}/%{libname}/bin/mpicc
%{_libdir}/%{libname}/bin/mpicxx
%{_libdir}/%{libname}/bin/mpif77
%{_libdir}/%{libname}/bin/mpif90
%{_libdir}/%{libname}/bin/mpifort
%{_libdir}/%{libname}/lib/pkgconfig
%{_libdir}/%{libname}/lib/*.a
%{_libdir}/%{libname}/lib/*.so
%{_mandir}/%{namearch}/man1/mpi[cf]*
%{_mandir}/%{namearch}/man3/*

%global variant mvapich23-psm2
%global libname %{variant}
%global namearch %{variant}-%{_arch}

%files -n mvapich23-psm2
%dir %{_libdir}/%{libname}
%dir %{_libdir}/%{libname}/bin
%dir %{_libdir}/%{libname}/lib
%dir %{_mandir}/%{namearch}
%dir %{_mandir}/%{namearch}/man*
%dir %{_fmoddir}/%{libname}
%dir %{python_sitearch}/%{libname}

%{_libdir}/%{libname}/bin/hydra_nameserver
%{_libdir}/%{libname}/bin/hydra_persist
%{_libdir}/%{libname}/bin/hydra_pmi_proxy
%{_libdir}/%{libname}/bin/mpichversion
%{_libdir}/%{libname}/bin/mpiexec
%{_libdir}/%{libname}/bin/mpiexec.hydra
%{_libdir}/%{libname}/bin/mpiexec.mpirun_rsh
%{_libdir}/%{libname}/bin/mpiname
%{_libdir}/%{libname}/bin/mpirun
%{_libdir}/%{libname}/bin/mpirun_rsh
%{_libdir}/%{libname}/bin/mpispawn
%{_libdir}/%{libname}/bin/mpivars
%{_libdir}/%{libname}/bin/parkill
%{_libdir}/%{libname}/lib/*.so.*
%{_mandir}/%{namearch}/man1/hydra_*
%{_mandir}/%{namearch}/man1/mpiexec.*
%{_sysconfdir}/modulefiles/mpi/%{namearch}

%files -n mvapich23-psm2-devel
%dir %{_includedir}/%{namearch}
%{_sysconfdir}/rpm/macros.%{namearch}
%{_includedir}/%{namearch}/*
%{_libdir}/%{libname}/bin/mpic++
%{_libdir}/%{libname}/bin/mpicc
%{_libdir}/%{libname}/bin/mpicxx
%{_libdir}/%{libname}/bin/mpif77
%{_libdir}/%{libname}/bin/mpif90
%{_libdir}/%{libname}/bin/mpifort
%{_libdir}/%{libname}/lib/pkgconfig
%{_libdir}/%{libname}/lib/*.a
%{_libdir}/%{libname}/lib/*.so
%{_mandir}/%{namearch}/man1/mpi[cf]*
%{_mandir}/%{namearch}/man3/*
%endif

%global variant mvapich2-2.2
%global libname %{variant}
%global namearch %{variant}-%{_arch}

%files 2.2
%dir %{_libdir}/%{libname}
%dir %{_libdir}/%{libname}/bin
%dir %{_libdir}/%{libname}/lib
%dir %{_mandir}/%{namearch}
%dir %{_mandir}/%{namearch}/man*
%dir %{_fmoddir}/%{namearch}
%dir %{python_sitearch}/%{libname}

%{_libdir}/%{libname}/bin/hydra_nameserver
%{_libdir}/%{libname}/bin/hydra_persist
%{_libdir}/%{libname}/bin/hydra_pmi_proxy
%{_libdir}/%{libname}/bin/mpichversion
%{_libdir}/%{libname}/bin/mpiexec
%{_libdir}/%{libname}/bin/mpiexec.hydra
%{_libdir}/%{libname}/bin/mpiexec.mpirun_rsh
%{_libdir}/%{libname}/bin/mpiname
%{_libdir}/%{libname}/bin/mpirun
%{_libdir}/%{libname}/bin/mpirun_rsh
%{_libdir}/%{libname}/bin/mpispawn
%{_libdir}/%{libname}/bin/mpivars
%{_libdir}/%{libname}/bin/parkill
%{_libdir}/%{libname}/lib/*.so.*
%{_mandir}/%{namearch}/man1/hydra_*
%{_mandir}/%{namearch}/man1/mpiexec.*
%{_sysconfdir}/modulefiles/mpi/%{namearch}

%files 2.2-devel
%dir %{_includedir}/%{namearch}
%{_sysconfdir}/rpm/macros.%{namearch}
%{_includedir}/%{namearch}/*
%{_libdir}/%{libname}/bin/mpic++
%{_libdir}/%{libname}/bin/mpicc
%{_libdir}/%{libname}/bin/mpicxx
%{_libdir}/%{libname}/bin/mpif77
%{_libdir}/%{libname}/bin/mpif90
%{_libdir}/%{libname}/bin/mpifort
%{_libdir}/%{libname}/lib/pkgconfig
%{_libdir}/%{libname}/lib/*.a
%{_libdir}/%{libname}/lib/*.so
%{_mandir}/%{namearch}/man1/mpi[cf]*
%{_mandir}/%{namearch}/man3/*

%files 2.2-doc
%{_docdir}/mvapich2-2.2

%ifarch x86_64

%global variant mvapich2-2.2-psm
%global libname %{variant}
%global namearch %{variant}-%{_arch}

%files 2.2-psm
%dir %{_libdir}/%{libname}
%dir %{_libdir}/%{libname}/bin
%dir %{_libdir}/%{libname}/lib
%dir %{_mandir}/%{namearch}
%dir %{_mandir}/%{namearch}/man*
%dir %{_fmoddir}/%{namearch}
%dir %{python_sitearch}/%{libname}

%{_libdir}/%{libname}/bin/hydra_nameserver
%{_libdir}/%{libname}/bin/hydra_persist
%{_libdir}/%{libname}/bin/hydra_pmi_proxy
%{_libdir}/%{libname}/bin/mpichversion
%{_libdir}/%{libname}/bin/mpiexec
%{_libdir}/%{libname}/bin/mpiexec.hydra
%{_libdir}/%{libname}/bin/mpiexec.mpirun_rsh
%{_libdir}/%{libname}/bin/mpiname
%{_libdir}/%{libname}/bin/mpirun
%{_libdir}/%{libname}/bin/mpirun_rsh
%{_libdir}/%{libname}/bin/mpispawn
%{_libdir}/%{libname}/bin/mpivars
%{_libdir}/%{libname}/bin/parkill
%{_libdir}/%{libname}/lib/*.so.*
%{_mandir}/%{namearch}/man1/hydra_*
%{_mandir}/%{namearch}/man1/mpiexec.*
%{_sysconfdir}/modulefiles/mpi/%{namearch}

%files 2.2-psm-devel
%dir %{_includedir}/%{namearch}
%{_sysconfdir}/rpm/macros.%{namearch}
%{_includedir}/%{namearch}/*
%{_libdir}/%{libname}/bin/mpic++
%{_libdir}/%{libname}/bin/mpicc
%{_libdir}/%{libname}/bin/mpicxx
%{_libdir}/%{libname}/bin/mpif77
%{_libdir}/%{libname}/bin/mpif90
%{_libdir}/%{libname}/bin/mpifort
%{_libdir}/%{libname}/lib/pkgconfig
%{_libdir}/%{libname}/lib/*.a
%{_libdir}/%{libname}/lib/*.so
%{_mandir}/%{namearch}/man1/mpi[cf]*
%{_mandir}/%{namearch}/man3/*

%global variant mvapich2-2.2-psm2
%global libname %{variant}
%global namearch %{variant}-%{_arch}

%files 2.2-psm2
%dir %{_libdir}/%{libname}
%dir %{_libdir}/%{libname}/bin
%dir %{_libdir}/%{libname}/lib
%dir %{_mandir}/%{namearch}
%dir %{_mandir}/%{namearch}/man*
%dir %{_fmoddir}/%{namearch}
%dir %{python_sitearch}/%{libname}

%{_libdir}/%{libname}/bin/hydra_nameserver
%{_libdir}/%{libname}/bin/hydra_persist
%{_libdir}/%{libname}/bin/hydra_pmi_proxy
%{_libdir}/%{libname}/bin/mpichversion
%{_libdir}/%{libname}/bin/mpiexec
%{_libdir}/%{libname}/bin/mpiexec.hydra
%{_libdir}/%{libname}/bin/mpiexec.mpirun_rsh
%{_libdir}/%{libname}/bin/mpiname
%{_libdir}/%{libname}/bin/mpirun
%{_libdir}/%{libname}/bin/mpirun_rsh
%{_libdir}/%{libname}/bin/mpispawn
%{_libdir}/%{libname}/bin/mpivars
%{_libdir}/%{libname}/bin/parkill
%{_libdir}/%{libname}/lib/*.so.*
%{_mandir}/%{namearch}/man1/hydra_*
%{_mandir}/%{namearch}/man1/mpiexec.*
%{_sysconfdir}/modulefiles/mpi/%{namearch}

%files 2.2-psm2-devel
%dir %{_includedir}/%{namearch}
%{_sysconfdir}/rpm/macros.%{namearch}
%{_includedir}/%{namearch}/*
%{_libdir}/%{libname}/bin/mpic++
%{_libdir}/%{libname}/bin/mpicc
%{_libdir}/%{libname}/bin/mpicxx
%{_libdir}/%{libname}/bin/mpif77
%{_libdir}/%{libname}/bin/mpif90
%{_libdir}/%{libname}/bin/mpifort
%{_libdir}/%{libname}/lib/pkgconfig
%{_libdir}/%{libname}/lib/*.a
%{_libdir}/%{libname}/lib/*.so
%{_mandir}/%{namearch}/man1/mpi[cf]*
%{_mandir}/%{namearch}/man3/*
%endif

%global variant mvapich2
%global libname %{variant}
%global namearch %{variant}-%{_arch}

%files 2.0
%dir %{_libdir}/%{libname}
%dir %{_libdir}/%{libname}/bin
%dir %{_libdir}/%{libname}/lib
%dir %{_mandir}/%{namearch}
%dir %{_mandir}/%{namearch}/man*
%dir %{_fmoddir}/%{namearch}
%dir %{python_sitearch}/%{libname}

%{_libdir}/%{libname}/bin/hydra_nameserver
%{_libdir}/%{libname}/bin/hydra_persist
%{_libdir}/%{libname}/bin/hydra_pmi_proxy
%{_libdir}/%{libname}/bin/mpichversion
%{_libdir}/%{libname}/bin/mpiexec
%{_libdir}/%{libname}/bin/mpiexec.hydra
%{_libdir}/%{libname}/bin/mpiexec.mpirun_rsh
%{_libdir}/%{libname}/bin/mpiname
%{_libdir}/%{libname}/bin/mpirun
%{_libdir}/%{libname}/bin/mpirun_rsh
%{_libdir}/%{libname}/bin/mpispawn
%{_libdir}/%{libname}/bin/parkill
%{_libdir}/%{libname}/lib/*.so.*
%{_mandir}/%{namearch}/man1/*
%{_sysconfdir}/modulefiles/mpi/%{namearch}
%{_sysconfdir}/modulefiles/mpi/mvapich2-2.0-%{_arch}

%files 2.0-devel
%dir %{_sysconfdir}/%{namearch}
%{_sysconfdir}/mvapich2-2.0-%{_arch}
%dir %{_includedir}/%{namearch}
%{_sysconfdir}/rpm/macros.%{namearch}
%config(noreplace) %{_sysconfdir}/%{namearch}/*
%{_includedir}/%{namearch}/*
%{_mandir}/%{namearch}/man3/*
%{_libdir}/%{libname}/bin/mpic++
%{_libdir}/%{libname}/bin/mpicc
%{_libdir}/%{libname}/bin/mpicxx
%{_libdir}/%{libname}/bin/mpif77
%{_libdir}/%{libname}/bin/mpif90
%{_libdir}/%{libname}/lib/pkgconfig
%{_libdir}/%{libname}/lib/*.a
%{_libdir}/%{libname}/lib/*.so

%files 2.0-doc
%{_docdir}/mvapich2-2.0

%ifarch x86_64

%global variant mvapich2-psm
%global libname %{variant}
%global namearch %{variant}-%{_arch}

%files 2.0-psm
%dir %{_libdir}/%{libname}
%dir %{_libdir}/%{libname}/bin
%dir %{_libdir}/%{libname}/lib
%dir %{_mandir}/%{namearch}
%dir %{_mandir}/%{namearch}/man*
%dir %{_fmoddir}/%{namearch}
%dir %{python_sitearch}/%{libname}

%{_libdir}/%{libname}/bin/hydra_nameserver
%{_libdir}/%{libname}/bin/hydra_persist
%{_libdir}/%{libname}/bin/hydra_pmi_proxy
%{_libdir}/%{libname}/bin/mpichversion
%{_libdir}/%{libname}/bin/mpiexec
%{_libdir}/%{libname}/bin/mpiexec.hydra
%{_libdir}/%{libname}/bin/mpiexec.mpirun_rsh
%{_libdir}/%{libname}/bin/mpiname
%{_libdir}/%{libname}/bin/mpirun
%{_libdir}/%{libname}/bin/mpirun_rsh
%{_libdir}/%{libname}/bin/mpispawn
%{_libdir}/%{libname}/bin/parkill
%{_libdir}/%{libname}/lib/*.so.*
%{_mandir}/%{namearch}/man1/*
%{_sysconfdir}/modulefiles/mpi/%{namearch}
%{_sysconfdir}/modulefiles/mpi/mvapich2-2.0-psm-%{_arch}

%files 2.0-psm-devel
%dir %{_sysconfdir}/%{namearch}
%{_sysconfdir}/mvapich2-2.0-psm-%{_arch}
%dir %{_includedir}/%{namearch}
%{_sysconfdir}/rpm/macros.%{namearch}
%config(noreplace) %{_sysconfdir}/%{namearch}/*
%{_includedir}/%{namearch}/*
%{_libdir}/%{libname}/bin/mpic++
%{_libdir}/%{libname}/bin/mpicc
%{_libdir}/%{libname}/bin/mpicxx
%{_libdir}/%{libname}/bin/mpif77
%{_libdir}/%{libname}/bin/mpif90
%{_mandir}/%{namearch}/man3/*
%{_libdir}/%{libname}/lib/pkgconfig
%{_libdir}/%{libname}/lib/*.a
%{_libdir}/%{libname}/lib/*.so
%endif

%changelog
* Thu Jan 18 2018 Michal Schmidt <mschmidt@redhat.com> - 2.2-1.3
- Rebuild in buildroot with updated RDMA stack.
- Related: #1452830

* Wed Jan 17 2018 Michal Schmidt <mschmidt@redhat.com> - 2.2-1.2
- Add a 2.3b build variant for TrueScale: mvapich23-psm.
- Resolves: #1452830

* Fri Nov 3 2017 Michal Schmidt <mschmidt@redhat.com> - 2.2-1.1
- Add mvapich2 2.3b as mvapich23 and mvapich23-psm2.
- Resolves: #1452830

* Mon Mar 27 2017 Michal Schmidt <mschmidt@redhat.com> - 2.2-1
- Update to 2.2 GA.
- Related: #1426359

* Mon Aug 8 2016 Michal Schmidt <mschmidt@redhat.com> - 2.2-0.3.rc1
- Move MPI compiler manpages to -2.2-*devel where the compilers are.
- Related: #948504

* Fri Jul 1 2016 Michal Schmidt <mschmidt@redhat.com> - 2.2-0.2.rc1
- Preserve the directory and env module name of mvapich2-2.0.
- Related: #1093453

* Thu Jun 30 2016 Michal Schmidt <mschmidt@redhat.com> - 2.2-0.1.rc1
- Update to 2.2rc1
- Includes -psm2 variant for Intel OPA.
- Still build the previous version for compatibility, as 2.0 subpackages.
- Resolves: #948504
- Resolves: #1093453
- Resolves: #1173318

* Tue May 20 2014 Kyle McMartin <kmcmarti@redhat.com> - 2.0a-3
- aarch64: add get_cycles implementation since <asm/timex.h> is not
  an exported header.
- Resolves: #1100046

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 2.0a-2
- Mass rebuild 2013-12-27

* Mon Sep 16 2013 Jay Fenlason <fenlason@redhat.com> 2.0a-1
- Add Build Requires on autoconf, automake, libtool,
  perl-Digest-MD5, hwloc-devel, and libibmad-devel.
- remove build requires on java
- New upstream version, edited so it can pass a license audit.
  Resolves: rhbz1001718

* Mon Aug 19 2013 Jay Fenlason <fenlason@redhat.com> 1.8-3
- Move the module files to the (correct for RHEL-7) mpi/ directory.
- Add MANPATH to the module files.

* Wed May 30 2012 Jay Fenlason <fenlason@redhat.com> 1.8-2
- Add BuildRequires on flex and bison
- Add "export AR=ar" to allow builds on RHEL-7 to work.
  Resolves: rhbz822527

* Tue Feb 14 2012 Jay Fenlason <fenlason@redhat.com> 1.8-1
- New upstream version, with man pages again.
  This fixes the following bugs:
  Related: rhbz739138
  Resolves: rhbz613696
  Resolves: rhbz625620
  Resolves: rhbz735954
  Resolves: rhbz782263
* Fri Aug 19 2011 Jay Fenlason <fenlason@redhat.com> 1.6-3.el6
- Change the requires on mvapich2-psm-devel to mvapich2-psm from mvapich2
  so that mpitests will build
- clean up the build to not use .{non-}psm directories.
  Related: rhbz725016

* Wed Aug 17 2011 Jay Fenlason <fenlason@redhat.com> 1.6-2.el6
- Fix the psm RPM macros so that we can build a -psm variant of
  mpitests
- remove the osu-micro-benchmarks, which are being installed with a
  bogus rpath, and which are included in mpitests
  Related: rhbz725016

* Mon Aug 15 2011 Jay Fenlason <fenlason@redhat.com> 1.6-1.el6
- New upstream release, with different build process, and without
  man pages, because we don't have the sowing package, and its
  licensing status is unclear (no licence description of any kind in
  the tarball).
  Related: rhbz725016

* Mon Jun 7 2010 Jay Fenlason <fenlason@redhat.com> 1.4-5.el6
- Forgot the BuildRequires
  Related: rhbz570274

* Mon Jun 7 2010 Jay Fenlason <fenlason@redhat.com>
- Add support for -psm subpackages on x86_64.
  Related: rhbz570274

* Tue Mar 2 2010 Jay Fenlason <fenlason@redhat.com> 1.4-4.el6
- Move -devel requires to the -devel subpackage.
  Resolves: bz568450
- Add defattr as required by packaging guidelines
  Related: bz555835

* Fri Jan 15 2010 Doug Ledford <dledford@redhat.com> - 1.4-3.el6
- Fix an issue with usage of _cc_name_suffix that caused a broken define in
  our module file
  Related: bz543948

* Fri Jan 15 2010 Jay Fenlason <fenlason@redhat.com> 1.4-2.el6
- Add BuildRequires: python
- Add BuildRequires: java
- Remove the pkgconfig file entirely
  Related: bz543948

* Thu Jan 14 2010 Jay Fenlason <fenlason@redhat.com>
- Add Group: to -devel
- Split into subpackages as required by packaging guidelines
- cleanup BuildRequires
- attempt to build on ppc
- cleanup spec file
- cleanup mvapich2.pc, still not correct, but closer
  Related: bz543948

* Thu Jan 14 2010 Jay Fenlason <fenlason@redhat.com>
- New EnvironmentModules version for RHEL-6
  Related: bz543948

* Tue Dec 22 2009 Doug Ledford <dledford@redhat.com> - 1.4-1.el5
- Update to latest upstream version
- Related: bz518218

* Mon Jun 22 2009 Doug Ledford <dledford@redhat.com> - 1.2-0.p1.3.el5
- Rebuild against libibverbs that isn't missing the proper ppc wmb() macro
- Related: bz506258

* Sun Jun 21 2009 Doug Ledford <dledford@redhat.com> - 1.2-0.p1.2.el5
- Compile against non-XRC libibverbs
- Related: bz506258

* Wed Apr 22 2009 Doug Ledford <dledford@redhat.com> - 1.2-0.p1.1
- Update to ofed 1.4.1-rc3 version
- Related: bz459652

* Thu Oct 16 2008 Doug Ledford <dledford@redhat.com> - 1.0.3-3
- Make sure MPD_BIN is set in the mpivars files
- Related: bz466390

* Fri Oct 03 2008 Doug Ledford <dledford@redhat.com> - 1.0.3-2
- Make scriptlets match mvapich
- Include a Requires(post) and Requires(preun) so installs work properly
- Resolves: bz465448

* Thu Sep 18 2008 Doug Ledford <dledford@redhat.com> - 1.0.3-1
- Initial rhel5 package
- Resolves: bz451477

* Sun May 04 2008 Jonathan Perkins <perkinjo@cse.ohio-state.edu>
- Created initial MVAPICH2 1.0.3 SRPM with IB and iWARP support.

