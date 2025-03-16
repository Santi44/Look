#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
254,
262,
263,
264,
265,
266,
267,
268,
269,
270,
273,
274,
447,
448,
450,
478,
479,
480,
500,
501,
502,
503,
601,
602,
603,
606,
651,
652,
653,
656,
658,
660,
662,
667,
675,
676,
677,
678,
679,
680,
681,
682,
683,
684,
685,
686,
687,
688,
689,
690,
691,
693,
694,
695,
696,
697,
698,
699,
791,
792,
793,
794,
795,
796,
797,
798,
799,
800,
801,
802,
803,
804,
805,
806,
807,
809,
810,
811,
812,
813,
814,
815,
941,
950,
953,
955,
960,
961,
963,
964,
968,
969,
971,
972,
975,
976,
977,
980,
982,
985,
987,
989,
1061,
1063,
1065,
1074,
1075,
1076,
1077,
1079,
1086,
1087,
1088,
1089,
1090,
1098,
1099,
1100,
1104,
1105,
1107,
1111,
1112,
1113,
1384,
1582,
1583,
8961,
8962,
8964,
8965,
8966,
8967,
8968,
8970,
8972,
8974,
8975,
8976,
8985,
8987,
8991,
8992,
8994,
8996,
8998,
9010,
9019,
9020,
9022,
9023,
9024,
9025,
9026,
9028,
9030,
10121,
10125,
10127,
10128,
10129,
10130,
10273,
10274,
10275,
10276,
10296,
10297,
10298,
10300,
10343,
10417,
10419,
10430,
10431,
10432,
10433,
10871,
10872,
10877,
10878,
10913,
10937,
10943,
10950,
10960,
10964,
11048,
11053,
11055,
11067,
11069,
11070,
11071,
11078,
11091,
11111,
11112,
11120,
11122,
11129,
11130,
11133,
11135,
11140,
11146,
11147,
11154,
11156,
11168,
11171,
11172,
11173,
11184,
11193,
11199,
11200,
11201,
11203,
11204,
11222,
11224,
11238,
11261,
11262,
11280,
11285,
11315,
11316,
11774,
11775,
11851,
11929,
12180,
12181,
12187,
12188,
12189,
12195,
12265,
12764,
12765,
13356,
13357,
14343,
14364,
14371,
14373,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 254,
ves_icall_System_Array_InternalCreate,
// token 262,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 263,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 264,
ves_icall_System_Array_CanChangePrimitive,
// token 265,
ves_icall_System_Array_FastCopy_raw,
// token 266,
ves_icall_System_Array_GetLength_raw,
// token 267,
ves_icall_System_Array_GetLowerBound_raw,
// token 268,
ves_icall_System_Array_GetGenericValue_icall,
// token 269,
ves_icall_System_Array_GetValueImpl_raw,
// token 270,
ves_icall_System_Array_SetGenericValue_icall,
// token 273,
ves_icall_System_Array_SetValueImpl_raw,
// token 274,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 447,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 448,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 450,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 478,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 479,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 480,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 500,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 501,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 502,
ves_icall_System_Enum_InternalGetCorElementType,
// token 503,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 601,
ves_icall_System_Environment_get_ProcessorCount,
// token 602,
ves_icall_System_Environment_get_TickCount,
// token 603,
ves_icall_System_Environment_get_TickCount64,
// token 606,
ves_icall_System_Environment_FailFast_raw,
// token 651,
ves_icall_System_GC_GetCollectionCount,
// token 652,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 653,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 656,
ves_icall_System_GC_SuppressFinalize_raw,
// token 658,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 660,
ves_icall_System_GC_GetGCMemoryInfo,
// token 662,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 667,
ves_icall_System_Object_MemberwiseClone_raw,
// token 675,
ves_icall_System_Math_Acos,
// token 676,
ves_icall_System_Math_Acosh,
// token 677,
ves_icall_System_Math_Asin,
// token 678,
ves_icall_System_Math_Asinh,
// token 679,
ves_icall_System_Math_Atan,
// token 680,
ves_icall_System_Math_Atan2,
// token 681,
ves_icall_System_Math_Atanh,
// token 682,
ves_icall_System_Math_Cbrt,
// token 683,
ves_icall_System_Math_Ceiling,
// token 684,
ves_icall_System_Math_Cos,
// token 685,
ves_icall_System_Math_Cosh,
// token 686,
ves_icall_System_Math_Exp,
// token 687,
ves_icall_System_Math_Floor,
// token 688,
ves_icall_System_Math_Log,
// token 689,
ves_icall_System_Math_Log10,
// token 690,
ves_icall_System_Math_Pow,
// token 691,
ves_icall_System_Math_Sin,
// token 693,
ves_icall_System_Math_Sinh,
// token 694,
ves_icall_System_Math_Sqrt,
// token 695,
ves_icall_System_Math_Tan,
// token 696,
ves_icall_System_Math_Tanh,
// token 697,
ves_icall_System_Math_FusedMultiplyAdd,
// token 698,
ves_icall_System_Math_Log2,
// token 699,
ves_icall_System_Math_ModF,
// token 791,
ves_icall_System_MathF_Acos,
// token 792,
ves_icall_System_MathF_Acosh,
// token 793,
ves_icall_System_MathF_Asin,
// token 794,
ves_icall_System_MathF_Asinh,
// token 795,
ves_icall_System_MathF_Atan,
// token 796,
ves_icall_System_MathF_Atan2,
// token 797,
ves_icall_System_MathF_Atanh,
// token 798,
ves_icall_System_MathF_Cbrt,
// token 799,
ves_icall_System_MathF_Ceiling,
// token 800,
ves_icall_System_MathF_Cos,
// token 801,
ves_icall_System_MathF_Cosh,
// token 802,
ves_icall_System_MathF_Exp,
// token 803,
ves_icall_System_MathF_Floor,
// token 804,
ves_icall_System_MathF_Log,
// token 805,
ves_icall_System_MathF_Log10,
// token 806,
ves_icall_System_MathF_Pow,
// token 807,
ves_icall_System_MathF_Sin,
// token 809,
ves_icall_System_MathF_Sinh,
// token 810,
ves_icall_System_MathF_Sqrt,
// token 811,
ves_icall_System_MathF_Tan,
// token 812,
ves_icall_System_MathF_Tanh,
// token 813,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 814,
ves_icall_System_MathF_Log2,
// token 815,
ves_icall_System_MathF_ModF,
// token 941,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 950,
ves_icall_RuntimeType_make_array_type_raw,
// token 953,
ves_icall_RuntimeType_make_byref_type_raw,
// token 955,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 960,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 961,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 963,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 964,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 968,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 969,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 971,
ves_icall_System_RuntimeType_getFullName_raw,
// token 972,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 975,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 976,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 977,
ves_icall_RuntimeType_GetFields_native_raw,
// token 980,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 982,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 985,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 987,
ves_icall_RuntimeType_GetName_raw,
// token 989,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1061,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1063,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1065,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1074,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1075,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1076,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1077,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1079,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1086,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1087,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1088,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1089,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1090,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1098,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1099,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1100,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1104,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1105,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1107,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1111,
ves_icall_System_String_FastAllocateString_raw,
// token 1112,
ves_icall_System_String_InternalIsInterned_raw,
// token 1113,
ves_icall_System_String_InternalIntern_raw,
// token 1384,
ves_icall_System_Type_internal_from_handle_raw,
// token 1582,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1583,
ves_icall_System_ValueType_Equals_raw,
// token 8961,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8962,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8964,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8965,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8966,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8967,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8968,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8970,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8972,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8974,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 8975,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8976,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8985,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8987,
mono_monitor_exit_icall_raw,
// token 8991,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8992,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8994,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8996,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8998,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 9010,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 9019,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 9020,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 9022,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 9023,
ves_icall_System_Threading_Thread_GetState_raw,
// token 9024,
ves_icall_System_Threading_Thread_SetState_raw,
// token 9025,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 9026,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 9028,
ves_icall_System_Threading_Thread_YieldInternal,
// token 9030,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 10121,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 10125,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 10127,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 10128,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 10129,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 10130,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 10273,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 10274,
ves_icall_System_GCHandle_InternalFree_raw,
// token 10275,
ves_icall_System_GCHandle_InternalGet_raw,
// token 10276,
ves_icall_System_GCHandle_InternalSet_raw,
// token 10296,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 10297,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 10298,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 10300,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 10343,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 10417,
mono_object_hash_icall_raw,
// token 10419,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 10430,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 10431,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 10432,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 10433,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10871,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 10872,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10877,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10878,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10913,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10937,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10943,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10950,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10960,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10964,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 11048,
ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw,
// token 11053,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 11055,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 11067,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 11069,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 11070,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 11071,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 11078,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 11091,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 11111,
ves_icall_reflection_get_token_raw,
// token 11112,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 11120,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 11122,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 11129,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 11130,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 11133,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 11135,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 11140,
ves_icall_reflection_get_token_raw,
// token 11146,
ves_icall_get_method_info_raw,
// token 11147,
ves_icall_get_method_attributes,
// token 11154,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 11156,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 11168,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 11171,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 11172,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 11173,
ves_icall_reflection_get_token_raw,
// token 11184,
ves_icall_InternalInvoke_raw,
// token 11193,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 11199,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 11200,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 11201,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 11203,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 11204,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 11222,
ves_icall_InvokeClassConstructor_raw,
// token 11224,
ves_icall_InternalInvoke_raw,
// token 11238,
ves_icall_reflection_get_token_raw,
// token 11261,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 11262,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 11280,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 11285,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 11315,
ves_icall_reflection_get_token_raw,
// token 11316,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11774,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11775,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11851,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 11929,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 12180,
ves_icall_ModuleBuilder_basic_init_raw,
// token 12181,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 12187,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 12188,
ves_icall_ModuleBuilder_getToken_raw,
// token 12189,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 12195,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 12265,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 12764,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 12765,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 13356,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 13357,
ves_icall_System_Diagnostics_Debugger_Log,
// token 14343,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 14364,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 14371,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 14373,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
};
