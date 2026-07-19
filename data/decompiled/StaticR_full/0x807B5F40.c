/* Function at 0x807B5F40, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807B5F40(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B5F4C
    r31 = r3;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x807B5F58
    /* lis r3, 0 */ // 0x807B5F5C
    /* mulli r0, r0, 0xf0 */ // 0x807B5F60
    r3 = *(0 + r3); // lwz @ 0x807B5F64
    r3 = r3 + r0; // 0x807B5F68
    r0 = *(0x38 + r3); // lwz @ 0x807B5F6C
    if (!=) goto 0x0x807b5f90;
    r3 = r31;
    FUN_8061DEE0(r3); // bl 0x8061DEE0
    if (==) goto 0x0x807b5f90;
    /* li r3, 1 */ // 0x807B5F88
    /* b 0x807b5f94 */ // 0x807B5F8C
    /* li r3, 0 */ // 0x807B5F90
    r0 = *(0x14 + r1); // lwz @ 0x807B5F94
    r31 = *(0xc + r1); // lwz @ 0x807B5F98
    return;
}