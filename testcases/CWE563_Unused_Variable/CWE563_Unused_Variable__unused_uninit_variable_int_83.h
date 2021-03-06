/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE563_Unused_Variable__unused_uninit_variable_int_83.h
Label Definition File: CWE563_Unused_Variable__unused_uninit_variable.label.xml
Template File: source-sinks-83.tmpl.h
*/
/*
 * @description
 * CWE: 563 Unused Variable
 * BadSource:  Initialize data
 * Sinks:
 *    GoodSink: Initialize, then use data
 *    BadSink : Do nothing
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE563_Unused_Variable__unused_uninit_variable_int_83
{

#ifndef OMITBAD

class CWE563_Unused_Variable__unused_uninit_variable_int_83_bad
{
public:
    CWE563_Unused_Variable__unused_uninit_variable_int_83_bad(int dataCopy);
    ~CWE563_Unused_Variable__unused_uninit_variable_int_83_bad();

private:
    int data;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE563_Unused_Variable__unused_uninit_variable_int_83_goodB2G
{
public:
    CWE563_Unused_Variable__unused_uninit_variable_int_83_goodB2G(int dataCopy);
    ~CWE563_Unused_Variable__unused_uninit_variable_int_83_goodB2G();

private:
    int data;
};

#endif /* OMITGOOD */

}
