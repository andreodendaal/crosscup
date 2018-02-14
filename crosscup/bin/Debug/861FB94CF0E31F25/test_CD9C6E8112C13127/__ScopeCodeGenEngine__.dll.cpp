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
UID_Process_1_Data0 = 4,
UID_SV1_Extract_out0 = 5,
UID_ParallelUnionAll_Process_1
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
        FString m___STAGE2023a7943dc6674b484aaad216cfde4db3c2;
        FString m___BIB202393562c4476fd42a4bb1bb2c6369c0efa;
        FString m___FIRST20NAME99bc1d594e1445c88510c08d94520e50;
        FString m___LAST20NAME3b466e3fb1864aba8b051d768628f9b7;
        FString m_TEAM;
        FString m_CITY;
        FString m_STATE;
        FString m_AGE;
        FString m_CAT;
        FString m_LICENSE;
        FString m___CXR20Points577883d77c224948a51e21afae13ccb6;
        FString m___CCC20Points2fc045e6609a4cc8bcfbe7d84584d170;
        FString m___Category20Enteredcc7fbd5e5c9f42f1ae964617bd929b3f;
        FString m___CCC20Points20Most20Recent20Date20Placing3c24c33d4b83476ab651a727776b827e;
        FString m___CCC20Points20Most20Recent20Dateb8d13efc5f3c4758b632d80317c165ce;
        FString m___Time20Enteredb8d10c5a6bec469ea62840bd9fbb6060;
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
        os << "\t" << std::string{ u8"STAGE #" } << ":\t" << row.m___STAGE2023a7943dc6674b484aaad216cfde4db3c2 << endl;
        os << "\t" << std::string{ u8"BIB #" } << ":\t" << row.m___BIB202393562c4476fd42a4bb1bb2c6369c0efa << endl;
        os << "\t" << std::string{ u8"FIRST NAME" } << ":\t" << row.m___FIRST20NAME99bc1d594e1445c88510c08d94520e50 << endl;
        os << "\t" << std::string{ u8"LAST NAME" } << ":\t" << row.m___LAST20NAME3b466e3fb1864aba8b051d768628f9b7 << endl;
        os << "\t" << std::string{ u8"TEAM" } << ":\t" << row.m_TEAM << endl;
        os << "\t" << std::string{ u8"CITY" } << ":\t" << row.m_CITY << endl;
        os << "\t" << std::string{ u8"STATE" } << ":\t" << row.m_STATE << endl;
        os << "\t" << std::string{ u8"AGE" } << ":\t" << row.m_AGE << endl;
        os << "\t" << std::string{ u8"CAT" } << ":\t" << row.m_CAT << endl;
        os << "\t" << std::string{ u8"LICENSE" } << ":\t" << row.m_LICENSE << endl;
        os << "\t" << std::string{ u8"CXR Points" } << ":\t" << row.m___CXR20Points577883d77c224948a51e21afae13ccb6 << endl;
        os << "\t" << std::string{ u8"CCC Points" } << ":\t" << row.m___CCC20Points2fc045e6609a4cc8bcfbe7d84584d170 << endl;
        os << "\t" << std::string{ u8"Category Entered" } << ":\t" << row.m___Category20Enteredcc7fbd5e5c9f42f1ae964617bd929b3f << endl;
        os << "\t" << std::string{ u8"CCC Points Most Recent Date Placing" } << ":\t" << row.m___CCC20Points20Most20Recent20Date20Placing3c24c33d4b83476ab651a727776b827e << endl;
        os << "\t" << std::string{ u8"CCC Points Most Recent Date" } << ":\t" << row.m___CCC20Points20Most20Recent20Dateb8d13efc5f3c4758b632d80317c165ce << endl;
        os << "\t" << std::string{ u8"Time Entered" } << ":\t" << row.m___Time20Enteredb8d10c5a6bec469ea62840bd9fbb6060 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_1_Data0
    {
    public:
        FString m_racestaging;
        FString m_lastname;
        FString m_usaclicence;
        FString m_bibnumber;
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
        os << "\t" << std::string{ u8"racestaging" } << ":\t" << row.m_racestaging << endl;
        os << "\t" << std::string{ u8"lastname" } << ":\t" << row.m_lastname << endl;
        os << "\t" << std::string{ u8"usaclicence" } << ":\t" << row.m_usaclicence << endl;
        os << "\t" << std::string{ u8"bibnumber" } << ":\t" << row.m_bibnumber << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


#if defined(COMPILE_MANAGED)

#endif // defined(COMPILE_MANAGED)


//}

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


    INLINE Process_1_Data0::Process_1_Data0()
    {
    }
    INLINE Process_1_Data0::Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc) :
            m_racestaging(c.m_racestaging, alloc),
            m_lastname(c.m_lastname, alloc),
            m_usaclicence(c.m_usaclicence, alloc),
            m_bibnumber(c.m_bibnumber, alloc)
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

                    input->Read(row.m___STAGE2023a7943dc6674b484aaad216cfde4db3c2);
                    input->Read(row.m___BIB202393562c4476fd42a4bb1bb2c6369c0efa);
                    input->Read(row.m___FIRST20NAME99bc1d594e1445c88510c08d94520e50);
                    input->Read(row.m___LAST20NAME3b466e3fb1864aba8b051d768628f9b7);
                    input->Read(row.m_TEAM);
                    input->Read(row.m_CITY);
                    input->Read(row.m_STATE);
                    input->Read(row.m_AGE);
                    input->Read(row.m_CAT);
                    input->Read(row.m_LICENSE);
                    input->Read(row.m___CXR20Points577883d77c224948a51e21afae13ccb6);
                    input->Read(row.m___CCC20Points2fc045e6609a4cc8bcfbe7d84584d170);
                    input->Read(row.m___Category20Enteredcc7fbd5e5c9f42f1ae964617bd929b3f);
                    input->Read(row.m___CCC20Points20Most20Recent20Date20Placing3c24c33d4b83476ab651a727776b827e);
                    input->Read(row.m___CCC20Points20Most20Recent20Dateb8d13efc5f3c4758b632d80317c165ce);
                    input->Read(row.m___Time20Enteredb8d10c5a6bec469ea62840bd9fbb6060);

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
        "STAGE #",
        "LAST NAME",
        "LICENSE",
        "BIB #",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename Extract_0_Data0, typename Process_1_Data0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(Extract_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_racestaging = input.m___STAGE2023a7943dc6674b484aaad216cfde4db3c2;
                exceptionIndex++;
                output.m_lastname = input.m___LAST20NAME3b466e3fb1864aba8b051d768628f9b7;
                exceptionIndex++;
                output.m_usaclicence = input.m_LICENSE;
                exceptionIndex++;
                output.m_bibnumber = input.m___BIB202393562c4476fd42a4bb1bb2c6369c0efa;
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

    template<> 
    class TextOutputPolicy<Process_1_Data0, UID_SV1_Extract_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_1_Data0 & row)
        {
            if (!row.m_racestaging.IsNull())
            {
                output->Write<FString,true>(row.m_racestaging);
            }
            output->WriteDelimiter();
            if (!row.m_lastname.IsNull())
            {
                output->Write<FString,true>(row.m_lastname);
            }
            output->WriteDelimiter();
            if (!row.m_usaclicence.IsNull())
            {
                output->Write<FString,true>(row.m_usaclicence);
            }
            output->WriteDelimiter();
            if (!row.m_bibnumber.IsNull())
            {
                output->Write<FString,true>(row.m_bibnumber);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("racestaging", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lastname", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("usaclicence", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("bibnumber", 9));
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
        typedef FilterTransformer<ExtractorType1_SV1_Extract, Extract_0_Data0, Process_1_Data0, UID_Process_1> FilterTransformerType_Process_1;
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
        typedef ParallelUnionAll<FilterTransformerType_Process_1, Process_1_Data0, IsNativeOnlyVertex> UnionAllType_Process_1_SV1_Extract_out0_connector;
        unique_ptr<UnionAllType_Process_1_SV1_Extract_out0_connector> unionall_Process_1_SV1_Extract_out0_connector_ptr(new UnionAllType_Process_1_SV1_Extract_out0_connector(filterTransformer_Process_1,filterTransformer_Process_1_count,false,UID_ParallelUnionAll_Process_1));
        UnionAllType_Process_1_SV1_Extract_out0_connector * unionall_Process_1_SV1_Extract_out0_connector = unionall_Process_1_SV1_Extract_out0_connector_ptr.get();
        ULONG unionall_Process_1_SV1_Extract_out0_connector_count = 1;
        // Define outputer type
        typedef Outputer<UnionAllType_Process_1_SV1_Extract_out0_connector, Process_1_Data0, TextOutputPolicy<Process_1_Data0, UID_SV1_Extract_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(unionall_Process_1_SV1_Extract_out0_connector, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_1_Data0 row;
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
// Empty footer
