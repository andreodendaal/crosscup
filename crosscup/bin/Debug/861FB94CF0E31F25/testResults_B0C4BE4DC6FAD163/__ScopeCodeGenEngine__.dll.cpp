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
        FString m_Category;
        FString m_Place;
        FString m_Bib;
        FString m_Last;
        FString m_First;
        FString m_Time;
        FString m_Gap;
        FString m___Lap201300e1e13d92f4d3cac27e911eca01967;
        FString m___Lap2023666aade9e0049c789a9df4045d939d7;
        FString m___Lap203fb846c6823fd4672ad07426643e88865;
        FString m___Lap204690d5e9448c34f8a8a5e21b2ff6fed91;
        FString m___Lap205c53e0cd13b8441d3b7d663622f8d298c;
        FString m___Lap206fc1b2cff68c74a858fc8ee1235e7184a;
        FString m___Lap207d1f3227fa9264a9988d7d2c702266a42;
        FString m___Lap20826fbb39072974e62b537cc61b2b33393;
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
        os << "\t" << std::string{ u8"Category" } << ":\t" << row.m_Category << endl;
        os << "\t" << std::string{ u8"Place" } << ":\t" << row.m_Place << endl;
        os << "\t" << std::string{ u8"Bib" } << ":\t" << row.m_Bib << endl;
        os << "\t" << std::string{ u8"Last" } << ":\t" << row.m_Last << endl;
        os << "\t" << std::string{ u8"First" } << ":\t" << row.m_First << endl;
        os << "\t" << std::string{ u8"Time" } << ":\t" << row.m_Time << endl;
        os << "\t" << std::string{ u8"Gap" } << ":\t" << row.m_Gap << endl;
        os << "\t" << std::string{ u8"Lap 1" } << ":\t" << row.m___Lap201300e1e13d92f4d3cac27e911eca01967 << endl;
        os << "\t" << std::string{ u8"Lap 2" } << ":\t" << row.m___Lap2023666aade9e0049c789a9df4045d939d7 << endl;
        os << "\t" << std::string{ u8"Lap 3" } << ":\t" << row.m___Lap203fb846c6823fd4672ad07426643e88865 << endl;
        os << "\t" << std::string{ u8"Lap 4" } << ":\t" << row.m___Lap204690d5e9448c34f8a8a5e21b2ff6fed91 << endl;
        os << "\t" << std::string{ u8"Lap 5" } << ":\t" << row.m___Lap205c53e0cd13b8441d3b7d663622f8d298c << endl;
        os << "\t" << std::string{ u8"Lap 6" } << ":\t" << row.m___Lap206fc1b2cff68c74a858fc8ee1235e7184a << endl;
        os << "\t" << std::string{ u8"Lap 7" } << ":\t" << row.m___Lap207d1f3227fa9264a9988d7d2c702266a42 << endl;
        os << "\t" << std::string{ u8"Lap 8" } << ":\t" << row.m___Lap20826fbb39072974e62b537cc61b2b33393 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_1_Data0
    {
    public:
        FString m_Category;
        FString m_raceplacing;
        FString m_bibid;
        FString m_lastname;
        FString m_firstname;
        FString m_time;
        FString m_gap;
        FString m_lap1;
        FString m_lap2;
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
        os << "\t" << std::string{ u8"Category" } << ":\t" << row.m_Category << endl;
        os << "\t" << std::string{ u8"raceplacing" } << ":\t" << row.m_raceplacing << endl;
        os << "\t" << std::string{ u8"bibid" } << ":\t" << row.m_bibid << endl;
        os << "\t" << std::string{ u8"lastname" } << ":\t" << row.m_lastname << endl;
        os << "\t" << std::string{ u8"firstname" } << ":\t" << row.m_firstname << endl;
        os << "\t" << std::string{ u8"time" } << ":\t" << row.m_time << endl;
        os << "\t" << std::string{ u8"gap" } << ":\t" << row.m_gap << endl;
        os << "\t" << std::string{ u8"lap1" } << ":\t" << row.m_lap1 << endl;
        os << "\t" << std::string{ u8"lap2" } << ":\t" << row.m_lap2 << endl;
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
            m_Category(c.m_Category, alloc),
            m_raceplacing(c.m_raceplacing, alloc),
            m_bibid(c.m_bibid, alloc),
            m_lastname(c.m_lastname, alloc),
            m_firstname(c.m_firstname, alloc),
            m_time(c.m_time, alloc),
            m_gap(c.m_gap, alloc),
            m_lap1(c.m_lap1, alloc),
            m_lap2(c.m_lap2, alloc)
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
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 3, CharFormat_uint16>, CosmosInput> * input, Extract_0_Data0 & row)
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
                    input->Read(row.m___Lap201300e1e13d92f4d3cac27e911eca01967);
                    input->Read(row.m___Lap2023666aade9e0049c789a9df4045d939d7);
                    input->Read(row.m___Lap203fb846c6823fd4672ad07426643e88865);
                    input->Read(row.m___Lap204690d5e9448c34f8a8a5e21b2ff6fed91);
                    input->Read(row.m___Lap205c53e0cd13b8441d3b7d663622f8d298c);
                    input->Read(row.m___Lap206fc1b2cff68c74a858fc8ee1235e7184a);
                    input->Read(row.m___Lap207d1f3227fa9264a9988d7d2c702266a42);
                    input->Read(row.m___Lap20826fbb39072974e62b537cc61b2b33393);

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

    static const char * StringTable_Process_1 [] =
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
                output.m_Category = input.m_Category;
                exceptionIndex++;
                output.m_raceplacing = input.m_Place;
                exceptionIndex++;
                output.m_bibid = input.m_Bib;
                exceptionIndex++;
                output.m_lastname = input.m_Last;
                exceptionIndex++;
                output.m_firstname = input.m_First;
                exceptionIndex++;
                output.m_time = input.m_Time;
                exceptionIndex++;
                output.m_gap = input.m_Gap;
                exceptionIndex++;
                output.m_lap1 = input.m___Lap201300e1e13d92f4d3cac27e911eca01967;
                exceptionIndex++;
                output.m_lap2 = input.m___Lap2023666aade9e0049c789a9df4045d939d7;
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
            if (!row.m_bibid.IsNull())
            {
                output->Write<FString,true>(row.m_bibid);
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
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("Category", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("raceplacing", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("bibid", 5));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lastname", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("firstname", 9));
            output->WriteDelimiter();
            output->Write<string,true>(FString("time", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("gap", 3));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap1", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("lap2", 4));
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
        typedef Extractor<Extract_0_Data0, TextExtractPolicy<Extract_0_Data0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 3, CharFormat_uint16>, CosmosInput>> ExtractorType1_SV1_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, false, 3, CharFormat_uint16), UID_Extract_0));
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
