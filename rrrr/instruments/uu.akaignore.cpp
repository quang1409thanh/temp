#ifndef AKA_INCLUDE_MOCK_FILE
#define AKA_INCLUDE_MOCK_FILE

#endif

/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC__HOME_THANHYK14_DESKTOP_AKA414_SRRC_UU_CPP
#define AKA_SRC__HOME_THANHYK14_DESKTOP_AKA414_SRRC_UU_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



typedef struct A
{
    int list_id;
} A_t;
class UtcTe
{
};
class BtaTest
{
public:
public:
    BtaTest(UtcTe &StatusRegisterInst);

    /** Instrumented function setCurrentListId(A_t) */
void setCurrentListId(A_t current_list_id) /* << Aka begin of function void setCurrentListId(A_t current_list_id) >> */
{AKA_mark("Calling: ./srrc/uu.cpp/BtaTest/setCurrentListId(A_t)");AKA_fCall++;
	/** Include stub source code */
	#include "../stubs/uu.cpp.setCurrentListId.134.stub"
 AKA_mark("lis===13###sois===174###eois===200###lif===0###soif===45###eoif===71###ins===true###function===./srrc/uu.cpp/BtaTest/setCurrentListId(A_t)");list_id = current_list_id; }
    /** Instrumented function getCurrentListId() */
A_t *getCurrentListId(void) /* << Aka begin of function A_t *getCurrentListId(void) >> */
{AKA_mark("Calling: ./srrc/uu.cpp/BtaTest/getCurrentListId()");AKA_fCall++;
	/** Include stub source code */
	#include "../stubs/uu.cpp.getCurrentListId.211.stub"
 AKA_mark("lis===14###sois===237###eois===253###lif===0###soif===30###eoif===46###ins===true###function===./srrc/uu.cpp/BtaTest/getCurrentListId()");return &list_id; }

public:
    A_t list_id;
};
/** Instrumented function BtaTest::BtaTest(UtcTe&) */
BtaTest::BtaTest(UtcTe &StatusRegisterInst)
/* << Aka begin of function  BtaTest::BtaTest(UtcTe &StatusRegisterInst) >> */
{AKA_mark("Calling: ./srrc/uu.cpp/BtaTest::BtaTest(UtcTe&)");AKA_fCall++;
    AKA_mark("lis===21###sois===336###eois===356###lif===2###soif===50###eoif===70###ins===true###function===./srrc/uu.cpp/BtaTest::BtaTest(UtcTe&)");list_id.list_id = 0;
}
#endif

