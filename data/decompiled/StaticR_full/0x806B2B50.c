/* Function at 0x806B2B50, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806B2B50(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, -1 */ // 0x806B2B58
    /* li r6, 0 */ // 0x806B2B5C
    /* li r0, 0 */ // 0x806B2B64
    *(0x1c + r1) = r31; // stw @ 0x806B2B68
    *(0x18 + r1) = r30; // stw @ 0x806B2B6C
    *(0x14 + r1) = r29; // stw @ 0x806B2B70
    r29 = r3;
    *(0x270 + r3) = r4; // stw @ 0x806B2B78
    r4 = *(0x8b0 + r3); // lwz @ 0x806B2B7C
    *(0x8b4 + r3) = r0; // stb @ 0x806B2B80
    r5 = r4;
    r12 = *(0x4c + r3); // lwzu @ 0x806B2B88
    r12 = *(0x1c + r12); // lwz @ 0x806B2B8C
    /* mtctr r12 */ // 0x806B2B90
    /* bctrl  */ // 0x806B2B94
    /* li r30, 0 */ // 0x806B2B98
    /* li r31, 1 */ // 0x806B2B9C
    r3 = *(0x8b0 + r29); // lwz @ 0x806B2BA0
    r0 = r31 << r30; // slw
    /* and. r0, r3, r0 */ // 0x806B2BA8
    if (==) goto 0x0x806b2bc8;
    r0 = *(0x27c + r29); // lwz @ 0x806B2BB0
    r4 = r30;
    /* mulli r0, r0, 0x254 */ // 0x806B2BB8
    r3 = r29 + r0; // 0x806B2BBC
    r3 = r3 + 0x294; // 0x806B2BC0
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r30 = r30 + 1; // 0x806B2BC8
    if (<) goto 0x0x806b2ba0;
    r0 = *(0x24 + r1); // lwz @ 0x806B2BD4
    r31 = *(0x1c + r1); // lwz @ 0x806B2BD8
    r30 = *(0x18 + r1); // lwz @ 0x806B2BDC
    r29 = *(0x14 + r1); // lwz @ 0x806B2BE0
    return;
}