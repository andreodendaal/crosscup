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
UID_SV3_Combine_out0 = 11,
UID_HashJoin_3_0,
UID_HashJoin_3_1,
UID_HashJoin_3_FB_0,
UID_HashJoin_3_FB_1,
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


    class Extract_0_Data0
    {
    public:
        FString m___STAGE2023991f9213f8e540c9b4de9ca3eb0a1218;
        FString m___BIB20230dedc904a2c24669a25dbe72f57e7ba6;
        FString m___FIRST20NAME1468289b9272444dbb2e8963985b3d18;
        FString m___LAST20NAME8604cb067fe9497aa269eae35de0bad4;
        FString m_TEAM;
        FString m_CITY;
        FString m_STATE;
        FString m_AGE;
        FString m_CAT;
        FString m_LICENSE;
        FString m___CXR20Points07978ead86564f198452cbf626503cb9;
        FString m___CCC20Points158f360fb74d4b32a374061013d90aa3;
        FString m___Category20Entered8b1af79217844aff8e0ffa156e1bd9a7;
        FString m___CCC20Points20Most20Recent20Date20Placing83026b0142b147b085c219da13697394;
        FString m___CCC20Points20Most20Recent20Date4d0d5742cb2d46a4999679f9307e1fa5;
        FString m___Time20Enteredd0b39540030e47438b6ea4d897432c4c;
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
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Extract_0_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Extract_0_Data0 & row)
    {
        os << "\t" << std::string{ u8"STAGE #" } << ":\t" << row.m___STAGE2023991f9213f8e540c9b4de9ca3eb0a1218 << endl;
        os << "\t" << std::string{ u8"BIB #" } << ":\t" << row.m___BIB20230dedc904a2c24669a25dbe72f57e7ba6 << endl;
        os << "\t" << std::string{ u8"FIRST NAME" } << ":\t" << row.m___FIRST20NAME1468289b9272444dbb2e8963985b3d18 << endl;
        os << "\t" << std::string{ u8"LAST NAME" } << ":\t" << row.m___LAST20NAME8604cb067fe9497aa269eae35de0bad4 << endl;
        os << "\t" << std::string{ u8"TEAM" } << ":\t" << row.m_TEAM << endl;
        os << "\t" << std::string{ u8"CITY" } << ":\t" << row.m_CITY << endl;
        os << "\t" << std::string{ u8"STATE" } << ":\t" << row.m_STATE << endl;
        os << "\t" << std::string{ u8"AGE" } << ":\t" << row.m_AGE << endl;
        os << "\t" << std::string{ u8"CAT" } << ":\t" << row.m_CAT << endl;
        os << "\t" << std::string{ u8"LICENSE" } << ":\t" << row.m_LICENSE << endl;
        os << "\t" << std::string{ u8"CXR Points" } << ":\t" << row.m___CXR20Points07978ead86564f198452cbf626503cb9 << endl;
        os << "\t" << std::string{ u8"CCC Points" } << ":\t" << row.m___CCC20Points158f360fb74d4b32a374061013d90aa3 << endl;
        os << "\t" << std::string{ u8"Category Entered" } << ":\t" << row.m___Category20Entered8b1af79217844aff8e0ffa156e1bd9a7 << endl;
        os << "\t" << std::string{ u8"CCC Points Most Recent Date Placing" } << ":\t" << row.m___CCC20Points20Most20Recent20Date20Placing83026b0142b147b085c219da13697394 << endl;
        os << "\t" << std::string{ u8"CCC Points Most Recent Date" } << ":\t" << row.m___CCC20Points20Most20Recent20Date4d0d5742cb2d46a4999679f9307e1fa5 << endl;
        os << "\t" << std::string{ u8"Time Entered" } << ":\t" << row.m___Time20Enteredd0b39540030e47438b6ea4d897432c4c << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


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
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV1_Extract_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV1_Extract_out0 & row)
    {
        os << "\t" << std::string{ u8"stagebib" } << ":\t" << row.m_stagebib << endl;
        os << "\t" << std::string{ u8"usaclicence" } << ":\t" << row.m_usaclicence << endl;
        os << "\t" << std::string{ u8"racestaging" } << ":\t" << row.m_racestaging << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


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
        FString m___Lap201467329a6d6854169b37d878167ece6cd;
        FString m___Lap202c1be2804334941bb83e08c081c80cd3a;
        FString m___Lap2039fbb29adbf5f44b3b53a7322911349cf;
        FString m___Lap204f908cbd466d84b1cb9fa358ccabf25c2;
        FString m___Lap20545817b7f9a6c46ba808054f7eec54771;
        FString m___Lap20653b479c388204a67a5bec19884d81956;
        FString m___Lap207e91cd6a6b3b54b77a6731523e915ab44;
        FString m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0;
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
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV2_Extract_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV2_Extract_out0 & row)
    {
        os << "\t" << std::string{ u8"Category" } << ":\t" << row.m_Category << endl;
        os << "\t" << std::string{ u8"Place" } << ":\t" << row.m_Place << endl;
        os << "\t" << std::string{ u8"Bib" } << ":\t" << row.m_Bib << endl;
        os << "\t" << std::string{ u8"Last" } << ":\t" << row.m_Last << endl;
        os << "\t" << std::string{ u8"First" } << ":\t" << row.m_First << endl;
        os << "\t" << std::string{ u8"Time" } << ":\t" << row.m_Time << endl;
        os << "\t" << std::string{ u8"Gap" } << ":\t" << row.m_Gap << endl;
        os << "\t" << std::string{ u8"Lap 1" } << ":\t" << row.m___Lap201467329a6d6854169b37d878167ece6cd << endl;
        os << "\t" << std::string{ u8"Lap 2" } << ":\t" << row.m___Lap202c1be2804334941bb83e08c081c80cd3a << endl;
        os << "\t" << std::string{ u8"Lap 3" } << ":\t" << row.m___Lap2039fbb29adbf5f44b3b53a7322911349cf << endl;
        os << "\t" << std::string{ u8"Lap 4" } << ":\t" << row.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2 << endl;
        os << "\t" << std::string{ u8"Lap 5" } << ":\t" << row.m___Lap20545817b7f9a6c46ba808054f7eec54771 << endl;
        os << "\t" << std::string{ u8"Lap 6" } << ":\t" << row.m___Lap20653b479c388204a67a5bec19884d81956 << endl;
        os << "\t" << std::string{ u8"Lap 7" } << ":\t" << row.m___Lap207e91cd6a6b3b54b77a6731523e915ab44 << endl;
        os << "\t" << std::string{ u8"Lap 8" } << ":\t" << row.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


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
        FString m___Lap201467329a6d6854169b37d878167ece6cd;
        FString m___Lap202c1be2804334941bb83e08c081c80cd3a;
        FString m___Lap2039fbb29adbf5f44b3b53a7322911349cf;
        FString m___Lap204f908cbd466d84b1cb9fa358ccabf25c2;
        FString m___Lap20545817b7f9a6c46ba808054f7eec54771;
        FString m___Lap20653b479c388204a67a5bec19884d81956;
        FString m___Lap207e91cd6a6b3b54b77a6731523e915ab44;
        FString m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0;
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
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashJoin_3_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashJoin_3_Data0 & row)
    {
        os << "\t" << std::string{ u8"Category" } << ":\t" << row.m_Category << endl;
        os << "\t" << std::string{ u8"Place" } << ":\t" << row.m_Place << endl;
        os << "\t" << std::string{ u8"Bib" } << ":\t" << row.m_Bib << endl;
        os << "\t" << std::string{ u8"Last" } << ":\t" << row.m_Last << endl;
        os << "\t" << std::string{ u8"First" } << ":\t" << row.m_First << endl;
        os << "\t" << std::string{ u8"Time" } << ":\t" << row.m_Time << endl;
        os << "\t" << std::string{ u8"Gap" } << ":\t" << row.m_Gap << endl;
        os << "\t" << std::string{ u8"Lap 1" } << ":\t" << row.m___Lap201467329a6d6854169b37d878167ece6cd << endl;
        os << "\t" << std::string{ u8"Lap 2" } << ":\t" << row.m___Lap202c1be2804334941bb83e08c081c80cd3a << endl;
        os << "\t" << std::string{ u8"Lap 3" } << ":\t" << row.m___Lap2039fbb29adbf5f44b3b53a7322911349cf << endl;
        os << "\t" << std::string{ u8"Lap 4" } << ":\t" << row.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2 << endl;
        os << "\t" << std::string{ u8"Lap 5" } << ":\t" << row.m___Lap20545817b7f9a6c46ba808054f7eec54771 << endl;
        os << "\t" << std::string{ u8"Lap 6" } << ":\t" << row.m___Lap20653b479c388204a67a5bec19884d81956 << endl;
        os << "\t" << std::string{ u8"Lap 7" } << ":\t" << row.m___Lap207e91cd6a6b3b54b77a6731523e915ab44 << endl;
        os << "\t" << std::string{ u8"Lap 8" } << ":\t" << row.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0 << endl;
        os << "\t" << std::string{ u8"stagebib" } << ":\t" << row.m_stagebib << endl;
        os << "\t" << std::string{ u8"usaclicence" } << ":\t" << row.m_usaclicence << endl;
        os << "\t" << std::string{ u8"racestaging" } << ":\t" << row.m_racestaging << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


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
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_3 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_3 & row)
    {
        os << "\t" << std::string{ u8"Bib_stagebib" } << ":\t" << row.m_Bib_stagebib << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


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
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_3 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_3 & row)
    {
        os << "\t" << std::string{ u8"usaclicence" } << ":\t" << row.m_usaclicence << endl;
        os << "\t" << std::string{ u8"racestaging" } << ":\t" << row.m_racestaging << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_4_Data0
    {
    public:
        FString m_Category;
        FString m_raceplacing;
        FString m_racestaging;
        FString m_bibid;
        FString m_stagebib;
        FString m_lastname;
        FString m_firstname;
        FString m_usaclicence;
        FString m_time;
        FString m_gap;
        FString m_lap1;
        FString m_lap2;
        FString m_lap3;
        FString m_lap4;
        FString m_lap5;
        FString m_lap6;
        FString m_lap7;
        FString m_lap8;
        Process_4_Data0();
        Process_4_Data0(const Process_4_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_4_Data0(const Process_4_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

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
        friend ostream & operator<<(ostream & os, Process_4_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_4_Data0 & row)
    {
        os << "\t" << std::string{ u8"Category" } << ":\t" << row.m_Category << endl;
        os << "\t" << std::string{ u8"raceplacing" } << ":\t" << row.m_raceplacing << endl;
        os << "\t" << std::string{ u8"racestaging" } << ":\t" << row.m_racestaging << endl;
        os << "\t" << std::string{ u8"bibid" } << ":\t" << row.m_bibid << endl;
        os << "\t" << std::string{ u8"stagebib" } << ":\t" << row.m_stagebib << endl;
        os << "\t" << std::string{ u8"lastname" } << ":\t" << row.m_lastname << endl;
        os << "\t" << std::string{ u8"firstname" } << ":\t" << row.m_firstname << endl;
        os << "\t" << std::string{ u8"usaclicence" } << ":\t" << row.m_usaclicence << endl;
        os << "\t" << std::string{ u8"time" } << ":\t" << row.m_time << endl;
        os << "\t" << std::string{ u8"gap" } << ":\t" << row.m_gap << endl;
        os << "\t" << std::string{ u8"lap1" } << ":\t" << row.m_lap1 << endl;
        os << "\t" << std::string{ u8"lap2" } << ":\t" << row.m_lap2 << endl;
        os << "\t" << std::string{ u8"lap3" } << ":\t" << row.m_lap3 << endl;
        os << "\t" << std::string{ u8"lap4" } << ":\t" << row.m_lap4 << endl;
        os << "\t" << std::string{ u8"lap5" } << ":\t" << row.m_lap5 << endl;
        os << "\t" << std::string{ u8"lap6" } << ":\t" << row.m_lap6 << endl;
        os << "\t" << std::string{ u8"lap7" } << ":\t" << row.m_lap7 << endl;
        os << "\t" << std::string{ u8"lap8" } << ":\t" << row.m_lap8 << endl;
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
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, "--- Printing row content is disabled. To enable, use '-ON ReportRowContentOnError'. ---"});
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
                    input->Read(row.m___Lap201467329a6d6854169b37d878167ece6cd);
                    input->Read(row.m___Lap202c1be2804334941bb83e08c081c80cd3a);
                    input->Read(row.m___Lap2039fbb29adbf5f44b3b53a7322911349cf);
                    input->Read(row.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2);
                    input->Read(row.m___Lap20545817b7f9a6c46ba808054f7eec54771);
                    input->Read(row.m___Lap20653b479c388204a67a5bec19884d81956);
                    input->Read(row.m___Lap207e91cd6a6b3b54b77a6731523e915ab44);
                    input->Read(row.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0);
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
                        input->Read(row.m___Lap201467329a6d6854169b37d878167ece6cd);
                    }
                    else
                    {
                        row.m___Lap201467329a6d6854169b37d878167ece6cd.SetNull();
                    }
                    if ((___masking___[1] & 2 ) != 2)
                    {
                        input->Read(row.m___Lap202c1be2804334941bb83e08c081c80cd3a);
                    }
                    else
                    {
                        row.m___Lap202c1be2804334941bb83e08c081c80cd3a.SetNull();
                    }
                    if ((___masking___[1] & 4 ) != 4)
                    {
                        input->Read(row.m___Lap2039fbb29adbf5f44b3b53a7322911349cf);
                    }
                    else
                    {
                        row.m___Lap2039fbb29adbf5f44b3b53a7322911349cf.SetNull();
                    }
                    if ((___masking___[1] & 8 ) != 8)
                    {
                        input->Read(row.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2);
                    }
                    else
                    {
                        row.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2.SetNull();
                    }
                    if ((___masking___[1] & 16 ) != 16)
                    {
                        input->Read(row.m___Lap20545817b7f9a6c46ba808054f7eec54771);
                    }
                    else
                    {
                        row.m___Lap20545817b7f9a6c46ba808054f7eec54771.SetNull();
                    }
                    if ((___masking___[1] & 32 ) != 32)
                    {
                        input->Read(row.m___Lap20653b479c388204a67a5bec19884d81956);
                    }
                    else
                    {
                        row.m___Lap20653b479c388204a67a5bec19884d81956.SetNull();
                    }
                    if ((___masking___[1] & 64 ) != 64)
                    {
                        input->Read(row.m___Lap207e91cd6a6b3b54b77a6731523e915ab44);
                    }
                    else
                    {
                        row.m___Lap207e91cd6a6b3b54b77a6731523e915ab44.SetNull();
                    }
                    if ((___masking___[1] & 128 ) != 128)
                    {
                        input->Read(row.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0);
                    }
                    else
                    {
                        row.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0.SetNull();
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
            if (row.m___Lap201467329a6d6854169b37d878167ece6cd.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 1;
            }
            if (row.m___Lap202c1be2804334941bb83e08c081c80cd3a.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 2;
            }
            if (row.m___Lap2039fbb29adbf5f44b3b53a7322911349cf.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 4;
            }
            if (row.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 8;
            }
            if (row.m___Lap20545817b7f9a6c46ba808054f7eec54771.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 16;
            }
            if (row.m___Lap20653b479c388204a67a5bec19884d81956.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 32;
            }
            if (row.m___Lap207e91cd6a6b3b54b77a6731523e915ab44.IsNull())
            {
                hasNull = true;
                ___masking___[1] |= 64;
            }
            if (row.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0.IsNull())
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
            if (!row.m___Lap201467329a6d6854169b37d878167ece6cd.IsNull())
            {
                output->Write(row.m___Lap201467329a6d6854169b37d878167ece6cd);
            }
            if (!row.m___Lap202c1be2804334941bb83e08c081c80cd3a.IsNull())
            {
                output->Write(row.m___Lap202c1be2804334941bb83e08c081c80cd3a);
            }
            if (!row.m___Lap2039fbb29adbf5f44b3b53a7322911349cf.IsNull())
            {
                output->Write(row.m___Lap2039fbb29adbf5f44b3b53a7322911349cf);
            }
            if (!row.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2.IsNull())
            {
                output->Write(row.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2);
            }
            if (!row.m___Lap20545817b7f9a6c46ba808054f7eec54771.IsNull())
            {
                output->Write(row.m___Lap20545817b7f9a6c46ba808054f7eec54771);
            }
            if (!row.m___Lap20653b479c388204a67a5bec19884d81956.IsNull())
            {
                output->Write(row.m___Lap20653b479c388204a67a5bec19884d81956);
            }
            if (!row.m___Lap207e91cd6a6b3b54b77a6731523e915ab44.IsNull())
            {
                output->Write(row.m___Lap207e91cd6a6b3b54b77a6731523e915ab44);
            }
            if (!row.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0.IsNull())
            {
                output->Write(row.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, "--- Printing row content is disabled. To enable, use '-ON ReportRowContentOnError'. ---"});
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

#pragma region Schema Constructors
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
            m___Lap201467329a6d6854169b37d878167ece6cd(c.m___Lap201467329a6d6854169b37d878167ece6cd, alloc),
            m___Lap202c1be2804334941bb83e08c081c80cd3a(c.m___Lap202c1be2804334941bb83e08c081c80cd3a, alloc),
            m___Lap2039fbb29adbf5f44b3b53a7322911349cf(c.m___Lap2039fbb29adbf5f44b3b53a7322911349cf, alloc),
            m___Lap204f908cbd466d84b1cb9fa358ccabf25c2(c.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2, alloc),
            m___Lap20545817b7f9a6c46ba808054f7eec54771(c.m___Lap20545817b7f9a6c46ba808054f7eec54771, alloc),
            m___Lap20653b479c388204a67a5bec19884d81956(c.m___Lap20653b479c388204a67a5bec19884d81956, alloc),
            m___Lap207e91cd6a6b3b54b77a6731523e915ab44(c.m___Lap207e91cd6a6b3b54b77a6731523e915ab44, alloc),
            m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0(c.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_3_Data0::HashJoin_3_Data0()
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


    INLINE Process_4_Data0::Process_4_Data0()
    {
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
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, true, false, 1, CharFormat_uint16>, CosmosInput> * input, Extract_0_Data0 & row)
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

                    input->Read(row.m___STAGE2023991f9213f8e540c9b4de9ca3eb0a1218);
                    input->Read(row.m___BIB20230dedc904a2c24669a25dbe72f57e7ba6);
                    input->Read(row.m___FIRST20NAME1468289b9272444dbb2e8963985b3d18);
                    input->Read(row.m___LAST20NAME8604cb067fe9497aa269eae35de0bad4);
                    input->Read(row.m_TEAM);
                    input->Read(row.m_CITY);
                    input->Read(row.m_STATE);
                    input->Read(row.m_AGE);
                    input->Read(row.m_CAT);
                    input->Read(row.m_LICENSE);
                    input->Read(row.m___CXR20Points07978ead86564f198452cbf626503cb9);
                    input->Read(row.m___CCC20Points158f360fb74d4b32a374061013d90aa3);
                    input->Read(row.m___Category20Entered8b1af79217844aff8e0ffa156e1bd9a7);
                    input->Read(row.m___CCC20Points20Most20Recent20Date20Placing83026b0142b147b085c219da13697394);
                    input->Read(row.m___CCC20Points20Most20Recent20Date4d0d5742cb2d46a4999679f9307e1fa5);
                    input->Read(row.m___Time20Enteredd0b39540030e47438b6ea4d897432c4c);

                    if (!input->EndRow())
                    {
                        // Too many columns in row - skip row and read next row.
                        input->SkipLine();
                        continue;
                    }
                    return true;
                }
                catch (const TextEncodingException& /* e */)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->CurrentLineNumber() },
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
    class RowTransformPolicy<typename Extract_0_Data0, typename SV1_Extract_out0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(Extract_0_Data0 & input, SV1_Extract_out0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_stagebib = input.m___BIB20230dedc904a2c24669a25dbe72f57e7ba6;
                exceptionIndex++;
                output.m_usaclicence = input.m_LICENSE;
                exceptionIndex++;
                output.m_racestaging = input.m___STAGE2023991f9213f8e540c9b4de9ca3eb0a1218;
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_1[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_1[exceptionIndex]);
            }
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
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_0_Data0, TextExtractPolicy<Extract_0_Data0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, true, false, 1, CharFormat_uint16>, CosmosInput>> ExtractorType1_SV1_Extract;
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

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



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
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 3, CharFormat_uint16>, CosmosInput> * input, SV2_Extract_out0 & row)
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
                    input->Read(row.m___Lap201467329a6d6854169b37d878167ece6cd);
                    input->Read(row.m___Lap202c1be2804334941bb83e08c081c80cd3a);
                    input->Read(row.m___Lap2039fbb29adbf5f44b3b53a7322911349cf);
                    input->Read(row.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2);
                    input->Read(row.m___Lap20545817b7f9a6c46ba808054f7eec54771);
                    input->Read(row.m___Lap20653b479c388204a67a5bec19884d81956);
                    input->Read(row.m___Lap207e91cd6a6b3b54b77a6731523e915ab44);
                    input->Read(row.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0);

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
                catch (const TextEncodingException& /* e */)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->CurrentLineNumber() },
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
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<SV2_Extract_out0, TextExtractPolicy<SV2_Extract_out0, UID_Extract_2>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 3, CharFormat_uint16>, CosmosInput>> ExtractorType1_SV2_Extract;
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

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV2_Extract
#pragma region SV3_Combine
#if defined(COMPILE_SV3_COMBINE) || defined(COMPILE_ALL_VERTICES)
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
                (*out).m___Lap201467329a6d6854169b37d878167ece6cd = (*left).m___Lap201467329a6d6854169b37d878167ece6cd;
                (*out).m___Lap202c1be2804334941bb83e08c081c80cd3a = (*left).m___Lap202c1be2804334941bb83e08c081c80cd3a;
                (*out).m___Lap2039fbb29adbf5f44b3b53a7322911349cf = (*left).m___Lap2039fbb29adbf5f44b3b53a7322911349cf;
                (*out).m___Lap204f908cbd466d84b1cb9fa358ccabf25c2 = (*left).m___Lap204f908cbd466d84b1cb9fa358ccabf25c2;
                (*out).m___Lap20545817b7f9a6c46ba808054f7eec54771 = (*left).m___Lap20545817b7f9a6c46ba808054f7eec54771;
                (*out).m___Lap20653b479c388204a67a5bec19884d81956 = (*left).m___Lap20653b479c388204a67a5bec19884d81956;
                (*out).m___Lap207e91cd6a6b3b54b77a6731523e915ab44 = (*left).m___Lap207e91cd6a6b3b54b77a6731523e915ab44;
                (*out).m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0 = (*left).m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0;
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
            (*out).m___Lap201467329a6d6854169b37d878167ece6cd = (*left).m___Lap201467329a6d6854169b37d878167ece6cd;
            (*out).m___Lap202c1be2804334941bb83e08c081c80cd3a = (*left).m___Lap202c1be2804334941bb83e08c081c80cd3a;
            (*out).m___Lap2039fbb29adbf5f44b3b53a7322911349cf = (*left).m___Lap2039fbb29adbf5f44b3b53a7322911349cf;
            (*out).m___Lap204f908cbd466d84b1cb9fa358ccabf25c2 = (*left).m___Lap204f908cbd466d84b1cb9fa358ccabf25c2;
            (*out).m___Lap20545817b7f9a6c46ba808054f7eec54771 = (*left).m___Lap20545817b7f9a6c46ba808054f7eec54771;
            (*out).m___Lap20653b479c388204a67a5bec19884d81956 = (*left).m___Lap20653b479c388204a67a5bec19884d81956;
            (*out).m___Lap207e91cd6a6b3b54b77a6731523e915ab44 = (*left).m___Lap207e91cd6a6b3b54b77a6731523e915ab44;
            (*out).m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0 = (*left).m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0;
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
            (*out).m___Lap201467329a6d6854169b37d878167ece6cd.SetNull();
            (*out).m___Lap202c1be2804334941bb83e08c081c80cd3a.SetNull();
            (*out).m___Lap2039fbb29adbf5f44b3b53a7322911349cf.SetNull();
            (*out).m___Lap204f908cbd466d84b1cb9fa358ccabf25c2.SetNull();
            (*out).m___Lap20545817b7f9a6c46ba808054f7eec54771.SetNull();
            (*out).m___Lap20653b479c388204a67a5bec19884d81956.SetNull();
            (*out).m___Lap207e91cd6a6b3b54b77a6731523e915ab44.SetNull();
            (*out).m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0.SetNull();
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
        static const size_t s_memoryQuota{ 5863636989ULL }; // Cosmos default is 2GB

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
            output.m___Lap201467329a6d6854169b37d878167ece6cd = probe.m___Lap201467329a6d6854169b37d878167ece6cd;
            output.m___Lap202c1be2804334941bb83e08c081c80cd3a = probe.m___Lap202c1be2804334941bb83e08c081c80cd3a;
            output.m___Lap2039fbb29adbf5f44b3b53a7322911349cf = probe.m___Lap2039fbb29adbf5f44b3b53a7322911349cf;
            output.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2 = probe.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2;
            output.m___Lap20545817b7f9a6c46ba808054f7eec54771 = probe.m___Lap20545817b7f9a6c46ba808054f7eec54771;
            output.m___Lap20653b479c388204a67a5bec19884d81956 = probe.m___Lap20653b479c388204a67a5bec19884d81956;
            output.m___Lap207e91cd6a6b3b54b77a6731523e915ab44 = probe.m___Lap207e91cd6a6b3b54b77a6731523e915ab44;
            output.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0 = probe.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0;

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
            output.m___Lap201467329a6d6854169b37d878167ece6cd = probe.m___Lap201467329a6d6854169b37d878167ece6cd;
            output.m___Lap202c1be2804334941bb83e08c081c80cd3a = probe.m___Lap202c1be2804334941bb83e08c081c80cd3a;
            output.m___Lap2039fbb29adbf5f44b3b53a7322911349cf = probe.m___Lap2039fbb29adbf5f44b3b53a7322911349cf;
            output.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2 = probe.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2;
            output.m___Lap20545817b7f9a6c46ba808054f7eec54771 = probe.m___Lap20545817b7f9a6c46ba808054f7eec54771;
            output.m___Lap20653b479c388204a67a5bec19884d81956 = probe.m___Lap20653b479c388204a67a5bec19884d81956;
            output.m___Lap207e91cd6a6b3b54b77a6731523e915ab44 = probe.m___Lap207e91cd6a6b3b54b77a6731523e915ab44;
            output.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0 = probe.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0;

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

    static const char * StringTable_Process_4 [] =
    {
        "Category",
        "Place",
        "racestaging",
        "Bib",
        "stagebib",
        "Last",
        "First",
        "usaclicence",
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
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename HashJoin_3_Data0, typename Process_4_Data0, UID_Process_4>
    {
    public:

        static bool FilterTransformRow(HashJoin_3_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_Category = input.m_Category;
                exceptionIndex++;
                output.m_raceplacing = input.m_Place;
                exceptionIndex++;
                output.m_racestaging = input.m_racestaging;
                exceptionIndex++;
                output.m_bibid = input.m_Bib;
                exceptionIndex++;
                output.m_stagebib = input.m_stagebib;
                exceptionIndex++;
                output.m_lastname = input.m_Last;
                exceptionIndex++;
                output.m_firstname = input.m_First;
                exceptionIndex++;
                output.m_usaclicence = input.m_usaclicence;
                exceptionIndex++;
                output.m_time = input.m_Time;
                exceptionIndex++;
                output.m_gap = input.m_Gap;
                exceptionIndex++;
                output.m_lap1 = input.m___Lap201467329a6d6854169b37d878167ece6cd;
                exceptionIndex++;
                output.m_lap2 = input.m___Lap202c1be2804334941bb83e08c081c80cd3a;
                exceptionIndex++;
                output.m_lap3 = input.m___Lap2039fbb29adbf5f44b3b53a7322911349cf;
                exceptionIndex++;
                output.m_lap4 = input.m___Lap204f908cbd466d84b1cb9fa358ccabf25c2;
                exceptionIndex++;
                output.m_lap5 = input.m___Lap20545817b7f9a6c46ba808054f7eec54771;
                exceptionIndex++;
                output.m_lap6 = input.m___Lap20653b479c388204a67a5bec19884d81956;
                exceptionIndex++;
                output.m_lap7 = input.m___Lap207e91cd6a6b3b54b77a6731523e915ab44;
                exceptionIndex++;
                output.m_lap8 = input.m___Lap208e30ff99f93a24bbf90a0a866d0f8a4d0;
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_4[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_4[exceptionIndex]);
            }
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

    template<> 
    class TextOutputPolicy<Process_4_Data0, UID_SV3_Combine_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_4_Data0 & row)
        {
            if (!row.m_Category.IsNull())
            {
                output->Write<FString,true>(row.m_Category);
            }
            output->WriteDelimiter();
            if (!row.m_raceplacing.IsNull())
            {
                output->Write<FString,true>(row.m_raceplacing);
            }
            output->WriteDelimiter();
            if (!row.m_racestaging.IsNull())
            {
                output->Write<FString,true>(row.m_racestaging);
            }
            output->WriteDelimiter();
            if (!row.m_bibid.IsNull())
            {
                output->Write<FString,true>(row.m_bibid);
            }
            output->WriteDelimiter();
            if (!row.m_stagebib.IsNull())
            {
                output->Write<FString,true>(row.m_stagebib);
            }
            output->WriteDelimiter();
            if (!row.m_lastname.IsNull())
            {
                output->Write<FString,true>(row.m_lastname);
            }
            output->WriteDelimiter();
            if (!row.m_firstname.IsNull())
            {
                output->Write<FString,true>(row.m_firstname);
            }
            output->WriteDelimiter();
            if (!row.m_usaclicence.IsNull())
            {
                output->Write<FString,true>(row.m_usaclicence);
            }
            output->WriteDelimiter();
            if (!row.m_time.IsNull())
            {
                output->Write<FString,true>(row.m_time);
            }
            output->WriteDelimiter();
            if (!row.m_gap.IsNull())
            {
                output->Write<FString,true>(row.m_gap);
            }
            output->WriteDelimiter();
            if (!row.m_lap1.IsNull())
            {
                output->Write<FString,true>(row.m_lap1);
            }
            output->WriteDelimiter();
            if (!row.m_lap2.IsNull())
            {
                output->Write<FString,true>(row.m_lap2);
            }
            output->WriteDelimiter();
            if (!row.m_lap3.IsNull())
            {
                output->Write<FString,true>(row.m_lap3);
            }
            output->WriteDelimiter();
            if (!row.m_lap4.IsNull())
            {
                output->Write<FString,true>(row.m_lap4);
            }
            output->WriteDelimiter();
            if (!row.m_lap5.IsNull())
            {
                output->Write<FString,true>(row.m_lap5);
            }
            output->WriteDelimiter();
            if (!row.m_lap6.IsNull())
            {
                output->Write<FString,true>(row.m_lap6);
            }
            output->WriteDelimiter();
            if (!row.m_lap7.IsNull())
            {
                output->Write<FString,true>(row.m_lap7);
            }
            output->WriteDelimiter();
            if (!row.m_lap8.IsNull())
            {
                output->Write<FString,true>(row.m_lap8);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("Category", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("raceplacing", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("racestaging", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("bibid", 5));
            output->WriteDelimiter();
            output->Write<string,true>(FString("stagebib", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lastname", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("firstname", 9));
            output->WriteDelimiter();
            output->Write<string,true>(FString("usaclicence", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("time", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("gap", 3));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap1", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap2", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap3", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap4", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap5", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap6", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap7", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap8", 4));
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



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
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
        typedef Extractor<SV2_Extract_out0, BinaryExtractPolicy<SV2_Extract_out0>, BinaryInputStream> ExtractorType1_SV3_Combine;        
        unique_ptr<ExtractorType1_SV3_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV3_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV2_Extract_out0);
        ExtractorType1_SV3_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType2_SV3_Combine;        
        unique_ptr<ExtractorType2_SV3_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV3_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType2_SV3_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<ExtractorType1_SV3_Combine, SV2_Extract_out0, ExtractorType2_SV3_Combine, SV1_Extract_out0, HashJoin_3_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_3> CombinerType_HashJoin_3;
        unique_ptr<CombinerType_HashJoin_3> combiner_HashJoin_3_ptr;
        combiner_HashJoin_3_ptr.reset(new CombinerType_HashJoin_3(extractor_0, extractor_1, UID_HashJoin_3, 1));

        CombinerType_HashJoin_3 * combiner_HashJoin_3 = combiner_HashJoin_3_ptr.get();
        ULONG combiner_HashJoin_3_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<CombinerType_HashJoin_3, HashJoin_3_Data0, Process_4_Data0, UID_Process_4> FilterTransformerType_Process_4;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_4> filterTransformer_Process_4_ptr (new FilterTransformerType_Process_4(combiner_HashJoin_3, UID_Process_4));
        FilterTransformerType_Process_4 * filterTransformer_Process_4 = filterTransformer_Process_4_ptr.get();
        ULONG filterTransformer_Process_4_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_4, Process_4_Data0, TextOutputPolicy<Process_4_Data0, UID_SV3_Combine_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType3_SV3_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType3_SV3_Combine> outputer_SV3_Combine_out0_ptr(new OutputerType3_SV3_Combine(filterTransformer_Process_4, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV3_Combine_out0));
        OutputerType3_SV3_Combine * outputer_SV3_Combine_out0 = outputer_SV3_Combine_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV3_Combine_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_4_Data0 row;
            outputer_SV3_Combine_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV3_Combine_out0->Close();
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
        outputer_SV3_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
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
#pragma endregion SV3_Combine
// Empty footer
