/* Function at 0x806B2ABC, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806B2ABC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r6, -1 */ // 0x806B2AC4
    /* li r4, 1 */ // 0x806B2AC8
    *(0x14 + r1) = r0; // stw @ 0x806B2ACC
    /* li r0, 0 */ // 0x806B2AD0
    /* li r5, 0 */ // 0x806B2AD4
    *(0xc + r1) = r31; // stw @ 0x806B2AD8
    r31 = r3;
    *(0x8b0 + r3) = r4; // stw @ 0x806B2AE0
    /* li r4, 1 */ // 0x806B2AE4
    *(0x270 + r3) = r6; // stw @ 0x806B2AE8
    *(0x44 + r3) = r0; // stw @ 0x806B2AEC
    *(0x274 + r3) = r6; // stw @ 0x806B2AF0
    *(0x48 + r3) = r0; // stw @ 0x806B2AF4
    *(0x278 + r3) = r6; // stw @ 0x806B2AF8
    *(0x27c + r3) = r0; // stw @ 0x806B2AFC
    *(0x8b4 + r3) = r0; // stb @ 0x806B2B00
    r12 = *(0x4c + r3); // lwzu @ 0x806B2B04
    r12 = *(0x10 + r12); // lwz @ 0x806B2B08
    /* mtctr r12 */ // 0x806B2B0C
    /* bctrl  */ // 0x806B2B10
    r3 = r31;
    r4 = r31 + 0x4c; // 0x806B2B18
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31 + 0x4c; // 0x806B2B20
    /* li r4, 2 */ // 0x806B2B24
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r31;
    /* li r4, 0 */ // 0x806B2B30
    /* li r5, 0 */ // 0x806B2B34
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x806B2B3C
    r31 = *(0xc + r1); // lwz @ 0x806B2B40
    return;
}