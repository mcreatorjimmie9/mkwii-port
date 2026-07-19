/* Function at 0x806DA97C, size=448 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806DA97C(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806DA984
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x806DA994
    *(0xd4 + r1) = r29; // stw @ 0x806DA998
    r3 = *(0 + r4); // lwz @ 0x806DA99C
    r3 = *(0 + r3); // lwz @ 0x806DA9A0
    r29 = *(0x14c + r3); // lwz @ 0x806DA9A4
    if (!=) goto 0x0x806da9b8;
    /* li r29, 0 */ // 0x806DA9B0
    /* b 0x806daa0c */ // 0x806DA9B4
    /* lis r30, 0 */ // 0x806DA9B8
    r30 = r30 + 0; // 0x806DA9BC
    if (==) goto 0x0x806daa08;
    r12 = *(0 + r29); // lwz @ 0x806DA9C4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DA9CC
    /* mtctr r12 */ // 0x806DA9D0
    /* bctrl  */ // 0x806DA9D4
    /* b 0x806da9f0 */ // 0x806DA9D8
    if (!=) goto 0x0x806da9ec;
    /* li r0, 1 */ // 0x806DA9E4
    /* b 0x806da9fc */ // 0x806DA9E8
    r3 = *(0 + r3); // lwz @ 0x806DA9EC
    if (!=) goto 0x0x806da9dc;
    /* li r0, 0 */ // 0x806DA9F8
    if (==) goto 0x0x806daa08;
    /* b 0x806daa0c */ // 0x806DAA04
    /* li r29, 0 */ // 0x806DAA08
    r12 = *(0 + r29); // lwz @ 0x806DAA0C
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806DAA14
    /* mtctr r12 */ // 0x806DAA18
    /* bctrl  */ // 0x806DAA1C
    /* lis r3, 0 */ // 0x806DAA20
    r3 = *(0 + r3); // lwz @ 0x806DAA24
    FUN_8070319C(r3); // bl 0x8070319C
    r30 = r3;
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    r0 = *(0x2870 + r31); // lwz @ 0x806DAA38
    *(0x50 + r1) = r0; // stw @ 0x806DAA40
    if (>=) goto 0x0x806daa6c;
    *(8 + r1) = r30; // stw @ 0x806DAA48
    r3 = r29;
    /* li r4, 0x151c */ // 0x806DAA54
    r12 = *(0 + r29); // lwz @ 0x806DAA58
    r12 = *(0x68 + r12); // lwz @ 0x806DAA5C
    /* mtctr r12 */ // 0x806DAA60
    /* bctrl  */ // 0x806DAA64
    /* b 0x806daa88 */ // 0x806DAA68
    r12 = *(0 + r29); // lwz @ 0x806DAA6C
    r3 = r29;
    /* li r4, 0x151d */ // 0x806DAA78
    r12 = *(0x68 + r12); // lwz @ 0x806DAA7C
    /* mtctr r12 */ // 0x806DAA80
    /* bctrl  */ // 0x806DAA84
    r12 = *(0 + r31); // lwz @ 0x806DAA88
    r3 = r31;
    /* li r4, 0x51 */ // 0x806DAA90
    /* li r5, 0 */ // 0x806DAA94
    r12 = *(0x24 + r12); // lwz @ 0x806DAA98
    /* mtctr r12 */ // 0x806DAA9C
    /* bctrl  */ // 0x806DAAA0
    /* li r0, 0x11 */ // 0x806DAAA4
    *(0x2874 + r31) = r0; // stw @ 0x806DAAA8
    /* lis r3, 0 */ // 0x806DAAAC
    r5 = *(0 + r3); // lwz @ 0x806DAAB0
    r0 = *(0x36 + r5); // lha @ 0x806DAAB4
    if (<) goto 0x0x806daadc;
    /* lis r3, 1 */ // 0x806DAAC0
    /* clrlwi r4, r0, 0x18 */ // 0x806DAAC4
    r0 = r3 + -0x6c10; // 0x806DAAC8
    r0 = r0 * r4; // 0x806DAACC
    r3 = r5 + r0; // 0x806DAAD0
    r3 = r3 + 0x38; // 0x806DAAD4
    /* b 0x806daae0 */ // 0x806DAAD8
    /* li r3, 0 */ // 0x806DAADC
    /* addis r5, r3, 1 */ // 0x806DAAE0
    /* lis r3, 2 */ // 0x806DAAE4
    r4 = *(-0x6d5c + r5); // lwz @ 0x806DAAE8
    r0 = r3 + -0x7961; // 0x806DAAEC
    if (>=) goto 0x0x806dab00;
    r0 = r4 + 1; // 0x806DAAF8
    *(-0x6d5c + r5) = r0; // stw @ 0x806DAAFC
    /* lis r3, 0 */ // 0x806DAB00
    r3 = *(0 + r3); // lwz @ 0x806DAB04
    r3 = *(0x90 + r3); // lwz @ 0x806DAB08
    FUN_806845FC(r3); // bl 0x806845FC
    r3 = r31;
    /* li r4, 0x50 */ // 0x806DAB14
    /* li r5, -1 */ // 0x806DAB18
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    r0 = *(0xe4 + r1); // lwz @ 0x806DAB20
    r31 = *(0xdc + r1); // lwz @ 0x806DAB24
    r30 = *(0xd8 + r1); // lwz @ 0x806DAB28
    r29 = *(0xd4 + r1); // lwz @ 0x806DAB2C
    return;
}