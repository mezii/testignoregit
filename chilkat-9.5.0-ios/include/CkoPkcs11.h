// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.88

// Generic/internal class name =  Pkcs11
// Wrapped Chilkat C++ class name =  CkPkcs11

@class CkoJsonObject;
@class CkoCert;


@interface CkoPkcs11 : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSNumber *NumCerts;
@property (nonatomic, copy) NSString *SharedLibPath;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: CloseSession
- (BOOL)CloseSession;
// method: Discover
- (BOOL)Discover: (BOOL)onlyTokensPresent 
	json: (CkoJsonObject *)json;
// method: FindAllCerts
- (BOOL)FindAllCerts;
// method: FindCert
- (BOOL)FindCert: (NSString *)certPart 
	partValue: (NSString *)partValue 
	cert: (CkoCert *)cert;
// method: GetCert
- (BOOL)GetCert: (NSNumber *)index 
	cert: (CkoCert *)cert;
// method: Initialize
- (BOOL)Initialize;
// method: Login
- (BOOL)Login: (NSNumber *)userType 
	pin: (NSString *)pin;
// method: Logout
- (BOOL)Logout;
// method: OpenSession
- (BOOL)OpenSession: (NSNumber *)slotId 
	readWrite: (BOOL)readWrite;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;

@end
