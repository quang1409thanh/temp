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

    void setCurrentListId(A_t current_list_id) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
	/** Include stub source code */
	#include "../stubs/uu.cpp.setCurrentListId.134.stub"
 list_id = current_list_id; }
    A_t *getCurrentListId(void) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
	/** Include stub source code */
	#include "../stubs/uu.cpp.getCurrentListId.211.stub"
 return &list_id; }

public:
    A_t list_id;
};
BtaTest::BtaTest(UtcTe &StatusRegisterInst)
{
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    list_id.list_id = 0;
}
#endif

