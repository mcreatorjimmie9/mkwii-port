/* Function at 0x806E2EF0, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806E2EF0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806E2EF8
    r31 = r3;
    /* li r3, 0 */ // 0x806E2F08
    *(0x18 + r1) = r30; // stw @ 0x806E2F0C
    *(0x14 + r1) = r29; // stw @ 0x806E2F10
    r4 = *(0 + r4); // lwz @ 0x806E2F14
    r0 = *(0xb70 + r4); // lwz @ 0x806E2F18
    if (<) goto 0x0x806e2f30;
    if (>) goto 0x0x806e2f30;
    /* li r3, 1 */ // 0x806E2F2C
    if (==) goto 0x0x806e3324;
    /* lis r29, 0 */ // 0x806E2F38
    r3 = *(0 + r29); // lwz @ 0x806E2F3C
    FUN_806E6B58(r3); // bl 0x806E6B58
    /* li r30, 0 */ // 0x806E2F44
    *(4 + r31) = r30; // stw @ 0x806E2F48
    r3 = r31 + 0x14; // 0x806E2F4C
    /* li r4, 0 */ // 0x806E2F50
    *(8 + r31) = r30; // stw @ 0x806E2F54
    /* li r5, 0x80 */ // 0x806E2F58
    *(0xc + r31) = r30; // stw @ 0x806E2F5C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r3 = r31 + 0x94; // 0x806E2F64
    /* li r4, 0 */ // 0x806E2F68
    /* li r5, 0xf8 */ // 0x806E2F6C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    *(0x194 + r31) = r30; // stw @ 0x806E2F74
    *(0x190 + r31) = r30; // stw @ 0x806E2F78
    *(0x198 + r31) = r30; // stw @ 0x806E2F7C
}