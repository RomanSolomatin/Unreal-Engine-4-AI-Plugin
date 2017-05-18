// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEENGINEPLUGIN_TestChar_generated_h
#error "TestChar.generated.h already included, missing '#pragma once' in TestChar.h"
#endif
#define GAMEENGINEPLUGIN_TestChar_generated_h

#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_RPC_WRAPPERS
#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesATestChar(); \
	friend GAMEENGINEPLUGIN_API class UClass* Z_Construct_UClass_ATestChar(); \
	public: \
	DECLARE_CLASS(ATestChar, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameEnginePlugin"), NO_API) \
	DECLARE_SERIALIZER(ATestChar) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesATestChar(); \
	friend GAMEENGINEPLUGIN_API class UClass* Z_Construct_UClass_ATestChar(); \
	public: \
	DECLARE_CLASS(ATestChar, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameEnginePlugin"), NO_API) \
	DECLARE_SERIALIZER(ATestChar) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestChar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestChar(ATestChar&&); \
	NO_API ATestChar(const ATestChar&); \
public:


#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestChar(ATestChar&&); \
	NO_API ATestChar(const ATestChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestChar)


#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_PRIVATE_PROPERTY_OFFSET
#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_8_PROLOG
#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_PRIVATE_PROPERTY_OFFSET \
	UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_RPC_WRAPPERS \
	UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_INCLASS \
	UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_PRIVATE_PROPERTY_OFFSET \
	UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_INCLASS_NO_PURE_DECLS \
	UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_AI_Plugin_Source_GameEnginePlugin_TestChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS