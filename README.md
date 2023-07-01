KxSMB is objective-c wrapper for libsmbclient lib. 
===========================================

For now KxSMB supports a limited set of SMB operations.
It mostly was designed for browsing local net and retrieving files.

### Build instructions:
Xcode 8
First you need download, configure and build [samba](http://www.samba.org).
For this open console and type in
	
	cd Samba-iOS
	
	export samba_cv_big_endian=no  
	export samba_cv_little_endian=yes  
	export samba_cv_CC_NEGATIVE_ENUM_VALUES=yes  
	export libreplace_cv_HAVE_GETADDRINFO=no  
	export samba_cv_HAVE_WRFILE_KEYTAB=no  
	export smb_krb5_cv_enctype_to_string_takes_krb5_context_arg=no  
	export smb_krb5_cv_enctype_to_string_takes_size_t_arg=yes  
	export ac_cv_file__proc_sys_kernel_core_pattern=yes  
  
  	brew install autoconf
	rake   

### Usage

1. Drop files from kxsmb/libs folder in your project.
2. Add libs: libz.dylib, libresolv.dylib and liconv.dylib.

Fetching a folder content:

	NSArray *items = [[KxSMBProvider sharedSmbProvider] fetchAtPath: @"smb://server/share/"];

Reading a file:

	KxSMBItemFile *file = [[KxSMBProvider sharedSmbProvider] fetchAtPath: @"smb://server/share/file"];
	NSData *data = [file readDataToEndOfFile];

Look at kxSMBSample demo project as example of using.

### Requirements

at least iOS 5.0 and Xcode 4.5.0

### License

kxsmb is open source and covered by a standard 2-clause BSD license. See the LICENSE file for more info.

[Samba](http://www.samba.org) is [Free Software](http://www.gnu.org/philosophy/free-sw.html) licensed under the [GNU General Public License](http://www.samba.org/samba/docs/GPL.html).

### Feedback

Tweet me — [@kolyvan_ru](http://twitter.com/kolyvan_ru).
