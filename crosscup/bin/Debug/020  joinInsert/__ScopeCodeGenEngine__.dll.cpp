#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4505 )
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
static ScopeEngine::CompilerSettings GetCompilerSettings()
{
    static ScopeEngine::CompilerSettings settings;
    settings.m_restrictOperatorMemorySpilling = false;
    settings.m_verboseRuntimeStatistic = false;
    return settings;
};

enum OperatorUID
{
UID_Extract_0 = 1,
UID_Extract_0_Data0 = 2,
UID_Process_1 = 3,
UID_SV1_Extract_out0 = 4,
UID_Extract_2 = 5,
UID_SV2_Extract_out0 = 6,
UID_HashJoin_3 = 7,
UID_HashJoin_3_Data0 = 8,
UID_Process_4 = 9,
UID_Process_4_Data0 = 10,
UID_Process_5 = 11,
UID_Process_5_Data0 = 12,
UID_Split_6 = 13,
UID_SV3_Combine_Split_out0 = 14,
UID_SV3_Combine_Split_out1 = 15,
UID_Partition_7 = 16,
UID_SV4_Partition_out0 = 17,
UID_Process_8 = 18,
UID_Process_8_Data0 = 19,
UID_SStreamOutput_9 = 20,
UID_SV5_Split_out0 = 21,
UID_SV5_Split_out1 = 22,
UID_MetadataAggregate_10 = 23,
UID_SV6_Aggregate_Internal_out0 = 24,
UID_SStreamMetadataOutput_11 = 25,
UID_SV6_Aggregate_out0 = 26,
UID_Concatenate_14 = 27,
UID_Output_12 = 28,
UID_Split_6_0,
UID_Split_6_1,
UID_HashJoin_3_0,
UID_HashJoin_3_1,
UID_HashJoin_3_FB_0,
UID_HashJoin_3_FB_1,
UID_Process_4_Prefix,
UID_ParallelUnionAll_Process_1,
UID_ParallelUnionAll_Extract_2
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


    class PartitionSchema_Partition_7
    {
    public:
        ScopeDateTime m_RaceDate;
        FString m_RaceName;
        PartitionSchema_Partition_7();
        PartitionSchema_Partition_7(const PartitionSchema_Partition_7 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        PartitionSchema_Partition_7(const PartitionSchema_Partition_7 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

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

        static const std::string GetSchema()
        {
            return std::string{ u8"RaceDate:DateTime,RaceName:string" };
        }

        friend ostream & operator<<(ostream & os, PartitionSchema_Partition_7 & row);

    };


    INLINE ostream & operator<<(ostream & os, PartitionSchema_Partition_7 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Extract_0_Data0
    {
    public:
        FString m___STAGE20234219b03180694caa81e629d5edf1d8d2;
        FString m___BIB20237a7acc1b4d1946e4bf62e4242c09bbd8;
        FString m_LICENSE;
        Extract_0_Data0();
        Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_0_Data0(const Extract_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"STAGE #:string,BIB #:string,LICENSE:string" };
        }

        friend ostream & operator<<(ostream & os, Extract_0_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Extract_0_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV1_Extract_out0
    {
    public:
        FString m_stagebib;
        FString m_usaclicence;
        FString m_racestaging;
        SV1_Extract_out0();
        SV1_Extract_out0(const SV1_Extract_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_out0(const SV1_Extract_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"stagebib:string,usaclicence:string,racestaging:string" };
        }

        friend ostream & operator<<(ostream & os, SV1_Extract_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV1_Extract_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV2_Extract_out0
    {
    public:
        FString m_Category;
        FString m_Place;
        FString m_Bib;
        FString m_Last;
        FString m_First;
        FString m_Time;
        FString m_Gap;
        FString m___Lap2012e8f0ad361f94a3ea278d357a9758298;
        FString m___Lap202c4cf86ac927d4b828743d91ceb6f8347;
        FString m___Lap2034cdf9222ba304838b7219f43404a81a5;
        FString m___Lap204a90c17cb872d4c26afbfb9a899a60d6f;
        FString m___Lap205ea9c5b51133f4081891e21f6ad4ae205;
        FString m___Lap206e18f8c858a50465e96e4e6972a871f1d;
        FString m___Lap207b06ecdd63f96449fb31c9048bbaa99f8;
        FString m___Lap208b624644a1dd54025914ed4dec7ee6aa7;
        SV2_Extract_out0();
        SV2_Extract_out0(const SV2_Extract_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV2_Extract_out0(const SV2_Extract_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Category:string,Place:string,Bib:string,Last:string,First:string,Time:string,Gap:string,Lap 1:string,Lap 2:string,Lap 3:string,Lap 4:string,Lap 5:string,Lap 6:string,Lap 7:string,Lap 8:string" };
        }

        friend ostream & operator<<(ostream & os, SV2_Extract_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV2_Extract_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashJoin_3_Data0
    {
    public:
        FString m_Category;
        FString m_Place;
        FString m_Bib;
        FString m_Last;
        FString m_First;
        FString m_Time;
        FString m_Gap;
        FString m___Lap2012e8f0ad361f94a3ea278d357a9758298;
        FString m___Lap202c4cf86ac927d4b828743d91ceb6f8347;
        FString m___Lap2034cdf9222ba304838b7219f43404a81a5;
        FString m___Lap204a90c17cb872d4c26afbfb9a899a60d6f;
        FString m___Lap205ea9c5b51133f4081891e21f6ad4ae205;
        FString m___Lap206e18f8c858a50465e96e4e6972a871f1d;
        FString m___Lap207b06ecdd63f96449fb31c9048bbaa99f8;
        FString m___Lap208b624644a1dd54025914ed4dec7ee6aa7;
        FString m_stagebib;
        FString m_usaclicence;
        FString m_racestaging;
        HashJoin_3_Data0();
        HashJoin_3_Data0(const HashJoin_3_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_3_Data0(const HashJoin_3_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Category:string,Place:string,Bib:string,Last:string,First:string,Time:string,Gap:string,Lap 1:string,Lap 2:string,Lap 3:string,Lap 4:string,Lap 5:string,Lap 6:string,Lap 7:string,Lap 8:string,stagebib:string,usaclicence:string,racestaging:string" };
        }

        friend ostream & operator<<(ostream & os, HashJoin_3_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashJoin_3_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineKey_HashJoin_3
    {
    public:
        FString m_Bib_stagebib;
        HashCombineKey_HashJoin_3();
        HashCombineKey_HashJoin_3(const HashCombineKey_HashJoin_3 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_3(const HashCombineKey_HashJoin_3 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Bib_stagebib:string" };
        }

        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_3 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_3 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineValue_HashJoin_3
    {
    public:
        FString m_usaclicence;
        FString m_racestaging;
        HashCombineValue_HashJoin_3();
        HashCombineValue_HashJoin_3(const HashCombineValue_HashJoin_3 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_3(const HashCombineValue_HashJoin_3 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"usaclicence:string,racestaging:string" };
        }

        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_3 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_3 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_5_Data0
    {
    public:
        FString m_Gap;
        ScopeDateTime m_RaceDate;
        FString m_EventName;
        FString m_RaceName;
        FString m_RacePlacing;
        FString m_RaceStaging;
        FString m_RaceNumber;
        FString m_RaceNumberStaged;
        FString m_LastName;
        FString m_FirstName;
        FString m_LicenceNumber;
        FString m_FinishTime;
        FString m_Lap1;
        FString m_Lap2;
        FString m_Lap3;
        FString m_Lap4;
        FString m_Lap5;
        FString m_Lap6;
        FString m_Lap7;
        FString m_Lap8;
        Process_5_Data0();
        Process_5_Data0(const Process_5_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_5_Data0(const Process_5_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Gap:string,RaceDate:DateTime,EventName:string,RaceName:string,RacePlacing:string,RaceStaging:string,RaceNumber:string,RaceNumberStaged:string,LastName:string,FirstName:string,LicenceNumber:string,FinishTime:string,Lap1:string,Lap2:string,Lap3:string,Lap4:string,Lap5:string,Lap6:string,Lap7:string,Lap8:string" };
        }

        friend ostream & operator<<(ostream & os, Process_5_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_5_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV3_Combine_Split_out0
    {
    public:
        ScopeDateTime m_RaceDate;
        NativeNullable<ScopeDateTime> m_RaceTime;
        FString m_EventName;
        FString m_RaceName;
        FString m_RacePlacing;
        FString m_RaceStaging;
        FString m_RaceNumber;
        FString m_RaceNumberStaged;
        FString m_LastName;
        FString m_FirstName;
        FString m_LicenceNumber;
        FString m_FinishTime;
        FString m_Gap;
        FString m_Lap1;
        FString m_Lap2;
        FString m_Lap3;
        FString m_Lap4;
        FString m_Lap5;
        FString m_Lap6;
        FString m_Lap7;
        FString m_Lap8;
        SV3_Combine_Split_out0();
        SV3_Combine_Split_out0(const SV3_Combine_Split_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV3_Combine_Split_out0(const SV3_Combine_Split_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"RaceDate:DateTime,RaceTime:DateTime?,EventName:string,RaceName:string,RacePlacing:string,RaceStaging:string,RaceNumber:string,RaceNumberStaged:string,LastName:string,FirstName:string,LicenceNumber:string,FinishTime:string,Gap:string,Lap1:string,Lap2:string,Lap3:string,Lap4:string,Lap5:string,Lap6:string,Lap7:string,Lap8:string" };
        }

        friend ostream & operator<<(ostream & os, SV3_Combine_Split_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV3_Combine_Split_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV3_Combine_Split_out1
    {
    public:
        ScopeDateTime m_RaceDate;
        FString m_EventName;
        FString m_RaceName;
        FString m_RacePlacing;
        FString m_RaceStaging;
        FString m_RaceNumber;
        FString m_RaceNumberStaged;
        FString m_LastName;
        FString m_FirstName;
        FString m_LicenceNumber;
        FString m_FinishTime;
        FString m_Gap;
        FString m_Lap1;
        FString m_Lap2;
        FString m_Lap3;
        FString m_Lap4;
        FString m_Lap5;
        FString m_Lap6;
        FString m_Lap7;
        FString m_Lap8;
        SV3_Combine_Split_out1();
        SV3_Combine_Split_out1(const SV3_Combine_Split_out1 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV3_Combine_Split_out1(const SV3_Combine_Split_out1 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"RaceDate:DateTime,EventName:string,RaceName:string,RacePlacing:string,RaceStaging:string,RaceNumber:string,RaceNumberStaged:string,LastName:string,FirstName:string,LicenceNumber:string,FinishTime:string,Gap:string,Lap1:string,Lap2:string,Lap3:string,Lap4:string,Lap5:string,Lap6:string,Lap7:string,Lap8:string" };
        }

        friend ostream & operator<<(ostream & os, SV3_Combine_Split_out1 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV3_Combine_Split_out1 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



#if defined(COMPILE_MANAGED)

#endif // defined(COMPILE_MANAGED)


//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<PartitionSchema_Partition_7>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, PartitionSchema_Partition_7 & row)
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
        static bool DeserializeKeyForSS(MemoryInputStream * input, PartitionSchema_Partition_7 & row)
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
        static void DeserializeKey(ResourceInputStream * input, PartitionSchema_Partition_7 & row)
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
        static void DeserializePartitionSpec(ResourceInputStream * input, PartitionSchema_Partition_7 & row)
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
    class BinaryOutputPolicy<PartitionSchema_Partition_7>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, PartitionSchema_Partition_7 & row)
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
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const PartitionSchema_Partition_7 & row)
        {
            SCOPE_ASSERT(false); 
        }
        static void SerializeKeyForSS(MemoryOutputStream* output, const PartitionSchema_Partition_7 & row)        
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
    class BinaryExtractPolicy<SV1_Extract_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_stagebib);
                    input->Read(row.m_usaclicence);
                    input->Read(row.m_racestaging);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_stagebib);
                    }
                    else
                    {
                        row.m_stagebib.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_usaclicence);
                    }
                    else
                    {
                        row.m_usaclicence.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_racestaging);
                    }
                    else
                    {
                        row.m_racestaging.SetNull();
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
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV1_Extract_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_stagebib.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_usaclicence.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_racestaging.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_stagebib.IsNull())
            {
                output->Write(row.m_stagebib);
            }
            if (!row.m_usaclicence.IsNull())
            {
                output->Write(row.m_usaclicence);
            }
            if (!row.m_racestaging.IsNull())
            {
                output->Write(row.m_racestaging);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV2_Extract_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV2_Extract_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_Category);
                    input->Read(row.m_Place);
                    input->Read(row.m_Bib);
                    input->Read(row.m_Last);
                    input->Read(row.m_First);
                    input->Read(row.m_Time);
                    input->Read(row.m_Gap);
                    input->Read(row.m___Lap2012e8f0ad361f94a3ea278d357a9758298);
                    input->Read(row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347);
                    input->Read(row.m___Lap2034cdf9222ba304838b7219f43404a81a5);
                    input->Read(row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f);
                    input->Read(row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205);
                    input->Read(row.m___Lap206e18f8c858a50465e96e4e6972a871f1d);
                    input->Read(row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8);
                    input->Read(row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7);
                }
                else
                {
                    char ___masking___[2];
                    ___masking___[0] = b;
                    input->Read(___masking___[1]); 
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Category);
                    }
                    else
                    {
                        row.m_Category.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_Place);
                    }
                    else
                    {
                        row.m_Place.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_Bib);
                    }
                    else
                    {
                        row.m_Bib.SetNull();
                    }
                    if ((___masking___[0] & 16 ) != 16)
                    {
                        input->Read(row.m_Last);
                    }
                    else
                    {
                        row.m_Last.SetNull();
                    }
                    if ((___masking___[0] & 32 ) != 32)
                    {
                        input->Read(row.m_First);
                    }
                    else
                    {
                        row.m_First.SetNull();
                    }
                    if ((___masking___[0] & 64 ) != 64)
                    {
                        input->Read(row.m_Time);
                    }
                    else
                    {
                        row.m_Time.SetNull();
                    }
                    if ((___masking___[0] & 128 ) != 128)
                    {
                        input->Read(row.m_Gap);
                    }
                    else
                    {
                        row.m_Gap.SetNull();
                    }
                    if ((___masking___[1] & 1 ) != 1)
                    {
                        input->Read(row.m___Lap2012e8f0ad361f94a3ea278d357a9758298);
                    }
                    else
                    {
                        row.m___Lap2012e8f0ad361f94a3ea278d357a9758298.SetNull();
                    }
                    if ((___masking___[1] & 2 ) != 2)
                    {
                        input->Read(row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347);
                    }
                    else
                    {
                        row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347.SetNull();
                    }
                    if ((___masking___[1] & 4 ) != 4)
                    {
                        input->Read(row.m___Lap2034cdf9222ba304838b7219f43404a81a5);
                    }
                    else
                    {
                        row.m___Lap2034cdf9222ba304838b7219f43404a81a5.SetNull();
                    }
                    if ((___masking___[1] & 8 ) != 8)
                    {
                        input->Read(row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f);
                    }
                    else
                    {
                        row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f.SetNull();
                    }
                    if ((___masking___[1] & 16 ) != 16)
                    {
                        input->Read(row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205);
                    }
                    else
                    {
                        row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205.SetNull();
                    }
                    if ((___masking___[1] & 32 ) != 32)
                    {
                        input->Read(row.m___Lap206e18f8c858a50465e96e4e6972a871f1d);
                    }
                    else
                    {
                        row.m___Lap206e18f8c858a50465e96e4e6972a871f1d.SetNull();
                    }
                    if ((___masking___[1] & 64 ) != 64)
                    {
                        input->Read(row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8);
                    }
                    else
                    {
                        row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8.SetNull();
                    }
                    if ((___masking___[1] & 128 ) != 128)
                    {
                        input->Read(row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7);
                    }
                    else
                    {
                        row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7.SetNull();
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
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV2_Extract_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV2_Extract_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[2];
            ___masking___[0] = 1;
            ___masking___[1]=0; 
            bool hasNull = false;
            if (row.m_Category.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_Place.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_Bib.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (row.m_Last.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 16;
            }
            if (row.m_First.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 32;
            }
            if (row.m_Time.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 64;
            }
            if (row.m_Gap.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 128;
            }
            if (row.m___Lap2012e8f0ad361f94a3ea278d357a9758298.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 1;
            }
            if (row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 2;
            }
            if (row.m___Lap2034cdf9222ba304838b7219f43404a81a5.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 4;
            }
            if (row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 8;
            }
            if (row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 16;
            }
            if (row.m___Lap206e18f8c858a50465e96e4e6972a871f1d.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 32;
            }
            if (row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 64;
            }
            if (row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 128;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
                output->Write(___masking___[1]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_Category.IsNull())
            {
                output->Write(row.m_Category);
            }
            if (!row.m_Place.IsNull())
            {
                output->Write(row.m_Place);
            }
            if (!row.m_Bib.IsNull())
            {
                output->Write(row.m_Bib);
            }
            if (!row.m_Last.IsNull())
            {
                output->Write(row.m_Last);
            }
            if (!row.m_First.IsNull())
            {
                output->Write(row.m_First);
            }
            if (!row.m_Time.IsNull())
            {
                output->Write(row.m_Time);
            }
            if (!row.m_Gap.IsNull())
            {
                output->Write(row.m_Gap);
            }
            if (!row.m___Lap2012e8f0ad361f94a3ea278d357a9758298.IsNull())
            {
                output->Write(row.m___Lap2012e8f0ad361f94a3ea278d357a9758298);
            }
            if (!row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347.IsNull())
            {
                output->Write(row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347);
            }
            if (!row.m___Lap2034cdf9222ba304838b7219f43404a81a5.IsNull())
            {
                output->Write(row.m___Lap2034cdf9222ba304838b7219f43404a81a5);
            }
            if (!row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f.IsNull())
            {
                output->Write(row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f);
            }
            if (!row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205.IsNull())
            {
                output->Write(row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205);
            }
            if (!row.m___Lap206e18f8c858a50465e96e4e6972a871f1d.IsNull())
            {
                output->Write(row.m___Lap206e18f8c858a50465e96e4e6972a871f1d);
            }
            if (!row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8.IsNull())
            {
                output->Write(row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8);
            }
            if (!row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7.IsNull())
            {
                output->Write(row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV2_Extract_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV2_Extract_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV3_Combine_Split_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV3_Combine_Split_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_RaceDate);
                    input->Read(row.m_RaceTime);
                    input->Read(row.m_EventName);
                    input->Read(row.m_RaceName);
                    input->Read(row.m_RacePlacing);
                    input->Read(row.m_RaceStaging);
                    input->Read(row.m_RaceNumber);
                    input->Read(row.m_RaceNumberStaged);
                    input->Read(row.m_LastName);
                    input->Read(row.m_FirstName);
                    input->Read(row.m_LicenceNumber);
                    input->Read(row.m_FinishTime);
                    input->Read(row.m_Gap);
                    input->Read(row.m_Lap1);
                    input->Read(row.m_Lap2);
                    input->Read(row.m_Lap3);
                    input->Read(row.m_Lap4);
                    input->Read(row.m_Lap5);
                    input->Read(row.m_Lap6);
                    input->Read(row.m_Lap7);
                    input->Read(row.m_Lap8);
                }
                else
                {
                    char ___masking___[3];
                    ___masking___[0] = b;
                    input->Read(___masking___[1]); 
                    input->Read(___masking___[2]); 
                    input->Read(row.m_RaceDate);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_RaceTime);
                    }
                    else
                    {
                        row.m_RaceTime.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_EventName);
                    }
                    else
                    {
                        row.m_EventName.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_RaceName);
                    }
                    else
                    {
                        row.m_RaceName.SetNull();
                    }
                    if ((___masking___[0] & 16 ) != 16)
                    {
                        input->Read(row.m_RacePlacing);
                    }
                    else
                    {
                        row.m_RacePlacing.SetNull();
                    }
                    if ((___masking___[0] & 32 ) != 32)
                    {
                        input->Read(row.m_RaceStaging);
                    }
                    else
                    {
                        row.m_RaceStaging.SetNull();
                    }
                    if ((___masking___[0] & 64 ) != 64)
                    {
                        input->Read(row.m_RaceNumber);
                    }
                    else
                    {
                        row.m_RaceNumber.SetNull();
                    }
                    if ((___masking___[0] & 128 ) != 128)
                    {
                        input->Read(row.m_RaceNumberStaged);
                    }
                    else
                    {
                        row.m_RaceNumberStaged.SetNull();
                    }
                    if ((___masking___[1] & 1 ) != 1)
                    {
                        input->Read(row.m_LastName);
                    }
                    else
                    {
                        row.m_LastName.SetNull();
                    }
                    if ((___masking___[1] & 2 ) != 2)
                    {
                        input->Read(row.m_FirstName);
                    }
                    else
                    {
                        row.m_FirstName.SetNull();
                    }
                    if ((___masking___[1] & 4 ) != 4)
                    {
                        input->Read(row.m_LicenceNumber);
                    }
                    else
                    {
                        row.m_LicenceNumber.SetNull();
                    }
                    if ((___masking___[1] & 8 ) != 8)
                    {
                        input->Read(row.m_FinishTime);
                    }
                    else
                    {
                        row.m_FinishTime.SetNull();
                    }
                    if ((___masking___[1] & 16 ) != 16)
                    {
                        input->Read(row.m_Gap);
                    }
                    else
                    {
                        row.m_Gap.SetNull();
                    }
                    if ((___masking___[1] & 32 ) != 32)
                    {
                        input->Read(row.m_Lap1);
                    }
                    else
                    {
                        row.m_Lap1.SetNull();
                    }
                    if ((___masking___[1] & 64 ) != 64)
                    {
                        input->Read(row.m_Lap2);
                    }
                    else
                    {
                        row.m_Lap2.SetNull();
                    }
                    if ((___masking___[1] & 128 ) != 128)
                    {
                        input->Read(row.m_Lap3);
                    }
                    else
                    {
                        row.m_Lap3.SetNull();
                    }
                    if ((___masking___[2] & 1 ) != 1)
                    {
                        input->Read(row.m_Lap4);
                    }
                    else
                    {
                        row.m_Lap4.SetNull();
                    }
                    if ((___masking___[2] & 2 ) != 2)
                    {
                        input->Read(row.m_Lap5);
                    }
                    else
                    {
                        row.m_Lap5.SetNull();
                    }
                    if ((___masking___[2] & 4 ) != 4)
                    {
                        input->Read(row.m_Lap6);
                    }
                    else
                    {
                        row.m_Lap6.SetNull();
                    }
                    if ((___masking___[2] & 8 ) != 8)
                    {
                        input->Read(row.m_Lap7);
                    }
                    else
                    {
                        row.m_Lap7.SetNull();
                    }
                    if ((___masking___[2] & 16 ) != 16)
                    {
                        input->Read(row.m_Lap8);
                    }
                    else
                    {
                        row.m_Lap8.SetNull();
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
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV3_Combine_Split_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV3_Combine_Split_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[3];
            ___masking___[0] = 1;
            ___masking___[1]=0; 
            ___masking___[2]=0; 
            bool hasNull = false;
            if (row.m_RaceTime.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_EventName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_RaceName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (row.m_RacePlacing.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 16;
            }
            if (row.m_RaceStaging.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 32;
            }
            if (row.m_RaceNumber.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 64;
            }
            if (row.m_RaceNumberStaged.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 128;
            }
            if (row.m_LastName.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 1;
            }
            if (row.m_FirstName.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 2;
            }
            if (row.m_LicenceNumber.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 4;
            }
            if (row.m_FinishTime.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 8;
            }
            if (row.m_Gap.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 16;
            }
            if (row.m_Lap1.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 32;
            }
            if (row.m_Lap2.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 64;
            }
            if (row.m_Lap3.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 128;
            }
            if (row.m_Lap4.IsNull())
            {
                hasNull = true;
                ___masking___[2] |= 1;
            }
            if (row.m_Lap5.IsNull())
            {
                hasNull = true;
                ___masking___[2] |= 2;
            }
            if (row.m_Lap6.IsNull())
            {
                hasNull = true;
                ___masking___[2] |= 4;
            }
            if (row.m_Lap7.IsNull())
            {
                hasNull = true;
                ___masking___[2] |= 8;
            }
            if (row.m_Lap8.IsNull())
            {
                hasNull = true;
                ___masking___[2] |= 16;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
                output->Write(___masking___[1]);
                output->Write(___masking___[2]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_RaceDate);
            if (!row.m_RaceTime.IsNull())
            {
                output->Write(row.m_RaceTime);
            }
            if (!row.m_EventName.IsNull())
            {
                output->Write(row.m_EventName);
            }
            if (!row.m_RaceName.IsNull())
            {
                output->Write(row.m_RaceName);
            }
            if (!row.m_RacePlacing.IsNull())
            {
                output->Write(row.m_RacePlacing);
            }
            if (!row.m_RaceStaging.IsNull())
            {
                output->Write(row.m_RaceStaging);
            }
            if (!row.m_RaceNumber.IsNull())
            {
                output->Write(row.m_RaceNumber);
            }
            if (!row.m_RaceNumberStaged.IsNull())
            {
                output->Write(row.m_RaceNumberStaged);
            }
            if (!row.m_LastName.IsNull())
            {
                output->Write(row.m_LastName);
            }
            if (!row.m_FirstName.IsNull())
            {
                output->Write(row.m_FirstName);
            }
            if (!row.m_LicenceNumber.IsNull())
            {
                output->Write(row.m_LicenceNumber);
            }
            if (!row.m_FinishTime.IsNull())
            {
                output->Write(row.m_FinishTime);
            }
            if (!row.m_Gap.IsNull())
            {
                output->Write(row.m_Gap);
            }
            if (!row.m_Lap1.IsNull())
            {
                output->Write(row.m_Lap1);
            }
            if (!row.m_Lap2.IsNull())
            {
                output->Write(row.m_Lap2);
            }
            if (!row.m_Lap3.IsNull())
            {
                output->Write(row.m_Lap3);
            }
            if (!row.m_Lap4.IsNull())
            {
                output->Write(row.m_Lap4);
            }
            if (!row.m_Lap5.IsNull())
            {
                output->Write(row.m_Lap5);
            }
            if (!row.m_Lap6.IsNull())
            {
                output->Write(row.m_Lap6);
            }
            if (!row.m_Lap7.IsNull())
            {
                output->Write(row.m_Lap7);
            }
            if (!row.m_Lap8.IsNull())
            {
                output->Write(row.m_Lap8);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV3_Combine_Split_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV3_Combine_Split_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<HashJoin_3_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, HashJoin_3_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_Category);
                    input->Read(row.m_Place);
                    input->Read(row.m_Bib);
                    input->Read(row.m_Last);
                    input->Read(row.m_First);
                    input->Read(row.m_Time);
                    input->Read(row.m_Gap);
                    input->Read(row.m___Lap2012e8f0ad361f94a3ea278d357a9758298);
                    input->Read(row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347);
                    input->Read(row.m___Lap2034cdf9222ba304838b7219f43404a81a5);
                    input->Read(row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f);
                    input->Read(row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205);
                    input->Read(row.m___Lap206e18f8c858a50465e96e4e6972a871f1d);
                    input->Read(row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8);
                    input->Read(row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7);
                    input->Read(row.m_stagebib);
                    input->Read(row.m_usaclicence);
                    input->Read(row.m_racestaging);
                }
                else
                {
                    char ___masking___[3];
                    ___masking___[0] = b;
                    input->Read(___masking___[1]); 
                    input->Read(___masking___[2]); 
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Category);
                    }
                    else
                    {
                        row.m_Category.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_Place);
                    }
                    else
                    {
                        row.m_Place.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_Bib);
                    }
                    else
                    {
                        row.m_Bib.SetNull();
                    }
                    if ((___masking___[0] & 16 ) != 16)
                    {
                        input->Read(row.m_Last);
                    }
                    else
                    {
                        row.m_Last.SetNull();
                    }
                    if ((___masking___[0] & 32 ) != 32)
                    {
                        input->Read(row.m_First);
                    }
                    else
                    {
                        row.m_First.SetNull();
                    }
                    if ((___masking___[0] & 64 ) != 64)
                    {
                        input->Read(row.m_Time);
                    }
                    else
                    {
                        row.m_Time.SetNull();
                    }
                    if ((___masking___[0] & 128 ) != 128)
                    {
                        input->Read(row.m_Gap);
                    }
                    else
                    {
                        row.m_Gap.SetNull();
                    }
                    if ((___masking___[1] & 1 ) != 1)
                    {
                        input->Read(row.m___Lap2012e8f0ad361f94a3ea278d357a9758298);
                    }
                    else
                    {
                        row.m___Lap2012e8f0ad361f94a3ea278d357a9758298.SetNull();
                    }
                    if ((___masking___[1] & 2 ) != 2)
                    {
                        input->Read(row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347);
                    }
                    else
                    {
                        row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347.SetNull();
                    }
                    if ((___masking___[1] & 4 ) != 4)
                    {
                        input->Read(row.m___Lap2034cdf9222ba304838b7219f43404a81a5);
                    }
                    else
                    {
                        row.m___Lap2034cdf9222ba304838b7219f43404a81a5.SetNull();
                    }
                    if ((___masking___[1] & 8 ) != 8)
                    {
                        input->Read(row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f);
                    }
                    else
                    {
                        row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f.SetNull();
                    }
                    if ((___masking___[1] & 16 ) != 16)
                    {
                        input->Read(row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205);
                    }
                    else
                    {
                        row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205.SetNull();
                    }
                    if ((___masking___[1] & 32 ) != 32)
                    {
                        input->Read(row.m___Lap206e18f8c858a50465e96e4e6972a871f1d);
                    }
                    else
                    {
                        row.m___Lap206e18f8c858a50465e96e4e6972a871f1d.SetNull();
                    }
                    if ((___masking___[1] & 64 ) != 64)
                    {
                        input->Read(row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8);
                    }
                    else
                    {
                        row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8.SetNull();
                    }
                    if ((___masking___[1] & 128 ) != 128)
                    {
                        input->Read(row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7);
                    }
                    else
                    {
                        row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7.SetNull();
                    }
                    if ((___masking___[2] & 1 ) != 1)
                    {
                        input->Read(row.m_stagebib);
                    }
                    else
                    {
                        row.m_stagebib.SetNull();
                    }
                    if ((___masking___[2] & 2 ) != 2)
                    {
                        input->Read(row.m_usaclicence);
                    }
                    else
                    {
                        row.m_usaclicence.SetNull();
                    }
                    if ((___masking___[2] & 4 ) != 4)
                    {
                        input->Read(row.m_racestaging);
                    }
                    else
                    {
                        row.m_racestaging.SetNull();
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
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<HashJoin_3_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, HashJoin_3_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[3];
            ___masking___[0] = 1;
            ___masking___[1]=0; 
            ___masking___[2]=0; 
            bool hasNull = false;
            if (row.m_Category.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_Place.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_Bib.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (row.m_Last.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 16;
            }
            if (row.m_First.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 32;
            }
            if (row.m_Time.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 64;
            }
            if (row.m_Gap.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 128;
            }
            if (row.m___Lap2012e8f0ad361f94a3ea278d357a9758298.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 1;
            }
            if (row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 2;
            }
            if (row.m___Lap2034cdf9222ba304838b7219f43404a81a5.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 4;
            }
            if (row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 8;
            }
            if (row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 16;
            }
            if (row.m___Lap206e18f8c858a50465e96e4e6972a871f1d.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 32;
            }
            if (row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 64;
            }
            if (row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 128;
            }
            if (row.m_stagebib.IsNull())
            {
                hasNull = true;
                ___masking___[2] |= 1;
            }
            if (row.m_usaclicence.IsNull())
            {
                hasNull = true;
                ___masking___[2] |= 2;
            }
            if (row.m_racestaging.IsNull())
            {
                hasNull = true;
                ___masking___[2] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
                output->Write(___masking___[1]);
                output->Write(___masking___[2]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_Category.IsNull())
            {
                output->Write(row.m_Category);
            }
            if (!row.m_Place.IsNull())
            {
                output->Write(row.m_Place);
            }
            if (!row.m_Bib.IsNull())
            {
                output->Write(row.m_Bib);
            }
            if (!row.m_Last.IsNull())
            {
                output->Write(row.m_Last);
            }
            if (!row.m_First.IsNull())
            {
                output->Write(row.m_First);
            }
            if (!row.m_Time.IsNull())
            {
                output->Write(row.m_Time);
            }
            if (!row.m_Gap.IsNull())
            {
                output->Write(row.m_Gap);
            }
            if (!row.m___Lap2012e8f0ad361f94a3ea278d357a9758298.IsNull())
            {
                output->Write(row.m___Lap2012e8f0ad361f94a3ea278d357a9758298);
            }
            if (!row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347.IsNull())
            {
                output->Write(row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347);
            }
            if (!row.m___Lap2034cdf9222ba304838b7219f43404a81a5.IsNull())
            {
                output->Write(row.m___Lap2034cdf9222ba304838b7219f43404a81a5);
            }
            if (!row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f.IsNull())
            {
                output->Write(row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f);
            }
            if (!row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205.IsNull())
            {
                output->Write(row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205);
            }
            if (!row.m___Lap206e18f8c858a50465e96e4e6972a871f1d.IsNull())
            {
                output->Write(row.m___Lap206e18f8c858a50465e96e4e6972a871f1d);
            }
            if (!row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8.IsNull())
            {
                output->Write(row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8);
            }
            if (!row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7.IsNull())
            {
                output->Write(row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7);
            }
            if (!row.m_stagebib.IsNull())
            {
                output->Write(row.m_stagebib);
            }
            if (!row.m_usaclicence.IsNull())
            {
                output->Write(row.m_usaclicence);
            }
            if (!row.m_racestaging.IsNull())
            {
                output->Write(row.m_racestaging);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const HashJoin_3_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const HashJoin_3_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE PartitionSchema_Partition_7::PartitionSchema_Partition_7()
    {
    }
    INLINE PartitionSchema_Partition_7::PartitionSchema_Partition_7(const PartitionSchema_Partition_7 & c, IncrementalAllocator * alloc) :
            m_RaceDate(c.m_RaceDate),
            m_RaceName(c.m_RaceName, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_0_Data0::Extract_0_Data0()
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_out0::SV1_Extract_out0()
    {
    }
    INLINE SV1_Extract_out0::SV1_Extract_out0(const SV1_Extract_out0 & c, IncrementalAllocator * alloc) :
            m_stagebib(c.m_stagebib, alloc),
            m_usaclicence(c.m_usaclicence, alloc),
            m_racestaging(c.m_racestaging, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV2_Extract_out0::SV2_Extract_out0()
    {
    }
    INLINE SV2_Extract_out0::SV2_Extract_out0(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
            m_Category(c.m_Category, alloc),
            m_Place(c.m_Place, alloc),
            m_Bib(c.m_Bib, alloc),
            m_Last(c.m_Last, alloc),
            m_First(c.m_First, alloc),
            m_Time(c.m_Time, alloc),
            m_Gap(c.m_Gap, alloc),
            m___Lap2012e8f0ad361f94a3ea278d357a9758298(c.m___Lap2012e8f0ad361f94a3ea278d357a9758298, alloc),
            m___Lap202c4cf86ac927d4b828743d91ceb6f8347(c.m___Lap202c4cf86ac927d4b828743d91ceb6f8347, alloc),
            m___Lap2034cdf9222ba304838b7219f43404a81a5(c.m___Lap2034cdf9222ba304838b7219f43404a81a5, alloc),
            m___Lap204a90c17cb872d4c26afbfb9a899a60d6f(c.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f, alloc),
            m___Lap205ea9c5b51133f4081891e21f6ad4ae205(c.m___Lap205ea9c5b51133f4081891e21f6ad4ae205, alloc),
            m___Lap206e18f8c858a50465e96e4e6972a871f1d(c.m___Lap206e18f8c858a50465e96e4e6972a871f1d, alloc),
            m___Lap207b06ecdd63f96449fb31c9048bbaa99f8(c.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8, alloc),
            m___Lap208b624644a1dd54025914ed4dec7ee6aa7(c.m___Lap208b624644a1dd54025914ed4dec7ee6aa7, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_3_Data0::HashJoin_3_Data0()
    {
    }
    INLINE HashJoin_3_Data0::HashJoin_3_Data0(const HashJoin_3_Data0 & c, IncrementalAllocator * alloc) :
            m_Category(c.m_Category, alloc),
            m_Place(c.m_Place, alloc),
            m_Bib(c.m_Bib, alloc),
            m_Last(c.m_Last, alloc),
            m_First(c.m_First, alloc),
            m_Time(c.m_Time, alloc),
            m_Gap(c.m_Gap, alloc),
            m___Lap2012e8f0ad361f94a3ea278d357a9758298(c.m___Lap2012e8f0ad361f94a3ea278d357a9758298, alloc),
            m___Lap202c4cf86ac927d4b828743d91ceb6f8347(c.m___Lap202c4cf86ac927d4b828743d91ceb6f8347, alloc),
            m___Lap2034cdf9222ba304838b7219f43404a81a5(c.m___Lap2034cdf9222ba304838b7219f43404a81a5, alloc),
            m___Lap204a90c17cb872d4c26afbfb9a899a60d6f(c.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f, alloc),
            m___Lap205ea9c5b51133f4081891e21f6ad4ae205(c.m___Lap205ea9c5b51133f4081891e21f6ad4ae205, alloc),
            m___Lap206e18f8c858a50465e96e4e6972a871f1d(c.m___Lap206e18f8c858a50465e96e4e6972a871f1d, alloc),
            m___Lap207b06ecdd63f96449fb31c9048bbaa99f8(c.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8, alloc),
            m___Lap208b624644a1dd54025914ed4dec7ee6aa7(c.m___Lap208b624644a1dd54025914ed4dec7ee6aa7, alloc),
            m_stagebib(c.m_stagebib, alloc),
            m_usaclicence(c.m_usaclicence, alloc),
            m_racestaging(c.m_racestaging, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_3::HashCombineKey_HashJoin_3()
    {
    }
    INLINE HashCombineKey_HashJoin_3::HashCombineKey_HashJoin_3(const HashCombineKey_HashJoin_3 & c, IncrementalAllocator * alloc) :
            m_Bib_stagebib(c.m_Bib_stagebib, alloc)
    {
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_3::HashCombineKey_HashJoin_3(const HashCombineKey_HashJoin_3 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_Bib_stagebib = c.m_Bib_stagebib;
        memoryManager->Copy(m_Bib_stagebib);
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_3::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
        memoryManager->Delete(m_Bib_stagebib);
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_3::HashCombineValue_HashJoin_3()
    {
    }
    INLINE HashCombineValue_HashJoin_3::HashCombineValue_HashJoin_3(const HashCombineValue_HashJoin_3 & c, IncrementalAllocator * alloc) :
            m_usaclicence(c.m_usaclicence, alloc),
            m_racestaging(c.m_racestaging, alloc)
    {
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_3::HashCombineValue_HashJoin_3(const HashCombineValue_HashJoin_3 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_usaclicence = c.m_usaclicence;
        memoryManager->Copy(m_usaclicence);
        m_racestaging = c.m_racestaging;
        memoryManager->Copy(m_racestaging);
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_3::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
        memoryManager->Delete(m_usaclicence);
        memoryManager->Delete(m_racestaging);
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_5_Data0::Process_5_Data0()
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV3_Combine_Split_out0::SV3_Combine_Split_out0()
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV3_Combine_Split_out1::SV3_Combine_Split_out1()
    {
    }

#pragma endregion Schema Constructors
#pragma hdrstop
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


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
#endif //#if defined(COMPILE_MANAGED)

#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;

extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif

    ErrorManager::GetGlobal()->EnableJSON();
}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// Add broadcast vertex code
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}

#endif //#if defined(COMPILE_NATIVE)


#endif //#if defined(COMPILE_INIT_SHUTDOWN)
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<Extract_0_Data0, UID_Extract_0>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, true, false, 1, CharFormat_uint16, false, false>, CosmosInput> * input, Extract_0_Data0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->Read(row.m___STAGE20234219b03180694caa81e629d5edf1d8d2);
                    input->Read(row.m___BIB20237a7acc1b4d1946e4bf62e4242c09bbd8);
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->Read(row.m_LICENSE);
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();
                    input->SkipColumn();

                    if (!input->EndRow())
                    {
                        // Too many columns in row - skip row and read next row.
                        input->SkipLine();
                        continue;
                    }
                    return true;
                }
                catch (const ExtractInvalidCharacterException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->GetEncodedGlobalFileOffset() + e.GetErrorOffset(), input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows are ignored
                    case ScopeStreamException::UnexpectedNewLine:
                        // Too few columns in row - continue with next row
                        break;

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 17> c_columnNames =
            {
                "STAGE #",
                "BIB #",
                "FIRST NAME",
                "LAST NAME",
                "TEAM",
                "CITY",
                "STATE",
                "AGE",
                "CAT",
                "LICENSE",
                "CXR Points",
                "CCC Points",
                "Category Entered",
                "CCC Points Most Recent Date Placing",
                "CCC Points Most Recent Date",
                "Time Entered",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

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

    static const char * StringTable_Process_1 [] =
    {
        "BIB #",
        "LICENSE",
        "STAGE #",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Extract_0_Data0, SV1_Extract_out0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(Extract_0_Data0 & input, SV1_Extract_out0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_stagebib = input.m___BIB20237a7acc1b4d1946e4bf62e4242c09bbd8;
                    exceptionIndex++;
                    output.m_usaclicence = input.m_LICENSE;
                    exceptionIndex++;
                    output.m_racestaging = input.m___STAGE20234219b03180694caa81e629d5edf1d8d2;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_1[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
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
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
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

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_0_Data0, TextExtractPolicy<Extract_0_Data0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, true, false, 1, CharFormat_uint16, false, false>, CosmosInput>> ExtractorType1_SV1_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, true, 1, CharFormat_uint16), UID_Extract_0));
        }

    ExtractorType1_SV1_Extract ** extractor_0 = (ExtractorType1_SV1_Extract **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV1_Extract, Extract_0_Data0, SV1_Extract_out0, UID_Process_1> FilterTransformerType_Process_1;
        // Allocate memory for the operator array
        unique_ptr<unique_ptr<FilterTransformerType_Process_1>[]> filterTransformer_Process_1_array(new unique_ptr<FilterTransformerType_Process_1>[extractor_0_count]);
        
        // Construct operator objects
        for(ULONG i = 0; i < extractor_0_count; i++)
        {
            filterTransformer_Process_1_array[i].reset(new FilterTransformerType_Process_1(extractor_0[i], UID_Process_1)); 
        }
        
        FilterTransformerType_Process_1 ** filterTransformer_Process_1 = (FilterTransformerType_Process_1 **)filterTransformer_Process_1_array.get();
        ULONG filterTransformer_Process_1_count = extractor_0_count;
        // Merge streams N->1
        typedef ParallelUnionAll<FilterTransformerType_Process_1, SV1_Extract_out0, IsNativeOnlyVertex> UnionAllType_Process_1_SV1_Extract_out0_connector;
        unique_ptr<UnionAllType_Process_1_SV1_Extract_out0_connector> unionall_Process_1_SV1_Extract_out0_connector_ptr(new UnionAllType_Process_1_SV1_Extract_out0_connector(filterTransformer_Process_1,filterTransformer_Process_1_count,false,UID_ParallelUnionAll_Process_1));
        UnionAllType_Process_1_SV1_Extract_out0_connector * unionall_Process_1_SV1_Extract_out0_connector = unionall_Process_1_SV1_Extract_out0_connector_ptr.get();
        ULONG unionall_Process_1_SV1_Extract_out0_connector_count = 1;
        // Define outputer type
        typedef Outputer<UnionAllType_Process_1_SV1_Extract_out0_connector, SV1_Extract_out0, BinaryOutputPolicy<SV1_Extract_out0>, BinaryOutputStream, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(unionall_Process_1_SV1_Extract_out0_connector, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV1_Extract_out0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV1_Extract_out0->Close();
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
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV1_Extract
#pragma region SV2_Extract
#if defined(COMPILE_SV2_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<SV2_Extract_out0, UID_Extract_2>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 3, CharFormat_uint16, false, false>, CosmosInput> * input, SV2_Extract_out0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->Read(row.m_Category);
                    input->Read(row.m_Place);
                    input->Read(row.m_Bib);
                    input->Read(row.m_Last);
                    input->Read(row.m_First);
                    input->Read(row.m_Time);
                    input->Read(row.m_Gap);
                    input->Read(row.m___Lap2012e8f0ad361f94a3ea278d357a9758298);
                    input->Read(row.m___Lap202c4cf86ac927d4b828743d91ceb6f8347);
                    input->Read(row.m___Lap2034cdf9222ba304838b7219f43404a81a5);
                    input->Read(row.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f);
                    input->Read(row.m___Lap205ea9c5b51133f4081891e21f6ad4ae205);
                    input->Read(row.m___Lap206e18f8c858a50465e96e4e6972a871f1d);
                    input->Read(row.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8);
                    input->Read(row.m___Lap208b624644a1dd54025914ed4dec7ee6aa7);

                    if (!input->EndRow())
                    {
                        // Too many columns in row - report error.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_ROW_DELIMITER_EXPECTED,
                            { input->CurrentLineNumber(), input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));
                    }
                    return true;
                }
                catch (const ExtractInvalidCharacterException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->GetEncodedGlobalFileOffset() + e.GetErrorOffset(), input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows throw exception
                    case ScopeStreamException::UnexpectedNewLine:
                        // Wrong number of columns in row - report error
                        // At this point, line number is increased to point at the next line. Subtract 1 to get line
                        // number of the offending row.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_UNEXPECTED_ROW_DELIMITER,
                            { input->CurrentLineNumber() - 1, 15, input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 16> c_columnNames =
            {
                "Category",
                "Place",
                "Bib",
                "Last",
                "First",
                "Time",
                "Gap",
                "Lap 1",
                "Lap 2",
                "Lap 3",
                "Lap 4",
                "Lap 5",
                "Lap 6",
                "Lap 7",
                "Lap 8",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

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
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV2_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
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

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<SV2_Extract_out0, TextExtractPolicy<SV2_Extract_out0, UID_Extract_2>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 3, CharFormat_uint16, false, false>, CosmosInput>> ExtractorType1_SV2_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV2_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV2_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV2_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, false, 3, CharFormat_uint16), UID_Extract_2));
        }

    ExtractorType1_SV2_Extract ** extractor_0 = (ExtractorType1_SV2_Extract **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV2_Extract, SV2_Extract_out0, IsNativeOnlyVertex> UnionAllType_Extract_2_SV2_Extract_out0_connector;
        unique_ptr<UnionAllType_Extract_2_SV2_Extract_out0_connector> unionall_Extract_2_SV2_Extract_out0_connector_ptr(new UnionAllType_Extract_2_SV2_Extract_out0_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_2));
        UnionAllType_Extract_2_SV2_Extract_out0_connector * unionall_Extract_2_SV2_Extract_out0_connector = unionall_Extract_2_SV2_Extract_out0_connector_ptr.get();
        ULONG unionall_Extract_2_SV2_Extract_out0_connector_count = 1;
        // Define outputer type
        typedef Outputer<UnionAllType_Extract_2_SV2_Extract_out0_connector, SV2_Extract_out0, BinaryOutputPolicy<SV2_Extract_out0>, BinaryOutputStream, false> OutputerType2_SV2_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV2_Extract> outputer_SV2_Extract_out0_ptr(new OutputerType2_SV2_Extract(unionall_Extract_2_SV2_Extract_out0_connector, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV2_Extract_out0));
        OutputerType2_SV2_Extract * outputer_SV2_Extract_out0 = outputer_SV2_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV2_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV2_Extract_out0 row;
            outputer_SV2_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV2_Extract_out0->Close();
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
        outputer_SV2_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV2_Extract
#pragma region SV3_Combine_Split
#if defined(COMPILE_SV3_COMBINE_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_3_Data0,UID_Process_4>
    {
    public:
        struct KeyStruct
        {
            FString m_Category;

            KeyStruct(HashJoin_3_Data0 & c) :
                m_Category(c.m_Category)
            {
            }

            KeyStruct(const HashJoin_3_Data0 & c, IncrementalAllocator * alloc) :
                m_Category(const_cast<HashJoin_3_Data0&>(c).m_Category, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Category(c.m_Category)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Category(const_cast<KeyStruct&>(c).m_Category, alloc)
            {
            }

            KeyStruct() :
                m_Category()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tCategory:\t" << row.m_Category << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_3_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Category, key.m_Category)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_3_Data0 * n1, HashJoin_3_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Category, (*n2).m_Category)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(HashJoin_3_Data0 * p, int depth)
        {
            if (depth < 1 && (*p).m_Category.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_Category.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_Category.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_Category.buffer()[depth]));
            }

            depth -= (int) ((*p).m_Category.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(HashJoin_3_Data0 * p, int depth)
        {
            depth -= (int) ((*p).m_Category.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV2_Extract_out0,UID_HashJoin_3_FB_0>
    {
    public:
        struct KeyStruct
        {
            FString m_Bib;

            KeyStruct(SV2_Extract_out0 & c) :
                m_Bib(c.m_Bib)
            {
            }

            KeyStruct(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_Bib(const_cast<SV2_Extract_out0&>(c).m_Bib, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Bib(c.m_Bib)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Bib(const_cast<KeyStruct&>(c).m_Bib, alloc)
            {
            }

            KeyStruct() :
                m_Bib()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tBib:\t" << row.m_Bib << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV2_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Bib, key.m_Bib)) != 0)
                return r;
            return r;
        }

        static int Compare(SV2_Extract_out0 * n1, SV2_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Bib, (*n2).m_Bib)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV2_Extract_out0 * p, int depth)
        {
            if (depth < 1 && (*p).m_Bib.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_Bib.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_Bib.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_Bib.buffer()[depth]));
            }

            depth -= (int) ((*p).m_Bib.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV2_Extract_out0 * p, int depth)
        {
            depth -= (int) ((*p).m_Bib.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_out0,UID_HashJoin_3_FB_1>
    {
    public:
        struct KeyStruct
        {
            FString m_stagebib;

            KeyStruct(SV1_Extract_out0 & c) :
                m_stagebib(c.m_stagebib)
            {
            }

            KeyStruct(const SV1_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_stagebib(const_cast<SV1_Extract_out0&>(c).m_stagebib, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_stagebib(c.m_stagebib)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_stagebib(const_cast<KeyStruct&>(c).m_stagebib, alloc)
            {
            }

            KeyStruct() :
                m_stagebib()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tstagebib:\t" << row.m_stagebib << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_stagebib, key.m_stagebib)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_out0 * n1, SV1_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_stagebib, (*n2).m_stagebib)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV1_Extract_out0 * p, int depth)
        {
            if (depth < 1 && (*p).m_stagebib.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_stagebib.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_stagebib.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_stagebib.buffer()[depth]));
            }

            depth -= (int) ((*p).m_stagebib.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV1_Extract_out0 * p, int depth)
        {
            depth -= (int) ((*p).m_stagebib.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV2_Extract_out0,UID_HashJoin_3_0>
    {
    public:
        struct KeyStruct
        {
            FString m_Bib;

            KeyStruct(SV2_Extract_out0 & c) :
                m_Bib(c.m_Bib)
            {
            }

            KeyStruct(const SV2_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_Bib(const_cast<SV2_Extract_out0&>(c).m_Bib, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Bib(c.m_Bib)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Bib(const_cast<KeyStruct&>(c).m_Bib, alloc)
            {
            }

            KeyStruct() :
                m_Bib()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tBib:\t" << row.m_Bib << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV2_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Bib, key.m_Bib)) != 0)
                return r;
            return r;
        }

        static int Compare(SV2_Extract_out0 * n1, SV2_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Bib, (*n2).m_Bib)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_out0,UID_HashJoin_3_1>
    {
    public:
        struct KeyStruct
        {
            FString m_stagebib;

            KeyStruct(SV1_Extract_out0 & c) :
                m_stagebib(c.m_stagebib)
            {
            }

            KeyStruct(const SV1_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_stagebib(const_cast<SV1_Extract_out0&>(c).m_stagebib, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_stagebib(c.m_stagebib)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_stagebib(const_cast<KeyStruct&>(c).m_stagebib, alloc)
            {
            }

            KeyStruct() :
                m_stagebib()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tstagebib:\t" << row.m_stagebib << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_stagebib, key.m_stagebib)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_out0 * n1, SV1_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_stagebib, (*n2).m_stagebib)) != 0)
                return r;
            return r;
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
    class CombinerPolicy<UID_HashJoin_3> 
    {
    public:
        typedef KeyComparePolicy<SV2_Extract_out0,UID_HashJoin_3_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV1_Extract_out0,UID_HashJoin_3_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const SV2_Extract_out0 * left, const SV1_Extract_out0 * right)
        {
            int r = 0;
            SV2_Extract_out0 * n1 = const_cast<SV2_Extract_out0 *>(left);
            SV1_Extract_out0 * n2 = const_cast<SV1_Extract_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_Bib, (*n2).m_stagebib)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(SV2_Extract_out0 * left, SV1_Extract_out0 * right, HashJoin_3_Data0 * out)
        {
                (*out).m_Category = (*left).m_Category;
                (*out).m_Place = (*left).m_Place;
                (*out).m_Bib = (*left).m_Bib;
                (*out).m_Last = (*left).m_Last;
                (*out).m_First = (*left).m_First;
                (*out).m_Time = (*left).m_Time;
                (*out).m_Gap = (*left).m_Gap;
                (*out).m___Lap2012e8f0ad361f94a3ea278d357a9758298 = (*left).m___Lap2012e8f0ad361f94a3ea278d357a9758298;
                (*out).m___Lap202c4cf86ac927d4b828743d91ceb6f8347 = (*left).m___Lap202c4cf86ac927d4b828743d91ceb6f8347;
                (*out).m___Lap2034cdf9222ba304838b7219f43404a81a5 = (*left).m___Lap2034cdf9222ba304838b7219f43404a81a5;
                (*out).m___Lap204a90c17cb872d4c26afbfb9a899a60d6f = (*left).m___Lap204a90c17cb872d4c26afbfb9a899a60d6f;
                (*out).m___Lap205ea9c5b51133f4081891e21f6ad4ae205 = (*left).m___Lap205ea9c5b51133f4081891e21f6ad4ae205;
                (*out).m___Lap206e18f8c858a50465e96e4e6972a871f1d = (*left).m___Lap206e18f8c858a50465e96e4e6972a871f1d;
                (*out).m___Lap207b06ecdd63f96449fb31c9048bbaa99f8 = (*left).m___Lap207b06ecdd63f96449fb31c9048bbaa99f8;
                (*out).m___Lap208b624644a1dd54025914ed4dec7ee6aa7 = (*left).m___Lap208b624644a1dd54025914ed4dec7ee6aa7;
                (*out).m_stagebib = (*right).m_stagebib;
                (*out).m_usaclicence = (*right).m_usaclicence;
                (*out).m_racestaging = (*right).m_racestaging;
        }

        static void CopyLeftRow(SV2_Extract_out0 * left, HashJoin_3_Data0 * out)
        {
            (*out).m_Category = (*left).m_Category;
            (*out).m_Place = (*left).m_Place;
            (*out).m_Bib = (*left).m_Bib;
            (*out).m_Last = (*left).m_Last;
            (*out).m_First = (*left).m_First;
            (*out).m_Time = (*left).m_Time;
            (*out).m_Gap = (*left).m_Gap;
            (*out).m___Lap2012e8f0ad361f94a3ea278d357a9758298 = (*left).m___Lap2012e8f0ad361f94a3ea278d357a9758298;
            (*out).m___Lap202c4cf86ac927d4b828743d91ceb6f8347 = (*left).m___Lap202c4cf86ac927d4b828743d91ceb6f8347;
            (*out).m___Lap2034cdf9222ba304838b7219f43404a81a5 = (*left).m___Lap2034cdf9222ba304838b7219f43404a81a5;
            (*out).m___Lap204a90c17cb872d4c26afbfb9a899a60d6f = (*left).m___Lap204a90c17cb872d4c26afbfb9a899a60d6f;
            (*out).m___Lap205ea9c5b51133f4081891e21f6ad4ae205 = (*left).m___Lap205ea9c5b51133f4081891e21f6ad4ae205;
            (*out).m___Lap206e18f8c858a50465e96e4e6972a871f1d = (*left).m___Lap206e18f8c858a50465e96e4e6972a871f1d;
            (*out).m___Lap207b06ecdd63f96449fb31c9048bbaa99f8 = (*left).m___Lap207b06ecdd63f96449fb31c9048bbaa99f8;
            (*out).m___Lap208b624644a1dd54025914ed4dec7ee6aa7 = (*left).m___Lap208b624644a1dd54025914ed4dec7ee6aa7;
        }

        static void NullifyRightSide(HashJoin_3_Data0 * out)
        {
            (*out).m_stagebib.SetNull();
            (*out).m_usaclicence.SetNull();
            (*out).m_racestaging.SetNull();
        }

        static void CopyRightRow(SV1_Extract_out0 * right, HashJoin_3_Data0 * out)
        {
            (*out).m_stagebib = (*right).m_stagebib;
            (*out).m_usaclicence = (*right).m_usaclicence;
            (*out).m_racestaging = (*right).m_racestaging;
        }

        static void NullifyLeftSide(HashJoin_3_Data0 * out)
        {
            (*out).m_Category.SetNull();
            (*out).m_Place.SetNull();
            (*out).m_Bib.SetNull();
            (*out).m_Last.SetNull();
            (*out).m_First.SetNull();
            (*out).m_Time.SetNull();
            (*out).m_Gap.SetNull();
            (*out).m___Lap2012e8f0ad361f94a3ea278d357a9758298.SetNull();
            (*out).m___Lap202c4cf86ac927d4b828743d91ceb6f8347.SetNull();
            (*out).m___Lap2034cdf9222ba304838b7219f43404a81a5.SetNull();
            (*out).m___Lap204a90c17cb872d4c26afbfb9a899a60d6f.SetNull();
            (*out).m___Lap205ea9c5b51133f4081891e21f6ad4ae205.SetNull();
            (*out).m___Lap206e18f8c858a50465e96e4e6972a871f1d.SetNull();
            (*out).m___Lap207b06ecdd63f96449fb31c9048bbaa99f8.SetNull();
            (*out).m___Lap208b624644a1dd54025914ed4dec7ee6aa7.SetNull();
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<SV2_Extract_out0, SV1_Extract_out0, HashJoin_3_Data0, UID_HashJoin_3>
    {
    public:
        static const int ProbeSorterUID = UID_HashJoin_3_FB_0;
        static const int BuildSorterUID = UID_HashJoin_3_FB_1;
        typedef MKQSort<SV2_Extract_out0> ProbeSorterAlgorithm;
        typedef MKQSort<SV1_Extract_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<SV2_Extract_out0, SV1_Extract_out0, HashJoin_3_Data0, UID_HashJoin_3>
    {
    public:
        typedef HashCombinerPolicyV2<SV2_Extract_out0, SV1_Extract_out0, HashJoin_3_Data0, UID_HashJoin_3> P;

        typedef HashCombineKey_HashJoin_3 KeySchema;
        typedef HashCombineValue_HashJoin_3 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_3& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_Bib_stagebib);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV1_Extract_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_stagebib);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV2_Extract_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_Bib);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_3& left, const HashCombineKey_HashJoin_3& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_Bib_stagebib, right.m_Bib_stagebib)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const SV2_Extract_out0& left, const HashCombineKey_HashJoin_3& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_Bib, right.m_Bib_stagebib)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
            static const bool s_disable{ false };
            static const bool s_raiseUserError{ false };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 3388997629ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const SV2_Extract_out0 & probe, const ValueSchema * build, HashJoin_3_Data0 & output)
        {
            // copy probe
            output.m_Category = probe.m_Category;
            output.m_Place = probe.m_Place;
            output.m_Bib = probe.m_Bib;
            output.m_Last = probe.m_Last;
            output.m_First = probe.m_First;
            output.m_Time = probe.m_Time;
            output.m_Gap = probe.m_Gap;
            output.m___Lap2012e8f0ad361f94a3ea278d357a9758298 = probe.m___Lap2012e8f0ad361f94a3ea278d357a9758298;
            output.m___Lap202c4cf86ac927d4b828743d91ceb6f8347 = probe.m___Lap202c4cf86ac927d4b828743d91ceb6f8347;
            output.m___Lap2034cdf9222ba304838b7219f43404a81a5 = probe.m___Lap2034cdf9222ba304838b7219f43404a81a5;
            output.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f = probe.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f;
            output.m___Lap205ea9c5b51133f4081891e21f6ad4ae205 = probe.m___Lap205ea9c5b51133f4081891e21f6ad4ae205;
            output.m___Lap206e18f8c858a50465e96e4e6972a871f1d = probe.m___Lap206e18f8c858a50465e96e4e6972a871f1d;
            output.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8 = probe.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8;
            output.m___Lap208b624644a1dd54025914ed4dec7ee6aa7 = probe.m___Lap208b624644a1dd54025914ed4dec7ee6aa7;

            // copy build
            output.m_stagebib = scope_cast<FString>(probe.m_Bib);
            output.m_usaclicence = (*build).m_usaclicence;
            output.m_racestaging = (*build).m_racestaging;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const SV2_Extract_out0 & probe, HashJoin_3_Data0 & output)
        {
            // copy probe
            output.m_Category = probe.m_Category;
            output.m_Place = probe.m_Place;
            output.m_Bib = probe.m_Bib;
            output.m_Last = probe.m_Last;
            output.m_First = probe.m_First;
            output.m_Time = probe.m_Time;
            output.m_Gap = probe.m_Gap;
            output.m___Lap2012e8f0ad361f94a3ea278d357a9758298 = probe.m___Lap2012e8f0ad361f94a3ea278d357a9758298;
            output.m___Lap202c4cf86ac927d4b828743d91ceb6f8347 = probe.m___Lap202c4cf86ac927d4b828743d91ceb6f8347;
            output.m___Lap2034cdf9222ba304838b7219f43404a81a5 = probe.m___Lap2034cdf9222ba304838b7219f43404a81a5;
            output.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f = probe.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f;
            output.m___Lap205ea9c5b51133f4081891e21f6ad4ae205 = probe.m___Lap205ea9c5b51133f4081891e21f6ad4ae205;
            output.m___Lap206e18f8c858a50465e96e4e6972a871f1d = probe.m___Lap206e18f8c858a50465e96e4e6972a871f1d;
            output.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8 = probe.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8;
            output.m___Lap208b624644a1dd54025914ed4dec7ee6aa7 = probe.m___Lap208b624644a1dd54025914ed4dec7ee6aa7;

            // nullify build
            output.m_stagebib.SetNull();
            output.m_usaclicence.SetNull();
            output.m_racestaging.SetNull();
        }

         static void DeepCopyBuildRowToKeyValue(const SV1_Extract_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
            FString tmp_stagebib(row.m_stagebib, alloc);
           key.m_Bib_stagebib = tmp_stagebib;
            // copy value
            FString tmp_usaclicence(row.m_usaclicence, alloc);
            (*value).m_usaclicence = tmp_usaclicence;
            FString tmp_racestaging(row.m_racestaging, alloc);
            (*value).m_racestaging = tmp_racestaging;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV1_Extract_out0 & row)
         {
            // copy key
           row.m_stagebib = key.m_Bib_stagebib;
            // copy value
            row.m_usaclicence = (*value).m_usaclicence;
            row.m_racestaging = (*value).m_racestaging;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV1_Extract_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



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

    static const char * StringTable_Process_5 [] =
    {
        "Gap",
        "System.DateTime.FromBinary(636405984000000000L /* 9/10/2017 12:00:00 AM */)",
        "@\"Caldwell Woods\"",
        "Category",
        "Place",
        "racestaging",
        "Bib",
        "stagebib",
        "Last",
        "First",
        "usaclicence",
        "Time",
        "Lap 1",
        "Lap 2",
        "Lap 3",
        "Lap 4",
        "Lap 5",
        "Lap 6",
        "Lap 7",
        "Lap 8",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<HashJoin_3_Data0, Process_5_Data0, UID_Process_5>
    {
    public:

        static bool FilterTransformRow(HashJoin_3_Data0 & input, Process_5_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_Gap = input.m_Gap;
                    exceptionIndex++;
                    output.m_RaceDate = staticconstant_0;
                    exceptionIndex++;
                    output.m_EventName = staticconstant_1;
                    exceptionIndex++;
                    output.m_RaceName = input.m_Category;
                    exceptionIndex++;
                    output.m_RacePlacing = input.m_Place;
                    exceptionIndex++;
                    output.m_RaceStaging = input.m_racestaging;
                    exceptionIndex++;
                    output.m_RaceNumber = input.m_Bib;
                    exceptionIndex++;
                    output.m_RaceNumberStaged = input.m_stagebib;
                    exceptionIndex++;
                    output.m_LastName = input.m_Last;
                    exceptionIndex++;
                    output.m_FirstName = input.m_First;
                    exceptionIndex++;
                    output.m_LicenceNumber = input.m_usaclicence;
                    exceptionIndex++;
                    output.m_FinishTime = input.m_Time;
                    exceptionIndex++;
                    output.m_Lap1 = input.m___Lap2012e8f0ad361f94a3ea278d357a9758298;
                    exceptionIndex++;
                    output.m_Lap2 = input.m___Lap202c4cf86ac927d4b828743d91ceb6f8347;
                    exceptionIndex++;
                    output.m_Lap3 = input.m___Lap2034cdf9222ba304838b7219f43404a81a5;
                    exceptionIndex++;
                    output.m_Lap4 = input.m___Lap204a90c17cb872d4c26afbfb9a899a60d6f;
                    exceptionIndex++;
                    output.m_Lap5 = input.m___Lap205ea9c5b51133f4081891e21f6ad4ae205;
                    exceptionIndex++;
                    output.m_Lap6 = input.m___Lap206e18f8c858a50465e96e4e6972a871f1d;
                    exceptionIndex++;
                    output.m_Lap7 = input.m___Lap207b06ecdd63f96449fb31c9048bbaa99f8;
                    exceptionIndex++;
                    output.m_Lap8 = input.m___Lap208b624644a1dd54025914ed4dec7ee6aa7;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_5[exceptionIndex]));
                    }
    }
            static ScopeDateTime staticconstant_0;
            static FString staticconstant_1;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = ScopeDateTime::FromBinary(636405984000000000LL) /* 9/10/2017 12:00:00 AM */;
                staticconstant_1 = FString("Caldwell Woods", 14);
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
    ScopeDateTime RowTransformPolicy<HashJoin_3_Data0, Process_5_Data0, UID_Process_5>::staticconstant_0;
    FString RowTransformPolicy<HashJoin_3_Data0, Process_5_Data0, UID_Process_5>::staticconstant_1;
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

    template<> 
    class TextOutputPolicy<SV3_Combine_Split_out1, UID_Output_12>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, SV3_Combine_Split_out1 & row)
        {
            output->Write<ScopeDateTime,false>(row.m_RaceDate);
            output->WriteDelimiter();
            if (!row.m_EventName.IsNull())
            {
                output->Write<FString,true>(row.m_EventName);
            }
            output->WriteDelimiter();
            if (!row.m_RaceName.IsNull())
            {
                output->Write<FString,true>(row.m_RaceName);
            }
            output->WriteDelimiter();
            if (!row.m_RacePlacing.IsNull())
            {
                output->Write<FString,true>(row.m_RacePlacing);
            }
            output->WriteDelimiter();
            if (!row.m_RaceStaging.IsNull())
            {
                output->Write<FString,true>(row.m_RaceStaging);
            }
            output->WriteDelimiter();
            if (!row.m_RaceNumber.IsNull())
            {
                output->Write<FString,true>(row.m_RaceNumber);
            }
            output->WriteDelimiter();
            if (!row.m_RaceNumberStaged.IsNull())
            {
                output->Write<FString,true>(row.m_RaceNumberStaged);
            }
            output->WriteDelimiter();
            if (!row.m_LastName.IsNull())
            {
                output->Write<FString,true>(row.m_LastName);
            }
            output->WriteDelimiter();
            if (!row.m_FirstName.IsNull())
            {
                output->Write<FString,true>(row.m_FirstName);
            }
            output->WriteDelimiter();
            if (!row.m_LicenceNumber.IsNull())
            {
                output->Write<FString,true>(row.m_LicenceNumber);
            }
            output->WriteDelimiter();
            if (!row.m_FinishTime.IsNull())
            {
                output->Write<FString,true>(row.m_FinishTime);
            }
            output->WriteDelimiter();
            if (!row.m_Gap.IsNull())
            {
                output->Write<FString,true>(row.m_Gap);
            }
            output->WriteDelimiter();
            if (!row.m_Lap1.IsNull())
            {
                output->Write<FString,true>(row.m_Lap1);
            }
            output->WriteDelimiter();
            if (!row.m_Lap2.IsNull())
            {
                output->Write<FString,true>(row.m_Lap2);
            }
            output->WriteDelimiter();
            if (!row.m_Lap3.IsNull())
            {
                output->Write<FString,true>(row.m_Lap3);
            }
            output->WriteDelimiter();
            if (!row.m_Lap4.IsNull())
            {
                output->Write<FString,true>(row.m_Lap4);
            }
            output->WriteDelimiter();
            if (!row.m_Lap5.IsNull())
            {
                output->Write<FString,true>(row.m_Lap5);
            }
            output->WriteDelimiter();
            if (!row.m_Lap6.IsNull())
            {
                output->Write<FString,true>(row.m_Lap6);
            }
            output->WriteDelimiter();
            if (!row.m_Lap7.IsNull())
            {
                output->Write<FString,true>(row.m_Lap7);
            }
            output->WriteDelimiter();
            if (!row.m_Lap8.IsNull())
            {
                output->Write<FString,true>(row.m_Lap8);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("RaceDate", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("EventName", 9));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RaceName", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RacePlacing", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RaceStaging", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RaceNumber", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RaceNumberStaged", 16));
            output->WriteDelimiter();
            output->Write<string,true>(FString("LastName", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("FirstName", 9));
            output->WriteDelimiter();
            output->Write<string,true>(FString("LicenceNumber", 13));
            output->WriteDelimiter();
            output->Write<string,true>(FString("FinishTime", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Gap", 3));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Lap1", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Lap2", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Lap3", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Lap4", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Lap5", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Lap6", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Lap7", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Lap8", 4));
            output->WriteNewLine();
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

    static const char * StringTable_Split_6_0 [] =
    {
        "RaceDate",
        "(DateTime?)null",
        "EventName",
        "RaceName",
        "RacePlacing",
        "RaceStaging",
        "RaceNumber",
        "RaceNumberStaged",
        "LastName",
        "FirstName",
        "LicenceNumber",
        "FinishTime",
        "Gap",
        "Lap1",
        "Lap2",
        "Lap3",
        "Lap4",
        "Lap5",
        "Lap6",
        "Lap7",
        "Lap8",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_5_Data0, SV3_Combine_Split_out0, UID_Split_6_0>
    {
    public:

        void Init(ManagedRow<Process_5_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Process_5_Data0 & input, SV3_Combine_Split_out0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RaceDate = input.m_RaceDate;
                    exceptionIndex++;
                    output.m_RaceTime = scope_cast<NativeNullable<ScopeDateTime>>(__nullptr);
                    exceptionIndex++;
                    output.m_EventName = input.m_EventName;
                    exceptionIndex++;
                    output.m_RaceName = input.m_RaceName;
                    exceptionIndex++;
                    output.m_RacePlacing = input.m_RacePlacing;
                    exceptionIndex++;
                    output.m_RaceStaging = input.m_RaceStaging;
                    exceptionIndex++;
                    output.m_RaceNumber = input.m_RaceNumber;
                    exceptionIndex++;
                    output.m_RaceNumberStaged = input.m_RaceNumberStaged;
                    exceptionIndex++;
                    output.m_LastName = input.m_LastName;
                    exceptionIndex++;
                    output.m_FirstName = input.m_FirstName;
                    exceptionIndex++;
                    output.m_LicenceNumber = input.m_LicenceNumber;
                    exceptionIndex++;
                    output.m_FinishTime = input.m_FinishTime;
                    exceptionIndex++;
                    output.m_Gap = input.m_Gap;
                    exceptionIndex++;
                    output.m_Lap1 = input.m_Lap1;
                    exceptionIndex++;
                    output.m_Lap2 = input.m_Lap2;
                    exceptionIndex++;
                    output.m_Lap3 = input.m_Lap3;
                    exceptionIndex++;
                    output.m_Lap4 = input.m_Lap4;
                    exceptionIndex++;
                    output.m_Lap5 = input.m_Lap5;
                    exceptionIndex++;
                    output.m_Lap6 = input.m_Lap6;
                    exceptionIndex++;
                    output.m_Lap7 = input.m_Lap7;
                    exceptionIndex++;
                    output.m_Lap8 = input.m_Lap8;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_6_0[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
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

    static const char * StringTable_Split_6_1 [] =
    {
        "RaceDate",
        "EventName",
        "RaceName",
        "RacePlacing",
        "RaceStaging",
        "RaceNumber",
        "RaceNumberStaged",
        "LastName",
        "FirstName",
        "LicenceNumber",
        "FinishTime",
        "Gap",
        "Lap1",
        "Lap2",
        "Lap3",
        "Lap4",
        "Lap5",
        "Lap6",
        "Lap7",
        "Lap8",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_5_Data0, SV3_Combine_Split_out1, UID_Split_6_1>
    {
    public:

        void Init(ManagedRow<Process_5_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Process_5_Data0 & input, SV3_Combine_Split_out1 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RaceDate = input.m_RaceDate;
                    exceptionIndex++;
                    output.m_EventName = input.m_EventName;
                    exceptionIndex++;
                    output.m_RaceName = input.m_RaceName;
                    exceptionIndex++;
                    output.m_RacePlacing = input.m_RacePlacing;
                    exceptionIndex++;
                    output.m_RaceStaging = input.m_RaceStaging;
                    exceptionIndex++;
                    output.m_RaceNumber = input.m_RaceNumber;
                    exceptionIndex++;
                    output.m_RaceNumberStaged = input.m_RaceNumberStaged;
                    exceptionIndex++;
                    output.m_LastName = input.m_LastName;
                    exceptionIndex++;
                    output.m_FirstName = input.m_FirstName;
                    exceptionIndex++;
                    output.m_LicenceNumber = input.m_LicenceNumber;
                    exceptionIndex++;
                    output.m_FinishTime = input.m_FinishTime;
                    exceptionIndex++;
                    output.m_Gap = input.m_Gap;
                    exceptionIndex++;
                    output.m_Lap1 = input.m_Lap1;
                    exceptionIndex++;
                    output.m_Lap2 = input.m_Lap2;
                    exceptionIndex++;
                    output.m_Lap3 = input.m_Lap3;
                    exceptionIndex++;
                    output.m_Lap4 = input.m_Lap4;
                    exceptionIndex++;
                    output.m_Lap5 = input.m_Lap5;
                    exceptionIndex++;
                    output.m_Lap6 = input.m_Lap6;
                    exceptionIndex++;
                    output.m_Lap7 = input.m_Lap7;
                    exceptionIndex++;
                    output.m_Lap8 = input.m_Lap8;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_6_1[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
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



#if defined(COMPILE_NATIVE)
    template<> 
    class SplitPolicy<typename Process_5_Data0, UID_Split_6>
    {
        SIZE_T m_outputBufSize;
        int m_outputBufCnt;

        typedef SplitOutputterSentinel<Process_5_Data0> SplitOutputType_Split_6_2;
        SplitOutputType_Split_6_2 splitOutputter_Split_6_2;

        typedef SplitOutputter<SplitOutputType_Split_6_2, SV3_Combine_Split_out1, TextOutputPolicy<SV3_Combine_Split_out1, UID_Output_12>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, UID_Split_6_1> SplitOutputType_Split_6_1;
        SplitOutputType_Split_6_1 splitOutputter_Split_6_1;


        typedef SplitOutputter<SplitOutputType_Split_6_1, SV3_Combine_Split_out0, BinaryOutputPolicy<SV3_Combine_Split_out0>, BinaryOutputStream, UID_Split_6_0> SplitOutputType_Split_6_0;
        SplitOutputType_Split_6_0 splitOutputter_Split_6_0;


    public:
        SplitPolicy(OutputFileInfo * outputFiles, SIZE_T outputBufSize, int outputBufCnt) : m_outputBufSize(outputBufSize), m_outputBufCnt(outputBufCnt),
            splitOutputter_Split_6_1(&splitOutputter_Split_6_2, outputFiles[1].outputFileName, outputFiles[1].isFirstOutputPiece, outputBufSize, outputBufCnt, UID_SV3_Combine_Split_out1, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16)),
            splitOutputter_Split_6_0(&splitOutputter_Split_6_1, outputFiles[0].outputFileName, false, outputBufSize, outputBufCnt, UID_SV3_Combine_Split_out0)
        {
        }

        void SetSequenceNumber(int sequenceNumber)
        {
            splitOutputter_Split_6_1.SetSequenceNumber(sequenceNumber);
            splitOutputter_Split_6_0.SetSequenceNumber(sequenceNumber);
        }

        void Init()
        {
            splitOutputter_Split_6_0.Init(nullptr);
        }

        void Close()
        {
            splitOutputter_Split_6_0.Close();
        }

        void ProcessMetadata(PartitionMetadata * metadata)
        {
            splitOutputter_Split_6_0.ProcessMetadata(metadata);
        }

        void OutputHeader()
        {
            splitOutputter_Split_6_0.OutputHeader();
        }

        void ProcessRow(Process_5_Data0 & input)
        {
            splitOutputter_Split_6_0.ProcessRow(input);
        }

        __declspec(noinline)
		void WriteRuntimeStats(TreeNode & root)
        {
            splitOutputter_Split_6_0.WriteRuntimeStats(root);
        }

        LONGLONG GetTotalIoWaitTime()
        {
            return splitOutputter_Split_6_0.GetTotalIoWaitTime();
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            return splitOutputter_Split_6_0.GetOperatorRequirements()
	.AddMemoryForOutputUStreams(1, Configuration::GetGlobal().GetMaxOnDiskRowSize(), m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt);
        }

        void FlushOutput(bool forcePersistent = false)
        {
            splitOutputter_Split_6_0.FlushOutput(forcePersistent);
        }

        void DoScopeCEPCheckpoint(BinaryOutputStream & output)
        {
            splitOutputter_Split_6_0.DoScopeCEPCheckpoint(output);
        }

        void LoadScopeCEPCheckpoint(BinaryInputStream & input)
        {
            splitOutputter_Split_6_0.LoadScopeCEPCheckpoint(input);
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
    extern "C" __declspec(dllexport) void __stdcall SV3_Combine_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
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

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV2_Extract_out0, BinaryExtractPolicy<SV2_Extract_out0>, BinaryInputStream> ExtractorType1_SV3_Combine_Split;        
        unique_ptr<ExtractorType1_SV3_Combine_Split> extractor_0_ptr= make_unique<ExtractorType1_SV3_Combine_Split>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV2_Extract_out0);
        ExtractorType1_SV3_Combine_Split * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType2_SV3_Combine_Split;        
        unique_ptr<ExtractorType2_SV3_Combine_Split> extractor_1_ptr= make_unique<ExtractorType2_SV3_Combine_Split>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType2_SV3_Combine_Split * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<ExtractorType1_SV3_Combine_Split, SV2_Extract_out0, ExtractorType2_SV3_Combine_Split, SV1_Extract_out0, HashJoin_3_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_3> CombinerType_HashJoin_3;
        unique_ptr<CombinerType_HashJoin_3> combiner_HashJoin_3_ptr;
        combiner_HashJoin_3_ptr.reset(new CombinerType_HashJoin_3(extractor_0, extractor_1, UID_HashJoin_3, 1));

        CombinerType_HashJoin_3 * combiner_HashJoin_3 = combiner_HashJoin_3_ptr.get();
        ULONG combiner_HashJoin_3_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<HashJoin_3_Data0>> delegate_combiner_HashJoin_3_ptr (new OperatorDelegate<HashJoin_3_Data0>(OperatorDelegate<HashJoin_3_Data0>::FromOperator(combiner_HashJoin_3)));
        OperatorDelegate<HashJoin_3_Data0> * delegate_combiner_HashJoin_3 = delegate_combiner_HashJoin_3_ptr.get();
        ULONG delegate_combiner_HashJoin_3_count = 1;
        // Define sorter type
        typedef Sorter<HashJoin_3_Data0> SorterType_Process_4;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_4> sorter_Process_4_ptr (new SorterType_Process_4(delegate_combiner_HashJoin_3, &MKQSort<HashJoin_3_Data0>::Sort<KeyComparePolicy<HashJoin_3_Data0, UID_Process_4>, (sizeof(HashJoin_3_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<HashJoin_3_Data0>::CreateDelegate<UID_Process_4>(), false, 2420113405 /*memoryQuota*/, UID_Process_4));
        SorterType_Process_4 * sorter_Process_4 = sorter_Process_4_ptr.get();
        ULONG sorter_Process_4_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SorterType_Process_4, HashJoin_3_Data0, Process_5_Data0, UID_Process_5> FilterTransformerType_Process_5;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_5> filterTransformer_Process_5_ptr (new FilterTransformerType_Process_5(sorter_Process_4, UID_Process_5));
        FilterTransformerType_Process_5 * filterTransformer_Process_5 = filterTransformer_Process_5_ptr.get();
        ULONG filterTransformer_Process_5_count = 1;
        // Define splitter type

        typedef Splitter<FilterTransformerType_Process_5, Process_5_Data0, false, UID_Split_6> SplitterType_Split_6;

        // Construct operator and initialize it.
        unique_ptr<SplitterType_Split_6> splitter_Split_6_ptr (new SplitterType_Split_6(filterTransformer_Process_5, outputs, x_outputBufSize, x_outputBufCnt, UID_Split_6));
        SplitterType_Split_6 * splitter_Split_6 = splitter_Split_6_ptr.get();

        if (argv != nullptr && argc > 0)
        {
            try
            {
                int sequenceNumber = GetSequenceNumber(argv, argc);
                splitter_Split_6->SetSequenceNumber(sequenceNumber);
            }
            catch(const RuntimeException&)
            {
                // Sequence number will remain 0 in splitter_Split_6.
            }
        }

        try
        {
            // Init operator chain
            splitter_Split_6->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_5_Data0 row;
            splitter_Split_6->GetNextRow(row);

            // Close operator chain
            splitter_Split_6->Close();
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
        splitter_Split_6->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV3_Combine_Split
#pragma region SV4_Partition
#if defined(COMPILE_SV4_PARTITION) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<>
    class RowHashPolicy<SV3_Combine_Split_out0,UID_Partition_7>
    {
    public:
        static constexpr bool bucketWrapAround = true;

        static __int64 Hash(SV3_Combine_Split_out0* row)
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
    extern "C" __declspec(dllexport) void __stdcall SV4_Partition_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
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

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        IOManager::EnableIScopeNonBlockingStreaming();
        // Define extractor type and construct object
        typedef Extractor<SV3_Combine_Split_out0, BinaryExtractPolicy<SV3_Combine_Split_out0>, BinaryInputStream> ExtractorType1_SV4_Partition;        
        unique_ptr<ExtractorType1_SV4_Partition> extractor_0_ptr= make_unique<ExtractorType1_SV4_Partition>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV3_Combine_Split_out0);
        ExtractorType1_SV4_Partition * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define HashPartition partitioner type and object
        typedef HashPartitioner<PartitionSchema_Partition_7, SV3_Combine_Split_out0, UID_Partition_7> PartitionerType_Partition_7;
        PartitionerType_Partition_7 partitioner_Partition_7;
        // Define RangePartition operator
        typedef PartitionOutputer<ExtractorType1_SV4_Partition, SV3_Combine_Split_out0, PartitionerType_Partition_7, BinaryOutputPolicy<typename SV3_Combine_Split_out0>, AugmentedBinaryOutputStream<PartitionPayloadMetadata<PartitionSchema_Partition_7,UID_Partition_7>>, true > PartitionOutputerType_Partition_7;
        unique_ptr<PartitionOutputerType_Partition_7> partitionOutputer_Partition_7_ptr (new PartitionOutputerType_Partition_7(extractor_0, &partitioner_Partition_7, outputs, outputCnt, x_outputBufSize, x_outputBufCnt, UID_Partition_7));
        PartitionOutputerType_Partition_7* partitionOutputer_Partition_7 = partitionOutputer_Partition_7_ptr.get();        
        try
        {
            // Init operator chain
            partitionOutputer_Partition_7->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV3_Combine_Split_out0 row;
            partitionOutputer_Partition_7->GetNextRow(row);

            // Close operator chain
            partitionOutputer_Partition_7->Close();
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
        partitionOutputer_Partition_7->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV4_Partition
#pragma region SV5_Split
#if defined(COMPILE_SV5_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV3_Combine_Split_out0,UID_Process_8>
    {
    public:
        struct KeyStruct
        {
            ScopeDateTime m_RaceDate;
            FString m_RaceName;

            KeyStruct(SV3_Combine_Split_out0 & c) :
                m_RaceDate(c.m_RaceDate),
                m_RaceName(c.m_RaceName)
            {
            }

            KeyStruct(const SV3_Combine_Split_out0 & c, IncrementalAllocator * alloc) :
                m_RaceDate(const_cast<SV3_Combine_Split_out0&>(c).m_RaceDate),
                m_RaceName(const_cast<SV3_Combine_Split_out0&>(c).m_RaceName, alloc)
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

        static int Compare(SV3_Combine_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RaceDate, key.m_RaceDate)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_RaceName, key.m_RaceName)) != 0)
                return r;
            return r;
        }

        static int Compare(SV3_Combine_Split_out0 * n1, SV3_Combine_Split_out0 * n2)
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
    class AssertRowOrderPolicy_SV3_Combine_Split_out0_UID_Process_8
    {
        typedef KeyComparePolicy<SV3_Combine_Split_out0, UID_Process_8>::KeyType KeyType;
        KeyType m_key;

        bool m_firstRow;
    public:
        AssertRowOrderPolicy_SV3_Combine_Split_out0_UID_Process_8() : m_firstRow(true) {}

        void CheckAssert(SV3_Combine_Split_out0& row, IncrementalAllocator& allocator)
        {
            int cmp = 0;
            if (m_firstRow)
            {
                m_firstRow = false;
                cmp = 1; // set cmp to copy key part from the row at the end
            }
            else
            {
                cmp = KeyComparePolicy<SV3_Combine_Split_out0, UID_Process_8>::Compare(row, m_key);

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
    class SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>
    {
    public:
        SStreamV3OutputPolicy(UINT)
        {
        }

        static const string& DataSchemaString()
        {
            static string* spDataSchemaString = new string(std::string{ u8"<?xml version=\"1.0\"?>\r\n<Schema>\r\n  <Format>1</Format>\r\n  <Columns>\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n      <Type>DateTime</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceTime</Name>\r\n      <Type>DateTime?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>EventName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RacePlacing</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceStaging</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceNumber</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceNumberStaged</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>LastName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FirstName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>LicenceNumber</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FinishTime</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Gap</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap1</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap2</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap3</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap4</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap5</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap6</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap7</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap8</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n  </Columns>\r\n  <SortKey Unique=\"False\">\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n      <Order>Asc</Order>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n      <Order>Asc</Order>\r\n    </Column>\r\n  </SortKey>\r\n</Schema>" });
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
        static int GetPartitionIndex(const SV3_Combine_Split_out0& row)
        {
            // Global sstream outputter does not care partition index.
            UNREFERENCED_PARAMETER(row);
            return 0;
            
        }        
        static void SerializeRow(HANDLE rowHandle, AutoBuffer* buffer, int* columnOffsets, SIZE_T arraySize)
        {
            UNREFERENCED_PARAMETER(arraySize);
            
            SV3_Combine_Split_out0& row = *(SV3_Combine_Split_out0*)rowHandle;
            SStreamDataOutputStream output(buffer);

            char ___masking___[3];
            memset(___masking___, 0, sizeof(___masking___));

            if (row.m_RaceTime.IsNull())
            {
                ___masking___[0] |= 2;
            }
            if (row.m_EventName.IsNull())
            {
                ___masking___[0] |= 4;
            }
            if (row.m_RaceName.IsNull())
            {
                ___masking___[0] |= 8;
            }
            if (row.m_RacePlacing.IsNull())
            {
                ___masking___[0] |= 16;
            }
            if (row.m_RaceStaging.IsNull())
            {
                ___masking___[0] |= 32;
            }
            if (row.m_RaceNumber.IsNull())
            {
                ___masking___[0] |= 64;
            }
            if (row.m_RaceNumberStaged.IsNull())
            {
                ___masking___[0] |= 128;
            }
            if (row.m_LastName.IsNull())
            {
                ___masking___[1] |= 1;
            }
            if (row.m_FirstName.IsNull())
            {
                ___masking___[1] |= 2;
            }
            if (row.m_LicenceNumber.IsNull())
            {
                ___masking___[1] |= 4;
            }
            if (row.m_FinishTime.IsNull())
            {
                ___masking___[1] |= 8;
            }
            if (row.m_Gap.IsNull())
            {
                ___masking___[1] |= 16;
            }
            if (row.m_Lap1.IsNull())
            {
                ___masking___[1] |= 32;
            }
            if (row.m_Lap2.IsNull())
            {
                ___masking___[1] |= 64;
            }
            if (row.m_Lap3.IsNull())
            {
                ___masking___[1] |= 128;
            }
            if (row.m_Lap4.IsNull())
            {
                ___masking___[2] |= 1;
            }
            if (row.m_Lap5.IsNull())
            {
                ___masking___[2] |= 2;
            }
            if (row.m_Lap6.IsNull())
            {
                ___masking___[2] |= 4;
            }
            if (row.m_Lap7.IsNull())
            {
                ___masking___[2] |= 8;
            }
            if (row.m_Lap8.IsNull())
            {
                ___masking___[2] |= 16;
            }
            auto rowStart = output.GetPosition();

            // write a null mask regardless whether there are nullable columns,
            // if there aren't any nullable column, simply write the array's 
            // initial values, which are zeros.
            output.Write(___masking___, sizeof(___masking___));


            columnOffsets[0] = (int)(output.GetPosition() - rowStart);
            output.Write(row.m_RaceDate);

            columnOffsets[1] = (int)(output.GetPosition() - rowStart);
            if (!row.m_RaceTime.IsNull())
            {
                output.Write(row.m_RaceTime);
            }

            columnOffsets[2] = (int)(output.GetPosition() - rowStart);
            if (!row.m_EventName.IsNull())
            {
                output.Write(row.m_EventName);
            }

            columnOffsets[3] = (int)(output.GetPosition() - rowStart);
            if (!row.m_RaceName.IsNull())
            {
                output.Write(row.m_RaceName);
            }

            columnOffsets[4] = (int)(output.GetPosition() - rowStart);
            if (!row.m_RacePlacing.IsNull())
            {
                output.Write(row.m_RacePlacing);
            }

            columnOffsets[5] = (int)(output.GetPosition() - rowStart);
            if (!row.m_RaceStaging.IsNull())
            {
                output.Write(row.m_RaceStaging);
            }

            columnOffsets[6] = (int)(output.GetPosition() - rowStart);
            if (!row.m_RaceNumber.IsNull())
            {
                output.Write(row.m_RaceNumber);
            }

            columnOffsets[7] = (int)(output.GetPosition() - rowStart);
            if (!row.m_RaceNumberStaged.IsNull())
            {
                output.Write(row.m_RaceNumberStaged);
            }

            columnOffsets[8] = (int)(output.GetPosition() - rowStart);
            if (!row.m_LastName.IsNull())
            {
                output.Write(row.m_LastName);
            }

            columnOffsets[9] = (int)(output.GetPosition() - rowStart);
            if (!row.m_FirstName.IsNull())
            {
                output.Write(row.m_FirstName);
            }

            columnOffsets[10] = (int)(output.GetPosition() - rowStart);
            if (!row.m_LicenceNumber.IsNull())
            {
                output.Write(row.m_LicenceNumber);
            }

            columnOffsets[11] = (int)(output.GetPosition() - rowStart);
            if (!row.m_FinishTime.IsNull())
            {
                output.Write(row.m_FinishTime);
            }

            columnOffsets[12] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Gap.IsNull())
            {
                output.Write(row.m_Gap);
            }

            columnOffsets[13] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Lap1.IsNull())
            {
                output.Write(row.m_Lap1);
            }

            columnOffsets[14] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Lap2.IsNull())
            {
                output.Write(row.m_Lap2);
            }

            columnOffsets[15] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Lap3.IsNull())
            {
                output.Write(row.m_Lap3);
            }

            columnOffsets[16] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Lap4.IsNull())
            {
                output.Write(row.m_Lap4);
            }

            columnOffsets[17] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Lap5.IsNull())
            {
                output.Write(row.m_Lap5);
            }

            columnOffsets[18] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Lap6.IsNull())
            {
                output.Write(row.m_Lap6);
            }

            columnOffsets[19] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Lap7.IsNull())
            {
                output.Write(row.m_Lap7);
            }

            columnOffsets[20] = (int)(output.GetPosition() - rowStart);
            if (!row.m_Lap8.IsNull())
            {
                output.Write(row.m_Lap8);
            }

            columnOffsets[21] = (int)(output.GetPosition() - rowStart);
        }

        static const SStreamVersion m_streamVersion = ScopeEngine::SStreamVersion::SSTREAM_VERSION_V3;
    };

    const char* SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_columnNames[] = 
        { "RaceDate", "RaceTime", "EventName", "RaceName", "RacePlacing", "RaceStaging", "RaceNumber", "RaceNumberStaged", "LastName", "FirstName", "LicenceNumber", "FinishTime", "Gap", "Lap1", "Lap2", "Lap3", "Lap4", "Lap5", "Lap6", "Lap7", "Lap8"};

    const char* SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_columnTypes[] = 
        { "DateTime", "DateTime?", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string"};

    BYTE SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_dataColumnSizes[] = 
        { 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        
    BYTE SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_indexColumnSizes[] = 
        { 8, 0, 8, 0, 8, 8, 4 };

    UINT SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_dataPageSortKeys[] =
        { 0, 3 };
        
    UINT SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_dataPageSortKeysCnt = 
        2;

    const char* SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_dataPageSortOrders[] =
        {"Asc", "Asc"};

    const char SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_dataPageSortUniq[] =
        "False";

    const char SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_partitionType[] =
        "HashPartition";
    UINT       SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_partitionKeys[] =
        { 0, 3 };
    const char **  SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::m_partitionOrders = nullptr;


#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<>
    class SStreamPartitionWriter<SV3_Combine_Split_out0, UID_SStreamOutput_9>
    {
    private:
        SStreamOutputStream<SV3_Combine_Split_out0, SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>, PartitionSchema_Partition_7, UID_Partition_7> sstreamOutputStream_0;
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

        void AppendRow(SV3_Combine_Split_out0 & output)
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

                std::string streamSchema = std::string{ u8"<?xml version=\"1.0\"?>\r\n<Schema>\r\n  <Format>1</Format>\r\n  <Columns>\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n      <Type>DateTime</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceTime</Name>\r\n      <Type>DateTime?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>EventName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RacePlacing</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceStaging</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceNumber</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceNumberStaged</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>LastName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FirstName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>LicenceNumber</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FinishTime</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Gap</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap1</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap2</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap3</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap4</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap5</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap6</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap7</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Lap8</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n  </Columns>\r\n  <PartitionKey PartitionType=\"HashPartition\">\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n    </Column>\r\n  </PartitionKey>\r\n  <SortKey Unique=\"False\">\r\n    <Column>\r\n      <Name>RaceDate</Name>\r\n      <Order>Asc</Order>\r\n    </Column>\r\n    <Column>\r\n      <Name>RaceName</Name>\r\n      <Order>Asc</Order>\r\n    </Column>\r\n  </SortKey>\r\n</Schema>" };

                shared_ptr<vector<ScopeEngine::SSLibV3::ColumnGroupInfo>> colGroupInfos = make_shared<vector<ScopeEngine::SSLibV3::ColumnGroupInfo>>(1);
                shared_ptr<vector<ScopeEngine::SSLibV3::DataunitTableRow>> dataUnitTableRows = make_shared<vector<ScopeEngine::SSLibV3::DataunitTableRow>>(1);
                shared_ptr<ScopeEngine::SSLibV3::SStreamStatistics> statistics;
                statistics = sstreamOutputStream_0.GetStatistics();
                std::string dataSchema_0 = SStreamV3OutputPolicy<SV3_Combine_Split_out0, UID_SStreamOutput_9>::DataSchemaString();

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
    extern "C" __declspec(dllexport) void __stdcall SV5_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
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

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV3_Combine_Split_out0, BinaryExtractPolicy<SV3_Combine_Split_out0>, AugmentedBinaryInputStream<PartitionPayloadMetadata<PartitionSchema_Partition_7,UID_Partition_7>>> ExtractorType1_SV5_Split;        
        unique_ptr<ExtractorType1_SV5_Split> extractor_0_ptr= make_unique<ExtractorType1_SV5_Split>(inputs[0], true, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV4_Partition_out0);
        ExtractorType1_SV5_Split * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define the type of the operator
        typedef Asserter<ExtractorType1_SV5_Split, SV3_Combine_Split_out0, AssertRowOrderPolicy_SV3_Combine_Split_out0_UID_Process_8, UID_Process_8> AssertType_Process_8;
        // Construct operator and initialize it.
        unique_ptr<AssertType_Process_8> assertType_Process_8_ptr (new AssertType_Process_8(extractor_0, UID_Process_8));
        AssertType_Process_8 * assertType_Process_8 = assertType_Process_8_ptr.get();
        ULONG assertType_Process_8_count = 1;
        // Define outputer type
        typedef SStreamOutputer<AssertType_Process_8, SV3_Combine_Split_out0, UID_SStreamOutput_9> OutputerType2_SV5_Split;

        // Create array of file names that will be used in SStreamOutputer operator.
        auto outputFiles = std::unique_ptr<std::string[]>{ new std::string[outputCnt] };
        for (int c = 0; c < outputCnt; ++c)
        {
            outputFiles[c] = outputs[c].outputFileName;
        }
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV5_Split> outputer_SStreamOutput_9_ptr(new OutputerType2_SV5_Split(assertType_Process_8, outputFiles.get()[0], 1, x_outputBufSize, x_outputBufCnt, outputs[1].outputFileName, false, UID_SStreamOutput_9, false));
        OutputerType2_SV5_Split * outputer_SStreamOutput_9 = outputer_SStreamOutput_9_ptr.get();
        try
        {
            // Init operator chain
            outputer_SStreamOutput_9->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV3_Combine_Split_out0 row;
            outputer_SStreamOutput_9->GetNextRow(row);

            // Close operator chain
            outputer_SStreamOutput_9->Close();
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
        outputer_SStreamOutput_9->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV5_Split
#pragma region SV6_Aggregate
#if defined(COMPILE_SV6_AGGREGATE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV6_Aggregate_Internal_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
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

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
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
        typedef SStreamMetadataExtractor<SV3_Combine_Split_out0> ExtractorType1_SV6_Aggregate;
        unique_ptr<unique_ptr<ExtractorType1_SV6_Aggregate>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV6_Aggregate>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV6_Aggregate(inputs[i].inputFileName, i, false, UID_SV5_Split_out1));
        }

    ExtractorType1_SV6_Aggregate ** extractor_0 = (ExtractorType1_SV6_Aggregate **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Define the type of the operator
        typedef Merger<ExtractorType1_SV6_Aggregate, SV3_Combine_Split_out0, ScopeUnionAll<ExtractorType1_SV6_Aggregate, SV3_Combine_Split_out0>, UID_MetadataAggregate_10> MetadataAggregateType_MetadataAggregate_10;
        unique_ptr<MetadataAggregateType_MetadataAggregate_10> metadataAggregate_MetadataAggregate_10_ptr(new MetadataAggregateType_MetadataAggregate_10(extractor_0 + 0, extractor_0_count, UID_MetadataAggregate_10));
        MetadataAggregateType_MetadataAggregate_10* metadataAggregate_MetadataAggregate_10 = metadataAggregate_MetadataAggregate_10_ptr.get();
        // Define outputer type
        typedef SStreamMetadataOutputer<MetadataAggregateType_MetadataAggregate_10, SV3_Combine_Split_out0, PartitionSchema_Partition_7, UID_SStreamMetadataOutput_11> OutputerType2_SV6_Aggregate;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV6_Aggregate> outputer_SV6_Aggregate_Internal_out0_ptr(new OutputerType2_SV6_Aggregate(metadataAggregate_MetadataAggregate_10, outputs[0].outputFileName, "", false, false, UID_SV6_Aggregate_Internal_out0));
        OutputerType2_SV6_Aggregate * outputer_SV6_Aggregate_Internal_out0 = outputer_SV6_Aggregate_Internal_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV6_Aggregate_Internal_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV3_Combine_Split_out0 row;
            outputer_SV6_Aggregate_Internal_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV6_Aggregate_Internal_out0->Close();
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
        outputer_SV6_Aggregate_Internal_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<PartitionSchema_Partition_7,UID_SStreamMetadataOutput_11>
    {
    public:
        struct KeyStruct
        {

            KeyStruct(PartitionSchema_Partition_7 & c) 

            {
            }

            KeyStruct(const PartitionSchema_Partition_7 & c, IncrementalAllocator * alloc) 

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

        static int Compare(PartitionSchema_Partition_7 & row, KeyType & key)
        {
            int r = 0;
            return r;
        }

        static int Compare(PartitionSchema_Partition_7 * n1, PartitionSchema_Partition_7 * n2)
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
    extern "C" __declspec(dllexport) void __stdcall SV6_Aggregate_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
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

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
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
        typedef SStreamMetadataExtractor<SV3_Combine_Split_out0> ExtractorType1_SV6_Aggregate;
        unique_ptr<unique_ptr<ExtractorType1_SV6_Aggregate>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV6_Aggregate>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV6_Aggregate(inputs[i].inputFileName, i, false, UID_SV5_Split_out1));
        }

    ExtractorType1_SV6_Aggregate ** extractor_0 = (ExtractorType1_SV6_Aggregate **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Define the type of the operator
        typedef Merger<ExtractorType1_SV6_Aggregate, SV3_Combine_Split_out0, ScopeUnionAll<ExtractorType1_SV6_Aggregate, SV3_Combine_Split_out0>, UID_MetadataAggregate_10> MetadataAggregateType_MetadataAggregate_10;
        unique_ptr<MetadataAggregateType_MetadataAggregate_10> metadataAggregate_MetadataAggregate_10_ptr(new MetadataAggregateType_MetadataAggregate_10(extractor_0 + 0, extractor_0_count, UID_MetadataAggregate_10));
        MetadataAggregateType_MetadataAggregate_10* metadataAggregate_MetadataAggregate_10 = metadataAggregate_MetadataAggregate_10_ptr.get();
        static const BYTE userDataByteArray_SStreamMetadataOutput_11[] = {
            0x3C,0x41,0x72,0x72,0x61,0x79,0x4F,0x66,0x4B,0x65,0x79,0x56,0x61,0x6C,0x75,0x65,0x4F,0x66,0x73,0x74,0x72,0x69,0x6E,0x67,0x62,0x61,0x73,0x65,0x36,0x34,0x42,0x69,0x6E,0x61,0x72,0x79,0x20,0x78,0x6D,0x6C,0x6E,0x73,0x3D,0x22,0x68,0x74,0x74,0x70,0x3A,0x2F,0x2F,0x73,0x63,0x68,0x65,0x6D,0x61,0x73,0x2E,0x6D,0x69,0x63,0x72,0x6F,0x73,0x6F,0x66,0x74,0x2E,0x63,0x6F,0x6D,0x2F,0x32,0x30,0x30,0x33,0x2F,0x31,0x30,0x2F,0x53,0x65,0x72,0x69,0x61,0x6C,0x69,0x7A,0x61,0x74,0x69,0x6F,0x6E,0x2F,0x41,0x72,0x72,0x61,0x79,0x73,0x22,0x20,0x78,0x6D,0x6C,0x6E,0x73,0x3A,0x69,0x3D,0x22,0x68,0x74,0x74,0x70,0x3A,0x2F,0x2F,0x77,0x77,0x77,0x2E,0x77,0x33,0x2E,0x6F,0x72,0x67,0x2F,0x32,0x30,0x30,0x31,0x2F,0x58,0x4D,0x4C,0x53,0x63,0x68,0x65,0x6D,0x61,0x2D,0x69,0x6E,0x73,0x74,0x61,0x6E,0x63,0x65,0x22,0x2F,0x3E};
        auto userData_SStreamMetadataOutput_11 = std::make_tuple(userDataByteArray_SStreamMetadataOutput_11, static_cast<size_t>(156));
        // Define outputer type
        typedef SStreamMetadataOutputer<MetadataAggregateType_MetadataAggregate_10, SV3_Combine_Split_out0, PartitionSchema_Partition_7, UID_SStreamMetadataOutput_11> OutputerType2_SV6_Aggregate;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV6_Aggregate> outputer_SStreamMetadataOutput_11_ptr(new OutputerType2_SV6_Aggregate(metadataAggregate_MetadataAggregate_10, outputs[0].outputFileName, "", false, false, UID_SStreamMetadataOutput_11, userData_SStreamMetadataOutput_11));
        OutputerType2_SV6_Aggregate * outputer_SStreamMetadataOutput_11 = outputer_SStreamMetadataOutput_11_ptr.get();
        try
        {
            // Init operator chain
            outputer_SStreamMetadataOutput_11->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            SV3_Combine_Split_out0 row;
            outputer_SStreamMetadataOutput_11->GetNextRow(row);

            // Close operator chain
            outputer_SStreamMetadataOutput_11->Close();
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
        outputer_SStreamMetadataOutput_11->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV6_Aggregate
// Empty footer
