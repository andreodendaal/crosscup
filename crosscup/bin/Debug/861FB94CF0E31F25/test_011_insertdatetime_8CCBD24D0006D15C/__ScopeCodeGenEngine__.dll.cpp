#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
enum OperatorUID
{
UID_RowGenerator_0 = 1,
UID_RowGenerator_0_Data0 = 2,
UID_Process_1 = 3,
UID_Process_1_Data0 = 4,
UID_Process_2 = 5,
UID_Process_2_Data0 = 6,
UID_Partition_3 = 7,
UID_SV1_Extract_Partition_out0 = 8,
UID_Process_4 = 9,
UID_Process_4_Data0 = 10,
UID_SStreamOutput_5 = 11,
UID_SV2_Split_out0 = 12,
UID_SV2_Split_out1 = 13,
UID_MetadataAggregate_6 = 14,
UID_SV3_Aggregate_Internal_out0 = 15,
UID_SStreamMetadataOutput_7 = 16,
UID_SV3_Aggregate_out0 = 17,
UID_Concatenate_9 = 18,
UID_Process_1_0,
UID_Process_1_1
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class PartitionSchema_RowGenerator_0
    {
    public:
        PartitionSchema_RowGenerator_0();
        PartitionSchema_RowGenerator_0(const PartitionSchema_RowGenerator_0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        PartitionSchema_RowGenerator_0(const PartitionSchema_RowGenerator_0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);


        static string GetDefinition()
        {
            return std::string{};
        }

        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, PartitionSchema_RowGenerator_0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, PartitionSchema_RowGenerator_0 & row)
    {
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class PartitionSchema_Partition_3
    {
    public:
        ScopeDateTime m_RaceDate;
        FString m_RaceName;
        PartitionSchema_Partition_3();
        PartitionSchema_Partition_3(const PartitionSchema_Partition_3 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        PartitionSchema_Partition_3(const PartitionSchema_Partition_3 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);


        static string GetDefinition()
        {
            return std::string{ u8"RaceDate:DateTime,RaceName:string" };
        }

        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, PartitionSchema_Partition_3 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, PartitionSchema_Partition_3 & row)
    {
        os << "\t" << std::string{ u8"RaceDate" } << ":\t" << row.m_RaceDate << endl;
        os << "\t" << std::string{ u8"RaceName" } << ":\t" << row.m_RaceName << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_1_Data0
    {
    public:
        NativeNullable<__int64> m_RowNumber0__;
        Process_1_Data0();
        Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_1_Data0(const Process_1_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_1_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_1_Data0 & row)
    {
        os << "\t" << std::string{ u8"RowNumber0__" } << ":\t" << row.m_RowNumber0__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_2_Data0
    {
    public:
        ScopeDateTime m_RaceDate;
        ScopeDateTime m_RaceTime;
        FString m_RaceName;
        FString m_Lap1String;
        int m_Lap1Seconds;
        Process_2_Data0();
        Process_2_Data0(const Process_2_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_2_Data0(const Process_2_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_2_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_2_Data0 & row)
    {
        os << "\t" << std::string{ u8"RaceDate" } << ":\t" << row.m_RaceDate << endl;
        os << "\t" << std::string{ u8"RaceTime" } << ":\t" << row.m_RaceTime << endl;
        os << "\t" << std::string{ u8"RaceName" } << ":\t" << row.m_RaceName << endl;
        os << "\t" << std::string{ u8"Lap1String" } << ":\t" << row.m_Lap1String << endl;
        os << "\t" << std::string{ u8"Lap1Seconds" } << ":\t" << row.m_Lap1Seconds << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


#if defined(COMPILE_MANAGED)

#endif // defined(COMPILE_MANAGED)


//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<PartitionSchema_RowGenerator_0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, PartitionSchema_RowGenerator_0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
        static bool DeserializeKeyForSS(MemoryInputStream * input, PartitionSchema_RowGenerator_0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
        static void DeserializeKey(ResourceInputStream * input, PartitionSchema_RowGenerator_0 & row)
        {
            char type = 0, null = 0;
        }
        static void DeserializePartitionSpec(ResourceInputStream * input, PartitionSchema_RowGenerator_0 & row)
        {
            return ;
        }

    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<PartitionSchema_RowGenerator_0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, PartitionSchema_RowGenerator_0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            output->Write(b);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, "--- Printing row content is disabled. To enable, use '-ON ReportRowContentOnError'. ---"});
            }
        }
        static void Serialize(DummyOutputStream * output, const PartitionSchema_RowGenerator_0 & row)
        {
            SCOPE_ASSERT(false); 
        }
        static void SerializeKeyForSS(MemoryOutputStream* output, const PartitionSchema_RowGenerator_0 & row)        
        {
            output->Write(false);
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<PartitionSchema_Partition_3>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, PartitionSchema_Partition_3 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_RaceDate);
                    input->Read(row.m_RaceName);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_RaceDate);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_RaceName);
                    }
                    else
                    {
                        row.m_RaceName.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
        static bool DeserializeKeyForSS(MemoryInputStream * input, PartitionSchema_Partition_3 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_RaceDate);
                    input->Read(row.m_RaceName);
                }
                else
                {
                    char ___masking___[1];
                    input->Read(___masking___[0]); 
                    input->Read(row.m_RaceDate);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_RaceName);
                    }
                    else
                    {
                        row.m_RaceName.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
        static void DeserializeKey(ResourceInputStream * input, PartitionSchema_Partition_3 & row)
        {
            char type = 0, null = 0;
                input->Read(type);
                SCOPE_ASSERT(type != 34 && type != 35);
                input->Read(null);
                SCOPE_ASSERT(!null);
                input->Read(row.m_RaceDate);
                input->Read(type);
                SCOPE_ASSERT(type != 34 && type != 35);
                input->Read(null);
                if (null)
                {
                    row.m_RaceName.SetNull();
                }
                else
                {
                    input->Read(row.m_RaceName);
                }
        }
        static void DeserializePartitionSpec(ResourceInputStream * input, PartitionSchema_Partition_3 & row)
        {
            char ___masking___[1];
            input->Read(___masking___); 
            SCOPE_ASSERT((___masking___[0] & 1 ) != 1);
            input->Read(row.m_RaceDate);
            if ((___masking___[0] & 2 ) != 2)
            {
                input->Read(row.m_RaceName);
            }
            else
            {
                row.m_RaceName.SetNull();
            }
        }

    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<PartitionSchema_Partition_3>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, PartitionSchema_Partition_3 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_RaceName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_RaceDate);
            if (!row.m_RaceName.IsNull())
            {
                output->Write(row.m_RaceName);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, "--- Printing row content is disabled. To enable, use '-ON ReportRowContentOnError'. ---"});
            }
        }
        static void Serialize(DummyOutputStream * output, const PartitionSchema_Partition_3 & row)
        {
            SCOPE_ASSERT(false); 
        }
        static void SerializeKeyForSS(MemoryOutputStream* output, const PartitionSchema_Partition_3 & row)        
        {
            char b = 0;
            char ___masking___[1];
            memset(___masking___, 0, sizeof(___masking___));

            bool hasNull = false;
            if (row.m_RaceName.IsNull())
            {
                hasNull = true;
                b = 1;
                ___masking___[0] |= 2;
            }
            output->Write(b);

            if (hasNull)
            {
                output->Write(___masking___, sizeof(___masking___));
            }
            output->Write(row.m_RaceDate);
            if (!row.m_RaceName.IsNull())
            {
                output->Write(row.m_RaceName);
            }
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_2_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_2_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_RaceDate);
                    input->Read(row.m_RaceTime);
                    input->Read(row.m_RaceName);
                    input->Read(row.m_Lap1String);
                    input->Read(row.m_Lap1Seconds);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_RaceDate);
                    input->Read(row.m_RaceTime);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_RaceName);
                    }
                    else
                    {
                        row.m_RaceName.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_Lap1String);
                    }
                    else
                    {
                        row.m_Lap1String.SetNull();
                    }
                    input->Read(row.m_Lap1Seconds);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_2_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, Process_2_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_RaceName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_Lap1String.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_RaceDate);
            output->Write(row.m_RaceTime);
            if (!row.m_RaceName.IsNull())
            {
                output->Write(row.m_RaceName);
            }
            if (!row.m_Lap1String.IsNull())
            {
                output->Write(row.m_Lap1String);
            }
            output->Write(row.m_Lap1Seconds);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, "--- Printing row content is disabled. To enable, use '-ON ReportRowContentOnError'. ---"});
            }
        }
        static void Serialize(DummyOutputStream * output, const Process_2_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_2_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE PartitionSchema_RowGenerator_0::PartitionSchema_RowGenerator_0()
    {
    }
    INLINE PartitionSchema_RowGenerator_0::PartitionSchema_RowGenerator_0(const PartitionSchema_RowGenerator_0 & c, IncrementalAllocator * alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE PartitionSchema_Partition_3::PartitionSchema_Partition_3()
    {
    }
    INLINE PartitionSchema_Partition_3::PartitionSchema_Partition_3(const PartitionSchema_Partition_3 & c, IncrementalAllocator * alloc) :
            m_RaceDate(c.m_RaceDate),
            m_RaceName(c.m_RaceName, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_1_Data0::Process_1_Data0()
    {
    }
    INLINE Process_1_Data0::Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc) :
            m_RowNumber0__(c.m_RowNumber0__)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_2_Data0::Process_2_Data0()
    {
        m_Lap1Seconds = 0;
    }

#pragma endregion Schema Constructors
#pragma hdrstop
#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}
extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif
#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;
extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    ErrorManager::GetGlobal()->EnableJSON();

}
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}
#endif
#endif
#pragma region SV1_Extract_Partition
#if defined(COMPILE_SV1_EXTRACT_PARTITION) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<>
    class RowGeneratePolicy<PartitionSchema_RowGenerator_0, UID_RowGenerator_0>
    {
    public:
        static const unsigned __int64 m_cRows = 1;
        typedef PartitionSchema_RowGenerator_0 PartitionSchema;
        static const bool m_generateMetadata = false;
        static const PartitioningType m_partitioning = Invalid;
        static const bool m_truncatedRangeKey = false;
    };

#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<PartitionSchema_RowGenerator_0,UID_Process_1_0>
    {
    public:
        struct KeyStruct
        {

            KeyStruct(PartitionSchema_RowGenerator_0 & c) 

            {
            }

            KeyStruct(const PartitionSchema_RowGenerator_0 & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct(KeyStruct & c) 

            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct() 

            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(PartitionSchema_RowGenerator_0 & row, KeyType & key)
        {
            int r = 0;
            return r;
        }

        static int Compare(PartitionSchema_RowGenerator_0 * n1, PartitionSchema_RowGenerator_0 * n2)
        {
            int r = 0;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<PartitionSchema_RowGenerator_0,UID_Process_1_1>
    {
    public:
        struct KeyStruct
        {

            KeyStruct(PartitionSchema_RowGenerator_0 & c) 

            {
            }

            KeyStruct(const PartitionSchema_RowGenerator_0 & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct(KeyStruct & c) 

            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct() 

            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(PartitionSchema_RowGenerator_0 & row, KeyType & key)
        {
            int r = 0;
            return r;
        }

        static int Compare(PartitionSchema_RowGenerator_0 * n1, PartitionSchema_RowGenerator_0 * n2)
        {
            int r = 0;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename PartitionSchema_RowGenerator_0, typename Process_1_Data0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(PartitionSchema_RowGenerator_0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
        }


        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class SequenceProjectPolicy<typename PartitionSchema_RowGenerator_0, typename Process_1_Data0, UID_Process_1> 
    {
    public:
        typedef KeyComparePolicy<PartitionSchema_RowGenerator_0, UID_Process_1_0> GroupKeyPolicy;
        typedef KeyComparePolicy<PartitionSchema_RowGenerator_0, UID_Process_1_1> ValueKeyPolicy;

        void SetVertexID(__int64 vertexID)
        {
            m_vertexID = vertexID;
        }

        // Advance all sequence functions to the next row, and copy their values to the output.
        //
        void AdvanceAndOutput(bool isNewGroup, bool isNewOrder, Process_1_Data0 &output, PartitionSchema_RowGenerator_0 &input)
        {
                output.m_RowNumber0__ = _function0.Step(isNewGroup);
        }

    private:
        __int64 m_vertexID;
            SequenceFunction_ROW_NUMBER _function0;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_2 [] =
    {
        "new System.DateTime[]{System.DateTime.FromBinary(636500160000000000L /* 12/28/2017 12:00:00 AM */)}[(int)(RowNumber0__ - 1L)]",
        "new System.DateTime[]{System.DateTime.FromBinary(636500502000000000L /* 12/28/2017 9:30:00 AM */)}[(int)(RowNumber0__ - 1L)]",
        "new System.String[]{\"2017 Caldwell woods\"}[(int)(RowNumber0__ - 1L)]",
        "new System.String[]{\"7:34\"}[(int)(RowNumber0__ - 1L)]",
        "new System.Int32[]{454}[(int)(RowNumber0__ - 1L)]",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename Process_1_Data0, typename Process_2_Data0, UID_Process_2>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_2_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_RaceDate = staticarray_0[scope_cast<int>((scope_cast<__int64>(input.m_RowNumber0__) - 1LL))];
                exceptionIndex++;
                output.m_RaceTime = staticarray_1[scope_cast<int>((scope_cast<__int64>(input.m_RowNumber0__) - 1LL))];
                exceptionIndex++;
                output.m_RaceName = staticarray_2[scope_cast<int>((scope_cast<__int64>(input.m_RowNumber0__) - 1LL))];
                exceptionIndex++;
                output.m_Lap1String = staticarray_3[scope_cast<int>((scope_cast<__int64>(input.m_RowNumber0__) - 1LL))];
                exceptionIndex++;
                output.m_Lap1Seconds = staticarray_4[scope_cast<int>((scope_cast<__int64>(input.m_RowNumber0__) - 1LL))];
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_2[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_2[exceptionIndex]);
            }
        }

        static ScopeDateTime staticarray_0[1];
        static ScopeDateTime staticarray_1[1];
        static FString staticarray_2[1];
        static FString staticarray_3[1];
        static int staticarray_4[1];

        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
            static __int64 staticarray_0_tmp[1] = { 636500160000000000LL /* 12/28/2017 12:00:00 AM */ };
            for(int idx = 0; idx < 1; idx++)
            {
                staticarray_0[idx] = ScopeDateTime::FromBinary(staticarray_0_tmp[idx]);
            }
            static __int64 staticarray_1_tmp[1] = { 636500502000000000LL /* 12/28/2017 9:30:00 AM */ };
            for(int idx = 0; idx < 1; idx++)
            {
                staticarray_1[idx] = ScopeDateTime::FromBinary(staticarray_1_tmp[idx]);
            }
            static struct { const char* str; size_t size; } staticarray_2_tmp[1] = { { "2017 Caldwell woods", 19 } };
            for(int idx = 0; idx < 1; idx++)
            {
                staticarray_2[idx] = FString(staticarray_2_tmp[idx].str, staticarray_2_tmp[idx].size);
            }
            static struct { const char* str; size_t size; } staticarray_3_tmp[1] = { { "7:34", 4 } };
            for(int idx = 0; idx < 1; idx++)
            {
                staticarray_3[idx] = FString(staticarray_3_tmp[idx].str, staticarray_3_tmp[idx].size);
            }
            static int staticarray_4_tmp[1] = {454};
            for(int idx = 0; idx < 1; idx++)
            {
                staticarray_4[idx] = staticarray_4_tmp[idx];
            }
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements().AddMemoryInRows(1, 1);
        }
    };

#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    ScopeDateTime RowTransformPolicy<Process_1_Data0, Process_2_Data0, UID_Process_2>::staticarray_0[1];
    ScopeDateTime RowTransformPolicy<Process_1_Data0, Process_2_Data0, UID_Process_2>::staticarray_1[1];
    FString RowTransformPolicy<Process_1_Data0, Process_2_Data0, UID_Process_2>::staticarray_2[1];
    FString RowTransformPolicy<Process_1_Data0, Process_2_Data0, UID_Process_2>::staticarray_3[1];
    int RowTransformPolicy<Process_1_Data0, Process_2_Data0, UID_Process_2>::staticarray_4[1];
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<>
    class RowHashPolicy<Process_2_Data0,UID_Partition_3>
    {
    public:
        static __int64 Hash(Process_2_Data0* row)
        {
            int finalHash = 0;
            {
                int h = ScopeHash<ScopeDateTime> ((*row).m_RaceDate);
                finalHash += h;
            }
            {
                int h = ScopeHash<FString> ((*row).m_RaceName);
                finalHash += h;
            }
            finalHash ^= (finalHash>>8);

            return finalHash;
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_Partition_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        IOManager::EnableIScopeNonBlockingStreaming();
                int x_partitionIndex_RowGenerator_0_0 = 0;
                SCOPE_ASSERT(x_partitionIndex_RowGenerator_0_0 >= 0);
                // Define extractor type and construct object
        typedef RowGenerator<PartitionSchema_RowGenerator_0, RowGeneratePolicy<PartitionSchema_RowGenerator_0, UID_RowGenerator_0>, UID_RowGenerator_0> ExtractorType1_SV1_Extract_Partition;        
        unique_ptr<ExtractorType1_SV1_Extract_Partition> extractor_0_ptr= make_unique<ExtractorType1_SV1_Extract_Partition>(x_partitionIndex_RowGenerator_0_0, "", UID_RowGenerator_0);
        ExtractorType1_SV1_Extract_Partition * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define the type of the operator
        typedef SequenceProject<ExtractorType1_SV1_Extract_Partition, PartitionSchema_RowGenerator_0, Process_1_Data0, UID_Process_1> SequenceProjectType_Process_1;
        // Construct operator and initialize it.
        unique_ptr<SequenceProjectType_Process_1> sequence_project_Process_1_ptr (new SequenceProjectType_Process_1(extractor_0, UID_Process_1));
        SequenceProjectType_Process_1 * sequence_project_Process_1 = sequence_project_Process_1_ptr.get();
        ULONG sequence_project_Process_1_count = 1;
        __int64 sequence_project_vertexID_Process_1 = vertexExecutionInfo->m_vertexId;
        sequence_project_Process_1->SetVertexID(sequence_project_vertexID_Process_1);
        // Define the type of the operator
        typedef FilterTransformer<SequenceProjectType_Process_1, Process_1_Data0, Process_2_Data0, UID_Process_2> FilterTransformerType_Process_2;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_2> filterTransformer_Process_2_ptr (new FilterTransformerType_Process_2(sequence_project_Process_1, UID_Process_2));
        FilterTransformerType_Process_2 * filterTransformer_Process_2 = filterTransformer_Process_2_ptr.get();
        ULONG filterTransformer_Process_2_count = 1;
        // Define HashPartition partitioner type and object
        typedef HashPartitioner<PartitionSchema_Partition_3, Process_2_Data0, UID_Partition_3> PartitionerType_Partition_3;
        PartitionerType_Partition_3 partitioner_Partition_3;
        // Define RangePartition operator
        typedef PartitionOutputer<FilterTransformerType_Process_2, Process_2_Data0, PartitionerType_Partition_3, BinaryOutputPolicy<typename Process_2_Data0>, AugmentedBinaryOutputStream<PartitionPayloadMetadata<PartitionSchema_Partition_3,UID_Partition_3>>, true > PartitionOutputerType_Partition_3;
        unique_ptr<PartitionOutputerType_Partition_3> partitionOutputer_Partition_3_ptr (new PartitionOutputerType_Partition_3(filterTransformer_Process_2, &partitioner_Partition_3, outputs, outputCnt, x_outputBufSize, x_outputBufCnt, UID_Partition_3));
        PartitionOutputerType_Partition_3* partitionOutputer_Partition_3 = partitionOutputer_Partition_3_ptr.get();        
        try
        {
            // Init operator chain
            partitionOutputer_Partition_3->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_2_Data0 row;
            partitionOutputer_Partition_3->GetNextRow(row);
    
            // Close operator chain
            partitionOutputer_Partition_3->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        partitionOutputer_Partition_3->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV1_Extract_Partition
#pragma region SV2_Split
#if defined(COMPILE_SV2_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_2_Data0,UID_Process_4>
    {
    public:
        struct KeyStruct
        {
            ScopeDateTime m_RaceDate;
            FString m_RaceName;

            KeyStruct(Process_2_Data0 & c) :
                m_RaceDate(c.m_RaceDate),
                m_RaceName(c.m_RaceName)
            {
            }

            KeyStruct(const Process_2_Data0 & c, IncrementalAllocator * alloc) :
                m_RaceDate(const_cast<Process_2_Data0&>(c).m_RaceDate),
                m_RaceName(const_cast<Process_2_Data0&>(c).m_RaceName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RaceDate(c.m_RaceDate),
                m_RaceName(c.m_RaceName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RaceDate(const_cast<KeyStruct&>(c).m_RaceDate),
                m_RaceName(const_cast<KeyStruct&>(c).m_RaceName, alloc)
            {
            }

            KeyStruct() :
                m_RaceDate(),
                m_RaceName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tRaceDate:\t" << row.m_RaceDate << endl;
                os << "\tRaceName:\t" << row.m_RaceName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_2_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RaceDate, key.m_RaceDate)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_RaceName, key.m_RaceName)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_2_Data0 * n1, Process_2_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RaceDate, (*n2).m_RaceDate)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_RaceName, (*n2).m_RaceName)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    class AssertRowOrderPolicy_Process_2_Data0_UID_Process_4
    {
        typedef KeyComparePolicy<Process_2_Data0, UID_Process_4>::KeyType KeyType;
        KeyType m_key;

        bool m_firstRow;
    public:
        AssertRowOrderPolicy_Process_2_Data0_UID_Process_4() : m_firstRow(true) {}

        void CheckAssert(Process_2_Data0& row, IncrementalAllocator& allocator)
        {
            int cmp = 0;
            if (m_firstRow)
            {
                m_firstRow = false;
                cmp = 1; // set cmp to copy key part from the row at the end
            }
            else
            {
                cmp = KeyComparePolicy<Process_2_Data0, UID_Process_4>::Compare(row, m_key);

                if (cmp < 0)
                {
#ifdef SCOPE_DEBUG
                    cout << "Current row: " << endl;
                    cout << row << endl;
                    cout << "Previous key: " << endl;
                    cout << m_key << endl;
#endif
                    throw RuntimeException(E_RUNTIME_USER_ROWORDERING_CORRUPTED);
                    // if we want to skip the invalid row we should simply return false; instead of throwing an exception
                }
            }

            if (cmp != 0)
            {
                // copy the key part of the row for the next row comparison
                allocator.Reset();
                new (&m_key) KeyType(row, &allocator);
            }
        }

    };

#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<>
    class SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>
    {
    public:
        SStreamV3OutputPolicy(UINT)
        {
        }

        static const string& DataSchemaString()
        {
            static string* spDataSchemaString = new string(std::string{ u8"<?xml version=\"1.0\"?>\r\n<Schema>\r\n  <Format>1</Format>\r\n  <Columns>\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n      <Type>DateTime</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceTime</Name>\r\n      <Type>DateTime</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap1String</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap1Seconds</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n  </Columns>\r\n  <SortKey Unique=\"False\">\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n      <Order>Asc</Order>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n      <Order>Asc</Order>\r\n    </Column>\r\n  </SortKey>\r\n</Schema>" });
            return *spDataSchemaString;
        }

        static const char* m_columnNames[];
        static const char* m_columnTypes[];
        static BYTE m_dataColumnSizes[];

        static BYTE m_indexColumnSizes[];

        static UINT m_dataPageSortKeys[];
        static const char* m_dataPageSortOrders[];
        static const char  m_dataPageSortUniq[];
        static UINT m_dataPageSortKeysCnt;

        static const char m_partitionType[];
        static const UINT m_partitionColumnCount = 2;

        static UINT       m_partitionKeys[];
        static const char **  m_partitionOrders;
        static const int m_blockSize = 4194304;
        static int GetPartitionIndex(const Process_2_Data0& row)
        {
            // Global sstream outputter does not care partition index.
            UNREFERENCED_PARAMETER(row);
            return 0;
            
        }        
        static void SerializeRow(HANDLE rowHandle, AutoBuffer* buffer, int* columnOffsets, SIZE_T arraySize)
        {
            UNREFERENCED_PARAMETER(arraySize);
            
            Process_2_Data0& row = *(Process_2_Data0*)rowHandle;
            SStreamDataOutputStream output(buffer);

            char ___masking___[1];
            memset(___masking___, 0, sizeof(___masking___));

            if (row.m_RaceName.IsNull())
            {
                ___masking___[0] |= 4;
            }
            if (row.m_Lap1String.IsNull())
            {
                ___masking___[0] |= 8;
            }
            auto rowStart = output.GetPosition();

            // write a null mask regardless whether there are nullable columns,
            // if there aren't any nullable column, simply write the array's 
            // initial values, which are zeros.
            output.Write(___masking___, sizeof(___masking___));


            columnOffsets[0] = (int)(output.GetPosition() - rowStart);
            output.Write(row.m_RaceDate);

            columnOffsets[1] = (int)(output.GetPosition() - rowStart);
            output.Write(row.m_RaceTime);

            columnOffsets[2] = (int)(output.GetPosition() - rowStart);
            if (!row.m_RaceName.IsNull())
            {
                output.Write(row.m_RaceName);
            }

            columnOffsets[3] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Lap1String.IsNull())
            {
                output.Write(row.m_Lap1String);
            }

            columnOffsets[4] = (int)(output.GetPosition() - rowStart);
            output.Write(row.m_Lap1Seconds);

            columnOffsets[5] = (int)(output.GetPosition() - rowStart);
        }

        static const SStreamVersion m_streamVersion = ScopeEngine::SStreamVersion::SSTREAM_VERSION_V3;
    };

    const char* SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_columnNames[] = 
        { "RaceDate", "RaceTime", "RaceName", "Lap1String", "Lap1Seconds"};

    const char* SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_columnTypes[] = 
        { "DateTime", "DateTime", "string", "string", "int"};

    BYTE SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_dataColumnSizes[] = 
        { 8, 8, 0, 0, 4};
        
    BYTE SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_indexColumnSizes[] = 
        { 8, 0, 8, 0, 8, 8, 4 };

    UINT SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_dataPageSortKeys[] =
        { 0, 2 };
        
    UINT SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_dataPageSortKeysCnt = 
        2;

    const char* SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_dataPageSortOrders[] =
        {"Asc", "Asc"};

    const char SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_dataPageSortUniq[] =
        "False";

    const char SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_partitionType[] =
        "HashPartition";
    UINT       SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_partitionKeys[] =
        { 0, 2 };
    const char **  SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::m_partitionOrders = nullptr;


#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<>
    class SStreamPartitionWriter<Process_2_Data0, UID_SStreamOutput_5>
    {
    private:
        SStreamOutputStream<Process_2_Data0, SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>, PartitionSchema_Partition_3, UID_Partition_3> sstreamOutputStream_0;
        BlockDevice*    m_metadataDevice;
        SIZE_T          m_bufSize;
        int             m_bufCount;
    public:
        SStreamPartitionWriter(std::string* filenames, int fileCnt, SIZE_T bufSize, int bufCnt, const string& outputMetadataFileName, bool preferSSD, bool enableBloomFilter)
            : m_bufSize(bufSize)
            , m_bufCount(bufCnt)
            , sstreamOutputStream_0(filenames[0], 0, bufSize, bufCnt, preferSSD, enableBloomFilter)
            , m_metadataDevice(ScopeEngine::IOManager::GetGlobal()->GetDevice(outputMetadataFileName))
        {
            SCOPE_ASSERT(fileCnt == 1);
        }

        void Init()
        {
            sstreamOutputStream_0.Init();
        }

        void SetSequenceNumber(int sequenceNumber)
        {
        }

        void GetPartitionInfo(PartitionMetadata* payload)
        {
            sstreamOutputStream_0.GetPartitionInfo(payload);
        }

        bool ValidPartition()
        {
            return sstreamOutputStream_0.ValidPartition();
        }

        void AppendRow(Process_2_Data0 & output)
        {
            sstreamOutputStream_0.AppendRow(output);
        }

        void Close()
        {
            sstreamOutputStream_0.Close();

            if (ValidPartition())
            {
                unique_ptr<SStreamMetadata> metadata;
                metadata.reset(SStreamMetadata::Create(MemoryManager::GetGlobal()));

                std::string streamSchema = std::string{ u8"<?xml version=\"1.0\"?>\r\n<Schema>\r\n  <Format>1</Format>\r\n  <Columns>\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n      <Type>DateTime</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceTime</Name>\r\n      <Type>DateTime</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap1String</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap1Seconds</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n  </Columns>\r\n  <PartitionKey PartitionType=\"HashPartition\">\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n    </Column>\r\n  </PartitionKey>\r\n  <SortKey Unique=\"False\">\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n      <Order>Asc</Order>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n      <Order>Asc</Order>\r\n    </Column>\r\n  </SortKey>\r\n</Schema>" };

                shared_ptr<vector<ScopeEngine::SSLibV3::ColumnGroupInfo>> colGroupInfos = make_shared<vector<ScopeEngine::SSLibV3::ColumnGroupInfo>>(1);
                shared_ptr<vector<ScopeEngine::SSLibV3::DataunitTableRow>> dataUnitTableRows = make_shared<vector<ScopeEngine::SSLibV3::DataunitTableRow>>(1);
                shared_ptr<ScopeEngine::SSLibV3::SStreamStatistics> statistics;
                statistics = sstreamOutputStream_0.GetStatistics();
                std::string dataSchema_0 = SStreamV3OutputPolicy<Process_2_Data0, UID_SStreamOutput_5>::DataSchemaString();

                ScopeEngine::SSLibV3::ColumnGroupInfo& colGroupInfo_0 = (*colGroupInfos)[0];
                colGroupInfo_0.m_columnGroupIndex = 0;
                colGroupInfo_0.m_columnGroupSchema = dataSchema_0;

                ScopeEngine::SSLibV3::DataunitTableRow& dataunitInfo_0 = (*dataUnitTableRows)[0];
                dataunitInfo_0.m_PartitionIndex = sstreamOutputStream_0.GetPartitionIndex();
                dataunitInfo_0.m_ColumnGroupIndex = 0;
                dataunitInfo_0.m_Offset = 0;
                dataunitInfo_0.m_Length = sstreamOutputStream_0.Length();
                dataunitInfo_0.m_DataLength = sstreamOutputStream_0.DataLength();
                dataunitInfo_0.m_RowCount = sstreamOutputStream_0.RowCount();
                dataunitInfo_0.m_DeltaIndex = 0;

                shared_ptr<vector<ScopeEngine::SSLibV3::PartitionInfoTableRow>> partInfoRows = make_shared<vector<ScopeEngine::SSLibV3::PartitionInfoTableRow>>(1);
                ScopeEngine::SSLibV3::PartitionInfoTableRow& partInfo = (*partInfoRows)[0];
                // all column groups have the same partition information
                partInfo.m_PartitionKeyRange = sstreamOutputStream_0.GetPartitionKeyRange();
                partInfo.m_BeginPartitionIndex = sstreamOutputStream_0.GetPartitionIndex();
                partInfo.m_AffinityId = GuidToString(sstreamOutputStream_0.GetAffinityGuid());

                metadata->Initialize(streamSchema,
                    colGroupInfos,
                    dataUnitTableRows,
                    partInfoRows,
                    statistics);

                metadata->Write(m_metadataDevice);
            }
            else
            {
                // write a empty file and it's consistent with the previous implementation
                unique_ptr<Scanner> scanner(Scanner::CreateScanner(m_metadataDevice, MemoryManager::GetGlobal(), Scanner::STYPE_Create, 1024, 1024, 16));
                scanner->Open();
                scanner->Start();
                scanner->Close();
            }

        }

        LONGLONG GetTotalIoWaitTime()
        {
            LONGLONG time = 0;
            time += sstreamOutputStream_0.GetTotalIoWaitTime();
            return time;
        }

        void WriteRuntimeStats(TreeNode & root)
        {
            sstreamOutputStream_0.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements(SIZE_T bufferCount)
        {
            return OperatorRequirements()
                .AddMemoryForOutputSStreams(1, Configuration::GetGlobal().GetMaxInMemoryRowSize(), m_bufCount);
        }

        // the following methods are for SplitOutputter
        void WriteMetadata(PartitionMetadata* metadata)
        {
            GetPartitionInfo(metadata);
        }

        void Finish()
        {
            // do nothing
        }

        void Flush(bool forcePersistent = false)
        {
            // do nothing
            (forcePersistent);
        }

    };

#endif
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV2_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<Process_2_Data0, BinaryExtractPolicy<Process_2_Data0>, AugmentedBinaryInputStream<PartitionPayloadMetadata<PartitionSchema_Partition_3,UID_Partition_3>>> ExtractorType1_SV2_Split;        
        unique_ptr<ExtractorType1_SV2_Split> extractor_0_ptr= make_unique<ExtractorType1_SV2_Split>(inputs[0], true, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_Partition_out0);
        ExtractorType1_SV2_Split * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define the type of the operator
        typedef Asserter<ExtractorType1_SV2_Split, Process_2_Data0, AssertRowOrderPolicy_Process_2_Data0_UID_Process_4, UID_Process_4> AssertType_Process_4;
        // Construct operator and initialize it.
        unique_ptr<AssertType_Process_4> assertType_Process_4_ptr (new AssertType_Process_4(extractor_0, UID_Process_4));
        AssertType_Process_4 * assertType_Process_4 = assertType_Process_4_ptr.get();
        ULONG assertType_Process_4_count = 1;
        // Define outputer type
        typedef SStreamOutputer<AssertType_Process_4, Process_2_Data0, UID_SStreamOutput_5> OutputerType2_SV2_Split;

        // Create array of file names that will be used in SStreamOutputer operator.
        auto outputFiles = std::unique_ptr<std::string[]>{ new std::string[outputCnt] };
        for (int c = 0; c < outputCnt; ++c)
        {
            outputFiles[c] = outputs[c].outputFileName;
        }
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV2_Split> outputer_SStreamOutput_5_ptr(new OutputerType2_SV2_Split(assertType_Process_4, outputFiles.get()[0], 1, x_outputBufSize, x_outputBufCnt, outputs[1].outputFileName, false, UID_SStreamOutput_5, false));
        OutputerType2_SV2_Split * outputer_SStreamOutput_5 = outputer_SStreamOutput_5_ptr.get();
        try
        {
            // Init operator chain
            outputer_SStreamOutput_5->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_2_Data0 row;
            outputer_SStreamOutput_5->GetNextRow(row);
    
            // Close operator chain
            outputer_SStreamOutput_5->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SStreamOutput_5->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV2_Split
#pragma region SV3_Aggregate
#if defined(COMPILE_SV3_AGGREGATE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Aggregate_Internal_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // remove the empty stream
        // For the case "PARTITION_NOT_EXIST", the output stream is blank. So here the input stream may be blank.
        int inputIdx2 = 0;
        
        for (int inputIdx = 0; inputIdx < inputCnt; ++inputIdx)
        {
            if(inputs[inputIdx].length == 0)
            {
                continue;                        
            }
            inputs[inputIdx2] = inputs[inputIdx];
            ++inputIdx2;
        }
        inputCnt =inputIdx2;
        // Define extractor type and construct objects
        // 
        typedef SStreamMetadataExtractor<Process_2_Data0> ExtractorType1_SV3_Aggregate;
        unique_ptr<unique_ptr<ExtractorType1_SV3_Aggregate>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV3_Aggregate>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV3_Aggregate(inputs[i].inputFileName, i, false, UID_SV2_Split_out1));
        }
        ExtractorType1_SV3_Aggregate ** extractor_0 = (ExtractorType1_SV3_Aggregate **)extractor_0_array.get();
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Define the type of the operator
        typedef Merger<ExtractorType1_SV3_Aggregate, Process_2_Data0, ScopeUnionAll<ExtractorType1_SV3_Aggregate, Process_2_Data0>, UID_MetadataAggregate_6> MetadataAggregateType_MetadataAggregate_6;
        unique_ptr<MetadataAggregateType_MetadataAggregate_6> metadataAggregate_MetadataAggregate_6_ptr(new MetadataAggregateType_MetadataAggregate_6(extractor_0 + 0, extractor_0_count, UID_MetadataAggregate_6));
        MetadataAggregateType_MetadataAggregate_6* metadataAggregate_MetadataAggregate_6 = metadataAggregate_MetadataAggregate_6_ptr.get();
        // Define outputer type
        typedef SStreamMetadataOutputer<MetadataAggregateType_MetadataAggregate_6, Process_2_Data0, PartitionSchema_Partition_3, UID_SStreamMetadataOutput_7> OutputerType2_SV3_Aggregate;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV3_Aggregate> outputer_SV3_Aggregate_Internal_out0_ptr(new OutputerType2_SV3_Aggregate(metadataAggregate_MetadataAggregate_6, outputs[0].outputFileName, "", false, false, UID_SV3_Aggregate_Internal_out0));
        OutputerType2_SV3_Aggregate * outputer_SV3_Aggregate_Internal_out0 = outputer_SV3_Aggregate_Internal_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV3_Aggregate_Internal_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_2_Data0 row;
            outputer_SV3_Aggregate_Internal_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV3_Aggregate_Internal_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV3_Aggregate_Internal_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<PartitionSchema_Partition_3,UID_SStreamMetadataOutput_7>
    {
    public:
        struct KeyStruct
        {

            KeyStruct(PartitionSchema_Partition_3 & c) 

            {
            }

            KeyStruct(const PartitionSchema_Partition_3 & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct(KeyStruct & c) 

            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct() 

            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(PartitionSchema_Partition_3 & row, KeyType & key)
        {
            int r = 0;
            return r;
        }

        static int Compare(PartitionSchema_Partition_3 * n1, PartitionSchema_Partition_3 * n2)
        {
            int r = 0;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Aggregate_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // remove the empty stream
        // For the case "PARTITION_NOT_EXIST", the output stream is blank. So here the input stream may be blank.
        int inputIdx2 = 0;
        
        for (int inputIdx = 0; inputIdx < inputCnt; ++inputIdx)
        {
            if(inputs[inputIdx].length == 0)
            {
                continue;                        
            }
            inputs[inputIdx2] = inputs[inputIdx];
            ++inputIdx2;
        }
        inputCnt =inputIdx2;
        // Define extractor type and construct objects
        // 
        typedef SStreamMetadataExtractor<Process_2_Data0> ExtractorType1_SV3_Aggregate;
        unique_ptr<unique_ptr<ExtractorType1_SV3_Aggregate>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV3_Aggregate>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV3_Aggregate(inputs[i].inputFileName, i, false, UID_SV2_Split_out1));
        }
        ExtractorType1_SV3_Aggregate ** extractor_0 = (ExtractorType1_SV3_Aggregate **)extractor_0_array.get();
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Define the type of the operator
        typedef Merger<ExtractorType1_SV3_Aggregate, Process_2_Data0, ScopeUnionAll<ExtractorType1_SV3_Aggregate, Process_2_Data0>, UID_MetadataAggregate_6> MetadataAggregateType_MetadataAggregate_6;
        unique_ptr<MetadataAggregateType_MetadataAggregate_6> metadataAggregate_MetadataAggregate_6_ptr(new MetadataAggregateType_MetadataAggregate_6(extractor_0 + 0, extractor_0_count, UID_MetadataAggregate_6));
        MetadataAggregateType_MetadataAggregate_6* metadataAggregate_MetadataAggregate_6 = metadataAggregate_MetadataAggregate_6_ptr.get();
        static const BYTE userDataByteArray_SStreamMetadataOutput_7[] = {
            0x00,0x01,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x02,0x00,0x00,0x00,0x50,0x53,0x63,0x6F,0x70,0x65,0x43,0x6F,0x6D,0x70,0x69,0x6C,0x65,0x72,0x2C,0x20,0x56,0x65,0x72,0x73,0x69,0x6F,0x6E,0x3D,0x31,0x2E,0x30,0x2E,0x30,0x2E,0x30,0x2C,0x20,0x43,0x75,0x6C,0x74,0x75,0x72,0x65,0x3D,0x6E,0x65,0x75,0x74,0x72,0x61,0x6C,0x2C,0x20,0x50,0x75,0x62,0x6C,0x69,0x63,0x4B,0x65,0x79,0x54,0x6F,0x6B,0x65,0x6E,0x3D,0x39,0x66,0x38,0x37,0x37,0x62,0x36,0x38,0x62,0x30,0x36,0x65,0x30,0x62,0x35,0x65,0x04,0x01,0x00,0x00,0x00,0x97,0x01,0x53,0x79,0x73,0x74,0x65,0x6D,0x2E,0x43,0x6F,0x6C,0x6C,0x65,0x63,0x74,0x69,0x6F,0x6E,0x73,0x2E,0x47,0x65,0x6E,0x65,0x72,0x69,0x63,0x2E,0x4C,0x69,0x73,0x74,0x60,0x31,0x5B,0x5B,0x53,0x63,0x6F,0x70,0x65,0x43,0x6F,0x6D,0x70,0x69,0x6C,0x65,0x72,0x2E,0x46,0x72,0x6F,0x6E,0x74,0x45,0x6E,0x64,0x2E,0x41,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x2C,0x20,0x53,0x63,0x6F,0x70,0x65,0x43,0x6F,0x6D,0x70,0x69,0x6C,0x65,0x72,0x2C,0x20,0x56,0x65,0x72,0x73,0x69,0x6F,0x6E,0x3D,0x31,0x2E,0x30,0x2E,0x30,0x2E,0x30,0x2C,0x20,0x43,0x75,0x6C,0x74,0x75,0x72,0x65,0x3D,0x6E,0x65,0x75,0x74,0x72,0x61,0x6C,0x2C,0x20,0x50,0x75,0x62,0x6C,0x69,0x63,0x4B,0x65,0x79,0x54,0x6F,0x6B,0x65,0x6E,0x3D,0x39,0x66,0x38,0x37,0x37,0x62,0x36,0x38,0x62,0x30,0x36,0x65,0x30,0x62,0x35,0x65,0x5D,0x5D,0x03,0x00,0x00,0x00,0x06,0x5F,0x69,0x74,0x65,0x6D,0x73,0x05,0x5F,0x73,0x69,0x7A,0x65,0x08,0x5F,0x76,0x65,0x72,0x73,0x69,0x6F,0x6E,0x04,0x00,0x00,0x22,0x53,0x63,0x6F,0x70,0x65,0x43,0x6F,0x6D,0x70,0x69,0x6C,0x65,0x72,0x2E,0x46,0x72,0x6F,0x6E,0x74,0x45,0x6E,0x64,0x2E,0x41,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x5B,0x5D,0x02,0x00,0x00,0x00,0x08,0x08,0x09,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x03,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x20,0x53,0x63,0x6F,0x70,0x65,0x43,0x6F,0x6D,0x70,0x69,0x6C,0x65,0x72,0x2E,0x46,0x72,0x6F,0x6E,0x74,0x45,0x6E,0x64,0x2E,0x41,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x02,0x00,0x00,0x00,0x0B};
        auto userData_SStreamMetadataOutput_7 = std::make_tuple(userDataByteArray_SStreamMetadataOutput_7, static_cast<size_t>(397));
        // Define outputer type
        typedef SStreamMetadataOutputer<MetadataAggregateType_MetadataAggregate_6, Process_2_Data0, PartitionSchema_Partition_3, UID_SStreamMetadataOutput_7> OutputerType2_SV3_Aggregate;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV3_Aggregate> outputer_SStreamMetadataOutput_7_ptr(new OutputerType2_SV3_Aggregate(metadataAggregate_MetadataAggregate_6, outputs[0].outputFileName, "", false, false, UID_SStreamMetadataOutput_7, userData_SStreamMetadataOutput_7));
        OutputerType2_SV3_Aggregate * outputer_SStreamMetadataOutput_7 = outputer_SStreamMetadataOutput_7_ptr.get();
        try
        {
            // Init operator chain
            outputer_SStreamMetadataOutput_7->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_2_Data0 row;
            outputer_SStreamMetadataOutput_7->GetNextRow(row);
    
            // Close operator chain
            outputer_SStreamMetadataOutput_7->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SStreamMetadataOutput_7->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV3_Aggregate
// Empty footer
