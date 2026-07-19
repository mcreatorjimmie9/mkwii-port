/* Function at 0x808AADB0, size=96 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

void FUN_808AADB0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808AADB8
    *(0x14 + r1) = r0; // stw @ 0x808AADBC
    r3 = *(0 + r3); // lwz @ 0x808AADC0
    if (==) goto 0x0x808aadf0;
    if (==) goto 0x0x808aade4;
    r12 = *(0 + r3); // lwz @ 0x808AADD0
    /* li r4, 1 */ // 0x808AADD4
    r12 = *(8 + r12); // lwz @ 0x808AADD8
    /* mtctr r12 */ // 0x808AADDC
    /* bctrl  */ // 0x808AADE0
    /* lis r3, 0 */ // 0x808AADE4
    /* li r0, 0 */ // 0x808AADE8
    *(0 + r3) = r0; // stw @ 0x808AADEC
    FUN_8089C7A4(r3); // bl 0x8089C7A4
    FUN_808F94B4(r3); // bl 0x808F94B4
    FUN_809027B4(r3); // bl 0x809027B4
    FUN_8091BAB8(); // bl 0x8091BAB8
    r0 = *(0x14 + r1); // lwz @ 0x808AAE00
    return;
}